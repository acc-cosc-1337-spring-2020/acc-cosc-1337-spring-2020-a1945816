//cpp
#include "tic_tac_toe.h"

void TicTacToe::start_game(string first_player)
{
	player = first_player;
	int position = 0;
	if (player == "X" || player == "O")
	{
		
		mark_board(position);
	}
	
	else
	{
		throw Error("Must be a capital X or O");
	}
}

void TicTacToe::mark_board(int position)
{
	if (player == "O" || player == "X")
	{
		string choice = "no";
		do
		{
			cout << "What position would player "<< player << " like to mark?: ";
			cin >> position;
			
			if (position >= 1 && position <= 9)
			{
				string pos1;
				string pos2;
				string pos3;
				string pos4;
				string pos5;
				string pos6;
				string pos7;
				string pos8;
				string pos9;

				switch (position)
				{
				case 1:
					pos1 = player;
				case 2:
					pos2 = player;
				case 3:
					pos3 = player;
				case 4:
					pos4 = player;
				case 5:
					pos5 = player;
				case 6:
					pos6 = player;
				case 7:
					pos7 = player;
				case 8:
					pos8 = player;
				case 9:
					pos9 = player;
				default:
					break;
				}

			}

			else
			{
				throw Error("Position must be 1 to 9");
			}
			set_next_player();
			cout << "Would player " << player << " like to concede? (yes or no): ";
			cin >> choice;
		} while (choice == "no");
	}

	else 
	{
		throw Error("Must start game first.");
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
