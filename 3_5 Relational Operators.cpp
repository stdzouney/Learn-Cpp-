#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	//3_5 Relational Operators 관계연산자

	int x = 1, y = 2;

	if (x == y) cout << "x and y is equal" << endl;
	if (x != y) cout << "x and y is not equal" << endl;
	if (x > y) cout << "x is greater than y" << endl;
	if (x < y) cout << "y is greater than x " << endl;
	if (x >= y) cout << "x is greater than or equal to y " << endl;
	if (x <= y) cout << "y is greater than or equal to x " << endl;

	double d1 = (100 - 99.99);
	double d2 = (10 - 9.99);
	
	if (d1 == d2) cout << "d1 and d2 is equal" << endl;
	else cout <<"d1 and d2 is not equal" << endl;
	// result 2  부동소수점끼리의 관계연산은 예상과 다르게 나올 수 있다.
	// 실제연산과 컴퓨터 안에서의 연산은 다르기때문에

	cout << (abs(d1 - d2)) << endl;

	double epsilon = 1e-10;

	if (abs(d1 - d2) < epsilon) cout << "Approximately equal" << endl;
	else cout <<"not equal" << endl;

}