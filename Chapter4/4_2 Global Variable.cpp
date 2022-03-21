#include <iostream>
#include <bitset>
using namespace std;

namespace conA{
	const float pi = 3.14;
	const float gravity = 9.8;
}

void doSomething() {
	static int a=-1; // static is initialized only once
	++a;
	cout << a << endl;
}
int main()
{
	doSomething();
	doSomething();
	doSomething();
	doSomething();
	doSomething();
	doSomething();

	int r = 3;
	
	cout << r * r * conA::pi << endl;
	cout << conA::gravity * 12 << endl;
}