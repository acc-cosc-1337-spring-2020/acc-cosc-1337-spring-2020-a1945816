#include "tic_tac_toe.h"
//cpp




//startup functions
void TicTacToe::start_game(string first_player)
{
	if (first_player == "X" || first_player == "O")
	{
		
		player = first_player;
		clear_board();
	}
	
	else
	{
		throw Error("Must be a capital X or O");
	}
}

void TicTacToe::mark_board(int position)
{
	if (position < 1 || position > 9)
	{
		throw Error("Position must be between 1 and 9.");
	}

	else if (player == "")
	{
		throw Error(" Must start game first.");
	}
	
	
	pegs[position - 1] = player;
	set_next_player();
}

void TicTacToe::display_board() const
{
	for (int i = 0; i < 9; i += 3) 
	{
		cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2]<< "\n";
	}
}


void TicTacToe::set_next_player()
{
	if (player == "X")
	{
		player = "O";
	}
	else
	{
		player = "X";
	}
}

bool TicTacToe::check_board_full()
{
	for (std::size_t i = 0; i < pegs.size(); ++i)
	{
		if (pegs[i] == " ")
		{
			return false;
		}
	}
	return true;
}

//Winner functions LOTS OF COPY PASTE probably a better way to do this
bool TicTacToe::check_column_win()
{
	if (pegs[0] == "X")
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

bool TicTacToe::check_row_win()
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

bool TicTacToe::check_diagonal_win()
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

void TicTacToe::set_winner()
{
	if (player == "X")
	{
		winner = "O";
	}
	else
	{
		winner = "X";
	}
}


//Cleanup
void TicTacToe::clear_board()
{
	for (auto &peg : pegs) 
	{
		peg = " ";
	}
}

bool TicTacToe::game_over()
{
	if (check_column_win() == true)
	{
		return true;
	}
	else if (check_diagonal_win() == true)
	{
		return true;
	}
	else if (check_row_win() == true)
	{
		return true;
	}
	else if (check_board_full() == true)
	{
		winner == "C";
		cout << "It was a tie! \n";
		return true;
	}
	else
	{
		return false;
	}
}

