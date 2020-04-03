#include "tic_tac_toe.h"
int main() 
{
	TicTacToe game;
	int position;
	string first_player{""};
	cout << "What symbol would you like to start as Enter a Capital X or O: ";
	cin >> first_player;
	try
	{
		game.start_game(first_player);
		while(game.game_over() == false)
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
	
	



	return 0;
}