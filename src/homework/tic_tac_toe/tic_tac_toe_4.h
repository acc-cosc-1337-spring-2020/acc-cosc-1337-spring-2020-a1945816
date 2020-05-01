//h
#ifndef TIC_TAC_TOE_4
#define TIC_TAC_TOE_4
#include "tic_tac_toe.h"
#include<string>
#include<vector>
using std::string;
class TicTacToe4 : public TicTacToe
{
public:
	TicTacToe4(std::vector<string> p, string winner) {}
	TicTacToe4() : TicTacToe(4) {}
private:
	bool check_column_win()const override;
	bool check_row_win()const override;
	bool check_diagonal_win()const override;

};

#endif // !TIC_TAC_TOE_3