#include "tic_tac_toe_4.h"

/*
class function check_column_win
Win by column if and return true if (each column index)
0, 1,  2,  3 
4, 5,  6,  7 
8, 9, 10, 11 
12,13,14, 15 
else
false
*/

bool TicTacToe4::check_column_win()
{
	if (TicTacToe::pegs[0] == "X")
	{
		if (pegs[4] == "X")
		{
			if (pegs[8] == "X")
			{
				if (pegs[12] == "X")
				{
					set_winner();
					cout << winner << " Wins! \n";
					return true;
				}
			}

		}

	}
	else if (pegs[1] == "X")
	{
		if (pegs[5] == "X")
		{
			if (pegs[9] == "X")
			{
				if (pegs[13] == "X")
				{
					set_winner();
					cout << winner << " Wins! \n";
					return true;
				}
			}
		}

	}
	else if (pegs[2] == "X")
	{
		if (pegs[6] == "X")
		{
			if (pegs[10] == "X")
			{
				if (pegs[14] == "X")
				{
					set_winner();
					cout << winner << " Wins! \n";
					return true;
				}
			}
		}

	}
	else if (pegs[3] == "X")
	{
		if (pegs[7] == "X")
		{
			if (pegs[11] == "X")
			{
				if (pegs[15] == "X")
				{
					set_winner();
					cout << winner << " Wins! \n";
					return true;
				}
			}
		}

	}
	else if (pegs[0] == "O")
	{
		if (pegs[4] == "O")
		{
			if (pegs[8] == "O")
			{
				if (pegs[12] == "O")
				{
					set_winner();
					cout << winner << " Wins! \n";
					return true;
				}
			}
		}

	}
	else if (pegs[1] == "O")
	{
		if (pegs[5] == "O")
		{
			if (pegs[9] == "O")
			{
				if (pegs[13] == "O")
				{
					set_winner();
					cout << winner << " Wins! \n";
					return true;
				}
			}
		}

	}
	else if (pegs[2] == "O")
	{
		if (pegs[6] == "O")
		{
			if (pegs[10] == "O")
			{
				if (pegs[14] == "O")
				{
					set_winner();
					cout << winner << " Wins! \n";
					return true;
				}
			}
		}

	}
	else if (pegs[3] == "O")
	{
	if (pegs[7] == "O")
	{
		if (pegs[11] == "O")
		{
			if (pegs[15] == "O")
			{
				set_winner();
				cout << winner << " Wins! \n";
				return true;
			}
		}
	}

	}
	else
	{
		return false;
	}
}

bool TicTacToe4::check_row_win()
{
	if (pegs[0] == "X")
	{
		if (pegs[1] == "X")
		{
			if (pegs[2] == "X")
			{
				if (pegs[3] == "X")
				{
					set_winner();
					cout << winner << " Wins! \n";
					return true;
				}
			}
		}

	}
	else if (pegs[4] == "X")
	{
		if (pegs[5] == "X")
		{
			if (pegs[6] == "X")
			{
				if(pegs[7] == "X")
				{
					set_winner();
					cout << winner << " Wins! \n";
					return true;
				}
			}
		}

	}
	else if (pegs[8] == "X")
	{
		if (pegs[9] == "X")
		{
			if (pegs[10] == "X")
			{
				if (pegs[11] == "X")
				{
					set_winner();
					cout << winner << " Wins! \n";
					return true;
				}
			}
		}

	}
	else if (pegs[12] == "X")
	{
		if (pegs[13] == "X")
		{
			if (pegs[14] == "X")
			{
				if (pegs[15] == "X")
				{
					set_winner();
					cout << winner << " Wins! \n";
					return true;
				}
			}
		}

	}
	else if (pegs[0] == "O")
	{
		if (pegs[1] == "O")
		{
			if (pegs[2] == "O")
			{
				if (pegs[3] == "O")
				{
					set_winner();
					cout << winner << " Wins! \n";
					return true;
				}
			}
		}

	}
	else if (pegs[4] == "O")
	{
		if (pegs[5] == "O")
		{
			if (pegs[6] == "O")
			{
				if (pegs[7] == "O")
				{
					set_winner();
					cout << winner << " Wins! \n";
					return true;
				}
			}
		}

	}
	else if (pegs[8] == "O")
	{
		if (pegs[9] == "O")
		{
			if (pegs[10] == "O")
			{
				if (pegs[11] == "O")
				{
					set_winner();
					cout << winner << " Wins! \n";
					return true;
				}
			}
		}

	}
	else if (pegs[12] == "O")
	{
		if (pegs[13] == "O")
		{
			if (pegs[14] == "O")
			{
				if (pegs[15] == "O")
				{
					set_winner();
					cout << winner << " Wins! \n";
					return true;
				}
			}
		}

	}
	else
	{
		return false;
	}
}

bool TicTacToe4::check_diagonal_win()
{
	if (pegs[0] == "X")
	{
		if (pegs[5] == "X")
		{
			if (pegs[10] == "X")
			{
				if (pegs[15] == "X")
				{
					set_winner();
					cout << winner << " Wins! \n";
					return true;
				}
			}
		}

	}
	else if (pegs[12] == "X")
	{
		if (pegs[9] == "X")
		{
			if (pegs[6] == "X")
			{
				if (pegs[3] == "X")
				{
					set_winner();
					cout << winner << " Wins! \n";
					return true;
				}
			}
		}

	}

	else if (pegs[0] == "O")
	{
		if (pegs[5] == "O")
		{
			if (pegs[10] == "O")
			{
				if (pegs[15] == "O")
				{
					set_winner();
					cout << winner << " Wins! \n";
					return true;
				}
			}
		}

	}
	else if (pegs[12] == "O")
	{
		if (pegs[9] == "O")
		{
			if (pegs[6] == "O")
			{
				if (pegs[3] == "O")
				{
					set_winner();
					cout << winner << " Wins! \n";
					return true;
				}
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
0, 1,  2,  3 are equal
4, 5,  6,  7 are equal
8, 9, 10, 11 are equal 
12,13,14, 15 are equal
*/



/*
class function check_diagonal_win
Win diagonally
0, 1,  2,  3
4, 5,  6,  7
8, 9, 10, 11
12,13,14, 15

*/
