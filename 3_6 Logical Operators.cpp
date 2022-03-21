#include <iostream>
#include <cmath>
using namespace std;



int main()
{
	//3_6 Logical Operators 논리 연산자

	cout << ((true && true) || false) << endl;
	cout << ((false && true) || true) << endl;
	cout << ((false && true) || false || true) << endl;
	cout << ((14 > 13 || 2 > 1) && (9 > 1)) << endl;
	cout << (!(2314123 > 2 || 123123 > 2387)) << endl;

	int x = 1, y = 2;
	if (x == 2 && y++ == 2)
		y++;
	cout << y << endl;
	// why is the y-value 2 not 4 
	// because of && is not calculating if left-value is false
}