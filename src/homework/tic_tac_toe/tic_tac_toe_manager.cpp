#include "tic_tac_toe_manager.h"

//cpp

void TicTacToeManager::save_game(const TicTacToe b)
{
	games.push_back(b);
	
	update_winner_count(get_winner());
}

void TicTacToeManager::get_winner_total(int & o, int & w, int & t)
{
	cout << x_win << "\n" << o_win << "\n" << ties;
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
	
	out << &TicTacToe::get_winner << &TicTacToeManager::get_winner_total;
	for (auto& games : manager.games)
	{
		out << &TicTacToe::display_board;
	}
	
	return out;
}
