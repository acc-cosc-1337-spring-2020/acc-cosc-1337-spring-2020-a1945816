#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
int main() 
{
	TicTacToeManager manager;
	int position, cont;
	string first_player{""};

	do
	{
		TicTacToe game;
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
			}
		}
		catch (Error e)
		{
			cout << e.get_message() << "\n";
		}
		manager.save_game(game);
		cout << "Enter 1 to play again";
		cin >> cont;

	} while (cont == 1);

	cout << manager;

	return 0;
}