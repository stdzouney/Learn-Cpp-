#include <iostream>
#include <bitset>
using namespace std;



int main()
{
	//3_8 Bitwise Operators 비트단위 연산자

	int a = 0b00110111;
	int b = 0b00001100;

	cout << bitset<8>(a) << endl;
	cout << bitset<8>(b) << endl;

	// 3 << x  is  3 * 2^x 
	// 3 >> x  is  3 / 2^x  
	cout << bitset<8>(a << 1) << endl;
	cout << bitset<8>(b << 2) << endl;
	cout << bitset<8>(a >> 1) << endl;
	cout << bitset<8>(b >> 2) << endl << endl;

	cout << bitset<8>(~a) << endl;    // ~ NOT 
	cout << bitset<8>(a & b) << endl; // & AND
	cout << bitset<8>(a | b) << endl; // | OR
	cout << bitset<8>(a ^ b) << endl; // ^ XOR


}