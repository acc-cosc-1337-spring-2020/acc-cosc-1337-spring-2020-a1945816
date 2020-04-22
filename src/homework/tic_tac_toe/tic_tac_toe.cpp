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
	if (position < 1 || position > pegs.size())
	{
		throw Error("Position out of range.");
	}

	else if (player == "")
	{
		throw Error(" Must start game first.");
	}
	
	
	pegs[position - 1] = player;
	set_next_player();
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
	winner = "C";
	return true;
}

//Winner functions LOTS OF COPY PASTE probably a better way to do this
bool TicTacToe::check_column_win()
{
	
	return false;
	
}

bool TicTacToe::check_row_win()
{
	
	return false;
	
}

bool TicTacToe::check_diagonal_win()
{
	
	return false;
	
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
		set_winner();
		return true;
	}
	else if (check_diagonal_win() == true)
	{
		set_winner();
		return true;
	}
	else if (check_row_win() == true)
	{
		set_winner();
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

std::istream & operator>>(std::istream & in, TicTacToe & p)
{
	cout << "Enter position: ";
	int position;
	cin >> position;
	try
	{
		p.mark_board(position);
	}
	catch (Error e)
	{
		cout << e.get_message() << "\n";
	}
	return in;
}

std::ostream & operator<<(std::ostream & out, const TicTacToe & t)
{
	out << "\n";

	for (std::size_t i = 0; i < t.pegs.size(); i += sqrt(t.pegs.size()))
	{
		out << t.pegs[i] << "|" << t.pegs[i + 1] << "|" << t.pegs[i + 2];

		if (t.pegs.size() == 16)
		{
			out << "|" << t.pegs[i + 3];
		}

		out << "\n";
	}
	return out;
}

