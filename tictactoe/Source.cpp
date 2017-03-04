#include "stdafx.h"
#include <iostream>
#include "TitTacToe.h"

int main()
{
	char restart;
	TicTacToe game;
	game.welcome();
	game.getInput();
	std::cout << "Do you want to play again? Enter (y/n): ";
	std::cin >> restart;
	if (restart == 'y')
	{
		std::cout << "\n\n\n";
		game.welcome();
		game.getInput();
	}
	else if (restart == 'n')
		return 0;
}