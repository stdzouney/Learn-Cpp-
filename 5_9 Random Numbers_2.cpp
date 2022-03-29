#include <iostream>
#include <random>
#include <cstdlib> //radn() srand()
#include <ctime> // time()

using namespace std;


int main()
{
	random_device rd;
	mt19937 mersenne(rd());
	uniform_int_distribution<> dice(1, 6);

	for (int count = 1; count <= 20; ++count)
	{
		cout << dice(mersenne) << "\t";

		if (count % 5 == 0)
			cout << endl;
	}

}