#include <iostream>
using namespace std;


int main()
{
	//Conditional Operator, »ïÇ×¿¬»êÀÚ

	bool onSale = true;
	int price = (onSale == true) ? 10 : 100; // true 10 , false 100; 
	
	if (onSale) price = 10;
	else price = 100;

}
