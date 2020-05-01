#include "tic_tac_toe_manager.h"
#include <memory>
//cpp


TicTacToeManager::TicTacToeManager(TicTacToeData & data)
{
	unique_ptr<TicTacToe> win;
	
	data.get_games();
	for (auto ch : games)
	{
		string winner = TicTacToe::get_winner;
		return winner;
	}

}

void TicTacToeManager::save_game(std::unique_ptr<TicTacToe> & game)
{
	update_winner_count(game->get_winner());
	games.push_back(std::move(game));
}

void TicTacToeManager::update_winner_count(std::string winner)
{
	if (winner == "X")
	{
		x_wins++;
	}
	else if (winner == "O")
	{
		o_wins++;
	}
	else
	{
		ties++;
	}
}

std::ostream & operator<<(std::ostream & out, const TicTacToeManager & m)
{
	out << "\n";
	for (auto& game : m.games)
	{
		out << *game << "\n";
	}

	out << "\nO wins: " << m.o_wins << "\n";
	out << "X wins: " << m.x_wins << "\n";
	out << "Ties: " << m.ties << "\n";

	return out;
}