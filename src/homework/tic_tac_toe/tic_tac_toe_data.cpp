#include "tic_tac_toe_data.h"

//cpp

void TicTacToeData::save_games(const std::vector<std::unique_ptr<TicTacToe>>& games)
{
	std::ofstream file_out(file_name, std::ios_base::trunc);

	for (auto ch : games)
	{
		file_out << TicTacToe::get_pegs();
		file_out << "  ";
		file_out << TicTacToe::get_winner();
		file_out << "\n";
	}

	file_out.close();
}

std::vector<std::unique_ptr<TicTacToe>> TicTacToeData::get_games()
{
	std::vector<TicTacToe> games;
	std::ifstream read_file(file_name);


	string pegs;
	string winner;

	if (read_file.is_open())
	{
		while (read_file >> pegs >> winner)
		{
			games(pegs, winner);
			games.push_back(games);

		}
	}
	read_file.close();

	return games;
	
}
