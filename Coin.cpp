#include "Coin.h"
#include "Game.h"
#include <iostream>
#include <ctime>

Coin::Coin() : centValue(0)
{	
	flip();
}

Coin::Coin(int centVal): centValue(centVal)
{
	
}

int Coin::getHead()
{
	return head;
}
int Coin::getTail()
{
	return tail;
}

void Coin::setHead()
{
	if (isHeads())
	{
		head++;
	}

}


void Coin::setTail()
{
	if (!isHeads())
	{
		tail++;
	}
}

void Coin::flip()
{
	 sideUp = rand() % 2 + 1;

}

bool Coin::isHeads()
{
	if (sideUp == 1)
	{
		return true;
	}
	else if (sideUp == 2)
	{
		return false;
	}

}

void Coin::getSideUp()
{

	if (isHeads())
	{
		cout << "Heads " << endl;
	}
	else
	{
		cout << "Tails " << endl;
	}

}

void Coin::printTotal()
{
	cout << "Total Heads: " << head << endl;
	cout << "Total Tails: " << tail;
}

int Coin::getcentValue() const
{
	return centValue;
}