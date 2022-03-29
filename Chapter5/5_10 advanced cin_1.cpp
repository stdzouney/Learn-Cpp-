#include <iostream>


using namespace std;



char getOperator()
{
	cout << "Enter an operator (+, -, *, /, %) : ";
	char op;
	cin >> op;
	return op;

}


void printResult(int x, char op, int y)
{

	switch (op)
	{
		case '+':
			cout << x + y << endl;
			break;
		case '-':
			cout << x - y << endl;
			break;
		case '*':
			cout << x * y << endl;
			break;
		case '/':
			cout << x / y << endl;
			break;
		case'%':
			cout << x % y << endl;
			break;
		default:
			cout << "invaild operator" << endl;
			break;


	}

}
int main()
{
	printResult(10, getOperator(), 4);
	printResult(10, getOperator(), 4);
	printResult(10, getOperator(), 4);
	printResult(10, getOperator(), 4);
	printResult(10, getOperator(), 4);

}