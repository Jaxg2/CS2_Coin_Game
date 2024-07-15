
#ifndef COIN_H
#define COIN_H

#include <iostream>
#include <vector>

using namespace std;

class Coin
{
private:
	bool heads;
	const int centValue;
	int sideUp;
	int head = 0;
	int tail = 0;
public:
	Coin();
	Coin(int value);
	void flip();
	bool isHeads();
	void getSideUp();
	int getHead();
	int getTail();
	void setHead();
	void setTail();
	void printTotal();

};

#endif