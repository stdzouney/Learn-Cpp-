#include <iostream>
#include <random>
using namespace std;

int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (RAND_MAX + 1.0);

	return min + static_cast<int>((max - min + 1) * (rand() * fraction));
}

int main()
{
	srand(5323); // seed

	for (int count = 1; count <= 100; ++count)
	{
		cout << getRandomNumber(5, 200) << "\t";

		if (count % 5 == 0) cout << endl;
	}
}