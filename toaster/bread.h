#ifndef BREAD_H
#define BREAD_H
#include "pastries.h"

class Bread:public Pastries
{
public:
	Bread();
	void set_amount(int amount);//how many toast can be in at one time
};

#endif