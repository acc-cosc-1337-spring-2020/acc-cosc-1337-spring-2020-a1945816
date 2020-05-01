//h
#include "tic_tac_toe.h"
#include <fstream>
#include<string>
#include<vector>
class TicTacToeData : public TicTacToe
{
public:
	void save_games(const std::vector<std::unique_ptr<TicTacToe>>& games);
	std::vector<std::unique_ptr<TicTacToe>> get_games();
private:
	const std::string file_name{ "TicTacToe.dat" };
	std::string data;
};