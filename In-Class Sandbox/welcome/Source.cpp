// SANDBOX ENVIRONMENT FOR PLAYING WITH ALL SORTS OF NEW FUN THINGS
#include <iostream>
using namespace std;
void BooleanExpressions()
{
	// Boolean expressions practice
	cout << boolalpha;
	cout << (12 > 5) << endl;
	cout << (7 <= 5) << endl;
	cout << (24.7 >= 25.0) << endl;

	int x = 10;
	cout << (x == 10) << endl;
	cout << (x != 8) << endl;
	cout << (x == 8) << endl;

	cout << (x = 10) << endl;
	cout << (x = 0) << endl;
	cout << endl;
}

void Logicalexpressions() 
{
	cout << boolalpha;
	int x = 12, y = -4, z = 0;
	cout << ((x > y) && (y > z)) << endl;
	cout << ((x > y) && (z > y)) << endl;
	cout << ((x <= z) || (y == z)) << endl;
	cout << ((x <= z) || (y != z)) << endl;
	cout << (!(x >= z)) << endl;
	cout << (x > y > z) << endl; // Watch out!
	cout << endl;
}

void sizeoffun() {
	cout << sizeof (int) << endl;
	cout << sizeof(short int) << endl;
	cout << sizeof(long int) << endl;
	cout << sizeof(signed int) << endl;
	cout << sizeof(unsigned int) << endl;
	cout << sizeof(float) << endl;
	cout << sizeof(double) << endl;
}

void conditoinaloperators() {
	int bills = 3;
	int cents = 9;
	cout << "$" << bills << ".";
	//cout << ( (cents<10) ? "0" : "" );
	if (cents < 10)
		cout << "0";
	else
		cout << "";
	cout << cents << endl;
}

int main() {
	BooleanExpressions();
	Logicalexpressions();
	sizeoffun();
	conditoinaloperators();
	return 0;
}