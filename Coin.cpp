#include "Coin.h"

#include <iostream>
#include <ctime>

Coin::Coin() : centValue(0)
{	
	flip();
}


void Coin::flip()
{
	int sideUp = rand() % 2 + 1;

}

bool Coin::isHeads()
{
	if (sideUp == 1)
	{
		return true;
	}
	else
	{
		return false;
	}

}

void Coin::getSideUp()
{
	string side;

	if (isHeads())
	{
		cout << "Heads";
	}
	else
	{
		cout << "Tails";
	}
}