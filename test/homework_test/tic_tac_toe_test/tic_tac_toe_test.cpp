#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test can't call mark board before start game")
{
	TicTacToe game;
	REQUIRE_THROWS_AS(game.mark_board(1), Error);
}

TEST_CASE("Test start game accepts only X or O")
{
	TicTacToe game;
	REQUIRE_THROWS_AS(game.start_game("c"), Error);
}

TEST_CASE("Test Mark position validation")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE_THROWS_AS(game.mark_board(0), Error);
}

TEST_CASE("Verify set first player to O")
{
	TicTacToe game;
	game.start_game("O");
	REQUIRE(game.get_player() == "O");
}

TEST_CASE("Test start game with X flow")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE(game.get_player() == "X");
	game.mark_board(4);
	REQUIRE(game.get_player() == "O");
}

TEST_CASE("Test start game with O flow")
{
	TicTacToe game;
	game.start_game("O");
	REQUIRE(game.get_player() == "O");
	game.mark_board(2);
	REQUIRE(game.get_player() == "X");
}

TEST_CASE("Test game over")
{
	TicTacToe game;
	game.start_game("O");
	for (int i = 1; i < 9; ++i)
	{
		game.mark_board(i);
		REQUIRE(game.game_over() == false);
	}
	game.mark_board(9);
	REQUIRE(game.game_over() == true);
}

//Testing win conditions
TEST_CASE("Test first Column win")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);
	game.mark_board(1);//X        
	REQUIRE(game.game_over() == false);
	game.mark_board(2);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(4);//X          
	REQUIRE(game.game_over() == false);
	game.mark_board(5);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(7);//X
	//X wins
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test second Column win")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);
	game.mark_board(2);//X        
	REQUIRE(game.game_over() == false);
	game.mark_board(1);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(5);//X          
	REQUIRE(game.game_over() == false);
	game.mark_board(3);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(8);//X
	//X wins
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test third Column win")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);
	game.mark_board(3);//X        
	REQUIRE(game.game_over() == false);
	game.mark_board(2);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(6);//X          
	REQUIRE(game.game_over() == false);
	game.mark_board(5);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(9);//X
	//X wins
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test first row win")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);
	game.mark_board(1);//X        
	REQUIRE(game.game_over() == false);
	game.mark_board(4);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(2);//X          
	REQUIRE(game.game_over() == false);
	game.mark_board(5);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(3);//X
	//X wins
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test second row win")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);
	game.mark_board(4);//X        
	REQUIRE(game.game_over() == false);
	game.mark_board(2);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(5);//X          
	REQUIRE(game.game_over() == false);
	game.mark_board(1);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(6);//X
	//X wins
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test third row win")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);
	game.mark_board(7);//X        
	REQUIRE(game.game_over() == false);
	game.mark_board(4);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(8);//X          
	REQUIRE(game.game_over() == false);
	game.mark_board(5);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(9);//X
	//X wins
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test diag top left  win")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);
	game.mark_board(1);//X        
	REQUIRE(game.game_over() == false);
	game.mark_board(4);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(5);//X          
	REQUIRE(game.game_over() == false);
	game.mark_board(6);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(9);//X
	//X wins
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test diag bottom left  win")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);
	game.mark_board(7);//X        
	REQUIRE(game.game_over() == false);
	game.mark_board(4);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(5);//X          
	REQUIRE(game.game_over() == false);
	game.mark_board(6);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(3);//X
	//X wins
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test for tie")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);
	game.mark_board(1);//X        
	REQUIRE(game.game_over() == false);
	game.mark_board(2);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(4);//X          
	REQUIRE(game.game_over() == false);
	game.mark_board(7);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(5);//X
	REQUIRE(game.game_over() == false);
	game.mark_board(9);//O       
	REQUIRE(game.game_over() == false);
	game.mark_board(8);//X         
	REQUIRE(game.game_over() == false);
	game.mark_board(6);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(3);//X          
	
	//X wins
	REQUIRE(game.game_over() == true);
}