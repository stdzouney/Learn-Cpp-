#include <iostream>
#include <bitset>
using namespace std;

namespace work1
{
	int a = 1;
	void doSomething()
	{
		a += 3;
		cout << a << endl;
	}
}

namespace work2
{
	int a = 1;
	void doSomething()
	{
		a += 5;
		cout << a << endl;
	}
}

int main()
{
	work1::a;
	work1::doSomething();


	work2::a;
	work2::doSomething();

	return 0;
}