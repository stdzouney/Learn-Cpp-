#include <iostream>
using namespace std;


int main() 
{

	//sizeof
	char a;
	float b = 3.4l;
	cout << sizeof(char) << endl;
	cout << sizeof(a) << endl;
	cout << sizeof(float) << endl;
	cout << sizeof(b) << endl;
	cout << sizeof a << endl;
	cout << sizeof b << endl << endl;


	// ( , ) Comma operator
	int x0 = 3;
	int y0 = 10;
	int z0;
	z0 = (++x0, ++y0); // ++x , ++y ,z = y  
	cout << z0 << endl;

	int x1 = 3;
	int y1 = 10;
	int w1;
	w1 = x1,y1;
	cout << w1 << endl; 
	// result = 3 ->   Precedence "=" > "," 
	w1 = (x1, y1);
	cout << w1 << endl << endl; // result = 10

	//Conditional Operator
}