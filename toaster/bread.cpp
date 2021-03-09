#include "bread.h"


Bread::Bread()
{
	pastry_numbers = 0;
	pastry_name = "Bread";
	pastry_length = 0;//how long the toast will last
	proper_length = false;
}

void Bread::set_amount(int amount)//how many toast can be in at one time
{
	if(amount == 0)
	{
		std::cout << "There's No Bread!  :( \n";
		proper_length = false;
	}

	if(amount < 0)
	{
		std::cout << "Bread is never a negative!  :D \n" ;
		proper_length = false;
	}

	if(amount >= 5)
	{
		std::cout << "The Toaster is Too Small... \n" ;
		proper_length = false;
	}

	if(amount <= 4 && amount >= 1)
	{
		pastry_numbers = amount;
		proper_length = true;
	}

}

