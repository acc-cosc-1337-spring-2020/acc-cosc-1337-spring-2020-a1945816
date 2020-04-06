#include "tic_tac_toe.h"
int main() 
{
	TicTacToe game;
	int position, cont;
	string first_player{""};

	do
	{
		while (!(first_player == "X" || first_player == "O"))
		{
			try
			{
				cout << "What symbol would you like to start as Enter a Capital X or O: ";
				cin >> first_player;
			}
			catch (Error e)
			{
				cout << e.get_message();
			}
		}

		game.start_game(first_player);

		try
		{
			while (game.game_over() == false)
			{
				cout << "choose a position between 1 and 9: " << "\n";
				cin >> position;

				game.mark_board(position);
				game.display_board();
			}
		}
		catch (Error e)
		{
			cout << e.get_message() << "\n";
		}

		cout << "Enter 1 to play again";
		cin >> cont;

	} while (cont == 1);



	return 0;
}