#include "tic_tac_toe.h"
int main() 
{
	TicTacToe game;
	string first_player{""};
	cout << "What symbol would you like to start as Enter a Capital X or O: ";
	cin >> first_player;
	try
	{
		game.start_game(first_player);
		
	}
	catch (Error e)
	{
		cout << e.get_message() << "\n";
	}
	
	



	return 0;
}