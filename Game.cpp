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

}

void Game::FlipCoins()
{

}

Game::printScore()
{

}


int Game::getRounds()
{

}


int Game::getScore()
{

}

Game::Game()
{

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
