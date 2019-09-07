#include "Battle.h"
#include "Console Delay.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

// A function that manages an encounter with a monster
// Pre-Conditions:  The monster and player class to be used.
// Post-Conditions:  Return whether or not the player survived.
bool battle(Player player, Monster* monster) {

	char decision;
	int consecutiveStabs = 0;
	int monsterDamage;
	int playerDamage;
	bool turnEnd = false;
	srand(static_cast<unsigned int>(time(NULL)));

	cout << endl;

	// Run the battle function until either the player or monster dies
	while (player.getHealth() > 0 && monster->getHealth() > 0) {


		// Have the player make a choice to block or stab.
		cout << "You have " << player.getHealth() << " health and " << player.getBlocks() << " blocks remaining." << endl;
		delayConsole(0.5);
		// Allow the player to keep stabbing until player blocks or misses that ends the turn
		while (!turnEnd) {
			cout << "The " << monster->getName() << " has " << monster->getHealth() << " health remaining." << endl;
			delayConsole(0.5);

			// Calculate player damage, adding critical multiplier if necesarry.
			playerDamage = player.getAttack() - monster->getDefense();
			if (player.isChainCriticalDamage() && consecutiveStabs == 3) playerDamage *= 3;

			cout << "Would you like to (s)tab, or end your turn by (b)locking? " << endl;
			decision = makeDecision(player.getBlocks());
			cout << endl;

			// Check to see if the "kill switch" was activated.
			if (decision == '`') {
				monster->setHealth(0);
				cout << "You monster." << endl << endl;
				delayConsole(1);
				return true;
			}

			// depending upon block or stab the player takes said actions
			if (decision == 's') {

				if ((rand() % 100) < (player.getHitChance() - consecutiveStabs * 15)) {

					// Check to see if critical damage is being applied, and display a special message if it is.
					if (player.isChainCriticalDamage() && consecutiveStabs == 3) {
						cout << "Having staggered the monster, you prepare for a critical strike!" << endl;
						delayConsole(1);
					}

					// increments consecutive stabs, reducing the chance of successful stabs
					consecutiveStabs++;
					cout << "You stab the " << monster->getName() << " for " << playerDamage << " damage!" << endl;
					monster->setHealth(monster->getHealth() - playerDamage);

					// Check for other chain ability activations.
					if (consecutiveStabs == 4) {

						delayConsole(0.5);

						if (player.isChainBlockRegen()) {

							cout << "Through your consecutive stabs, you regain your focus.  You regain two blocks!" << endl;
							player.regenBlocks();

						}
						else if (player.isChainHealthRegen()) {

							cout << "Through your consecutive stabs, you feel reinvigorated.  You regain 30 health!" << endl;
							player.regenHealth();

						}

					}

				}
				else {

					// Tell the user they missed.
					cout << "You miss the " << monster->getName() << "!" << endl;
					player.setBlocking(false);
					turnEnd = true;
				}

			}
			else if (decision == 'b') {

				cout << "You hunker down to defend against the monster's strikes." << endl;
				player.setBlocking(true);
				player.reduceBlocks();
				turnEnd = true;

			}

			delayConsole(0.5);

			// checks to ssee if monster is dead. If it is then it flees the function
			if (monster->getHealth() <= 0) turnEnd = true;

		} 
		cout << endl;
		// Has the monster attack given correct conditions of player blocking or missing a stab
		if (monster->getHealth() > 0) {

			delayConsole(0.5);

			monsterDamage = monster->getAttack() - player.getDefense();

			if (player.isBlocking()) {
				monsterDamage = static_cast<int>(static_cast<double>(monsterDamage) * (player.getBlockReduction()));
			}
			// number of attacks per turn of monster (Determined by monster's speed.)
			for (int i = rand() % monster->getSpeed(); i < monster->getSpeed(); i++) {

				// Determine whether or not the monster hits based on its hit chance.

				if (rand() % 100 < monster->getHitChance()) {
					cout << "The " << monster->getName() << " strikes you for " << monsterDamage << " damage!" << endl;
					player.setHealth(player.getHealth() - monsterDamage);
				}
				else cout << "The " << monster->getName() << " misses!" << endl;

				delayConsole(0.5);

			}
			cout << endl;
		}

		turnEnd = false;
		consecutiveStabs = 0;
		delayConsole(1);

	}

	if (monster->getHealth() < 1) return true;
	else return false;

}

// A function which has the user choose between a block and a stab.  Check for invalid input.
// Pre-Conditions: provide number of blocks remaining
// Post-Conditions: Return the user's decision.
char makeDecision(int blocks) {

	char decision;
	bool validInput = false;

	// Read in the user's initial input
	cin >> decision;

	// checks for invalid input to run loop
	while (!validInput) {

		decision = tolower(decision);

		// A "kill switch" for use during production.
		if (decision == '`') return decision;

		// checks that player has blocks remaining before determining what input is valid. then proceeds to make sure input is valid
		// and tells player to re-input choice if necessary
		if (blocks != 0) {
			if (decision != 's' && decision != 'b') {

				cout << "Please enter 's' for stab or 'b' for block. " << endl;
				cin.ignore(INT_MAX);
				cin.clear();
				cin >> decision;

			}
			else validInput = true;
		}
		else {
			if (decision != 's') {
				cout << "You have run out of blocks. Your only option is to stab the thing in front of you." << endl;
				cout << "Please enter 's' for stab." << endl;
				cin.ignore(INT_MAX);
				cin.clear();
				cin >> decision;
			}
			else validInput = true;
		}

	}

	return decision;

}