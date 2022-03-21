#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	//3_5 Relational Operators ���迬����

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
	// result 2  �ε��Ҽ��������� ���迬���� ����� �ٸ��� ���� �� �ִ�.
	// ��������� ��ǻ�� �ȿ����� ������ �ٸ��⶧����

	cout << (abs(d1 - d2)) << endl;

	double epsilon = 1e-10;

	if (abs(d1 - d2) < epsilon) cout << "Approximately equal" << endl;
	else cout <<"not equal" << endl;

}