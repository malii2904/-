

#include <iostream>

using namespace std;

int main()
{
	int x = 2, y, z;

	x *= 3 + 2;
	cout << x << endl;

	x *= y = z = 4;
	cout << x << endl << y << endl << z << endl;

	x = y == z;
	cout << x << endl << y << endl << z << endl;


	x = x == (y = z);
	cout << x << endl << y << endl << z << endl;
}

