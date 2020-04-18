#include "tic_tac_toe_3.h"

/*
class function check_column_win
Win by column if and return true if
0,3, and 6 are equal
1, 4, and 7
2, 5, and 8
else
false
*/
bool TicTacToe3::check_column_win()
{
	if (TicTacToe::pegs[0] == "X")
	{
		if (pegs[3] == "X")
		{
			if (pegs[6] == "X")
			{
				set_winner();
				cout << winner << " Wins! \n";
				return true;
			}
		}

	}
	else if (pegs[1] == "X")
	{
		if (pegs[4] == "X")
		{
			if (pegs[7] == "X")
			{
				set_winner();
				cout << winner << " Wins! \n";
				return true;
			}
		}

	}
	else if (pegs[2] == "X")
	{
		if (pegs[5] == "X")
		{
			if (pegs[8] == "X")
			{
				set_winner();
				cout << winner << " Wins! \n";
				return true;
			}
		}

	}
	else if (pegs[0] == "O")
	{
		if (pegs[3] == "O")
		{
			if (pegs[6] == "O")
			{
				set_winner();
				cout << winner << " Wins! \n";
				return true;
			}
		}

	}
	else if (pegs[1] == "O")
	{
		if (pegs[4] == "O")
		{
			if (pegs[7] == "O")
			{
				set_winner();
				cout << winner << " Wins! \n";
				return true;
			}
		}

	}
	else if (pegs[2] == "O")
	{
		if (pegs[5] == "O")
		{
			if (pegs[8] == "O")
			{
				set_winner();
				cout << winner << " Wins! \n";
				return true;
			}
		}

	}
	else
	{
		return false;
	}
}

bool TicTacToe3::check_row_win()
{
	if (pegs[0] == "X")
	{
		if (pegs[1] == "X")
		{
			if (pegs[2] == "X")
			{
				set_winner();
				cout << winner << " Wins! \n";
				return true;
			}
		}

	}
	else if (pegs[3] == "X")
	{
		if (pegs[4] == "X")
		{
			if (pegs[5] == "X")
			{
				set_winner();
				cout << winner << " Wins! \n";
				return true;
			}
		}

	}
	else if (pegs[6] == "X")
	{
		if (pegs[7] == "X")
		{
			if (pegs[8] == "X")
			{
				set_winner();
				cout << winner << " Wins! \n";
				return true;
			}
		}

	}
	else if (pegs[0] == "O")
	{
		if (pegs[1] == "O")
		{
			if (pegs[2] == "O")
			{
				set_winner();
				cout << winner << " Wins! \n";
				return true;
			}
		}

	}
	else if (pegs[3] == "O")
	{
		if (pegs[4] == "O")
		{
			if (pegs[5] == "O")
			{
				set_winner();
				cout << winner << " Wins! \n";
				return true;
			}
		}

	}
	else if (pegs[6] == "O")
	{
		if (pegs[7] == "O")
		{
			if (pegs[8] == "O")
			{
				set_winner();
				cout << winner << " Wins! \n";
				return true;
			}
		}

	}
	else
	{
		return false;
	}
}

bool TicTacToe3::check_diagonal_win()
{
	if (pegs[0] == "X")
	{
		if (pegs[4] == "X")
		{
			if (pegs[8] == "X")
			{
				set_winner();
				cout << winner << " Wins! \n";
				return true;
			}
		}

	}
	else if (pegs[6] == "X")
	{
		if (pegs[4] == "X")
		{
			if (pegs[2] == "X")
			{
				set_winner();
				cout << winner << " Wins! \n";
				return true;
			}
		}

	}

	else if (pegs[0] == "O")
	{
		if (pegs[4] == "O")
		{
			if (pegs[8] == "O")
			{
				set_winner();
				cout << winner << " Wins! \n";
				return true;
			}
		}

	}
	else if (pegs[6] == "O")
	{
		if (pegs[4] == "O")
		{
			if (pegs[2] == "O")
			{
				set_winner();
				cout << winner << " Wins! \n";
				return true;
			}
		}

	}
	else
	{
		return false;
	}
}


/*
class function check_row_win
Win by row if
0, 1, 2 are equal
3,4,5 are equal
6,7,8 are equal
*/



/*
class function check_diagonal_win
Win diagonally
0 1 2
3 4 5
6 7 8
*/
