#ifndef BAGELS_H
#define BAGELS_H
#include "pastries.h"

class Bagels:public Pastries
{
public:
	Bagels();
	void set_amount(int amount);//how many toast can be in at one time
};

#endif