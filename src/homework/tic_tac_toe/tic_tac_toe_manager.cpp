#include "tic_tac_toe_manager.h"

//cpp

void TicTacToeManager::save_game(TicTacToe b)
{
	games.push_back(b);
	
	update_winner_count(b.get_winner());
}

void TicTacToeManager::get_winner_total(int & o, int & w, int & t)
{
	o = o_win;
	w = x_win;
	t = ties;
}

void TicTacToeManager::update_winner_count(string winner)
{
	if (winner == "X")
	{
		x_win += 1;
	}
	else if (winner == "O")
	{
		o_win += 1;
	}
	else
	{
		ties += 1;
	}
}

std::ostream & operator<<(std::ostream & out, const TicTacToeManager& manager)
{
	
	
	for (auto game : manager.games)
	{
		out << game<<"\n";
	}

	cout << manager.x_win << "\n" << manager.o_win << "\n" << manager.ties;
	
	return out;
}
