#include <iostream>
#include <limits>
using namespace std;

int main()
{
	int a,b;

	cin >> a;
	if (cin.fail())
	{
		cout << "invalid value" << endl;
		cin.clear();
		cin.ignore(numeric_limits<int>::max(), '\n');
	}
	cin >> b;
	

	cout << "a value :" << a << endl;
	cout << "b value :" << b << endl;


	
}