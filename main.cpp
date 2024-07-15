#include <iostream>
using namespace std;

#include "coin.h"
#include "game.h"
#include <ctime>

int main()
{
	srand(time(0));

	Coin coin;

	for (int i = 0; i < 20; i++)
	{
		coin.flip();
		coin.getSideUp();
		coin.setHead();
		coin.getHead();
		coin.setTail();
		coin.getTail();
	
	}
	coin.printTotal();

}