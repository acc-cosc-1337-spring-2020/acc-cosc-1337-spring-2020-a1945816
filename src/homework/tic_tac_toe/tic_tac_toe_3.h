//h
#ifndef TIC_TAC_TOE_3
#define TIC_TAC_TOE_3
#include "tic_tac_toe.h"
#include<string>
#include<vector>
using std::string;
class TicTacToe3 : public TicTacToe
{
public:
	TicTacToe3() : TicTacToe(3) {}
	TicTacToe3(std::vector<string> p, string winner) {}
private:
	bool check_column_win()const override;
	bool check_row_win()const override;
	bool check_diagonal_win()const override;

};

#endif // !TIC_TAC_TOE_3