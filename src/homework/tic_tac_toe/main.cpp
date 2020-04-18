#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
int main() 
{
	TicTacToeManager manager;
	int position, cont;
	string first_player{""};

	do
	{
		int game_choice;
		cout << "What Game would you like to play? (press 1 for 3x3 or 2 for 4x4)";
		cin >> game_choice;
		if (game_choice == 1)
		{
			TicTacToe3 game;
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
					cin >> game;

				}
				cout << game;
			}
			catch (Error e)
			{
				cout << e.get_message() << "\n";
			}
			manager.save_game(game);
			cout << "Enter 1 to play again";
			cin >> cont;
		}
		else
		{
			TicTacToe4 game;
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
					cin >> game;

				}
				cout << game;
			}
			catch (Error e)
			{
				cout << e.get_message() << "\n";
			}
			manager.save_game(game);
			cout << "Enter 1 to play again";
			cin >> cont;
		}

	} while (cont == 1);

		cout << manager;

		return 0;
}