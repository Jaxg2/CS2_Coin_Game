#include "Game.h"
#include "Coin.h"
#include <iostream>
using namespace std;



Game::Game()
{
	totalScore = 0;
	rounds = 0;
}

void Game::printFlipResults()
{

	for (Coin coin : coins)
	{
		coin.getSideUp();
	}
}

void Game::FlipCoins()
{
	Coin coin;
	for (int i = 0; i < 3; i++)
	{
		coin.flip();
	}
}

void Game::printScore()
{

}


int Game::getRounds()
{

}


int Game::getScore()
{
	Coin coin;

	int balance = 0;

	for (int i = 0; i < 3; i++)
	{
		balance += coins[i].getcentValue();
	}
}


void Game::playGame()
{
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
