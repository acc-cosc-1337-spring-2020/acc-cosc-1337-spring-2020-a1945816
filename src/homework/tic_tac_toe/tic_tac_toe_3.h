//h
#include "tic_tac_toe.h"
class TicTacToe3 : public TicTacToe
{
public:
	TicTacToe3() = default;

private:
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
};