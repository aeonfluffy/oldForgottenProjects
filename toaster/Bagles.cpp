#include "Bagels.h"

Bagels::Bagels()
{
	pastry_numbers = 0;
	pastry_name = "Bagel";
	pastry_length = 0;//how long the toast will last
	proper_length = false;
}

void Bagels::set_amount(int amount)//how many toast can be in at one time
{
	if(amount == 0)
	{
		std::cout << "There's No Bagel!  :( \n";
		proper_length = false;
	}

	if(amount < 0)
	{
		std::cout << "Bagel's are never a negative!  :D \n" ;
		proper_length = false;
	}

	if(amount >= 3)
	{
		std::cout << "The Toaster is Too Small... \n" ;
		proper_length = false;
	}

	if(amount <= 2 && amount >= 1)
	{
		pastry_numbers = amount;
		proper_length = true;
	}

}
