
#ifndef COIN_H
#define COIN_H

#include <iostream>
using namespace std;

class Coin
{
private:
	bool heads;
	const int centValue;
	int sideUp;
public:
	Coin();
	void flip();
	bool isHeads();
	void getSideUp();

};

#endif