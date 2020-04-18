#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test can't call mark board before start game")
{
	TicTacToe3 game;
	REQUIRE_THROWS_AS(game.mark_board(1), Error);
}

TEST_CASE("Test start game accepts only X or O")
{
	TicTacToe3 game;
	REQUIRE_THROWS_AS(game.start_game("c"), Error);
}

TEST_CASE("Test Mark position validation")
{
	TicTacToe3 game;
	game.start_game("X");
	REQUIRE_THROWS_AS(game.mark_board(0), Error);
}

TEST_CASE("Verify set first player to O")
{
	TicTacToe3 game;
	game.start_game("O");
	REQUIRE(game.get_player() == "O");
}

TEST_CASE("Test start game with X flow")
{
	TicTacToe3 game;
	game.start_game("X");
	REQUIRE(game.get_player() == "X");
	game.game_over();
	game.mark_board(4);
	REQUIRE(game.get_player() == "O");
}

TEST_CASE("Test start game with O flow")
{
	TicTacToe3 game;
	game.start_game("O");
	REQUIRE(game.get_player() == "O");
	game.game_over();
	game.mark_board(2);
	REQUIRE(game.get_player() == "X");
}
//Testing Game over Scenarios, Tie or win
TEST_CASE("Test game over")
{
	TicTacToe3 game;
	game.start_game("X");
	for (int i = 1; i < 9; ++i)
	{
		game.mark_board(i);
		REQUIRE(game.game_over() == false);
	}
	game.mark_board(9);
	REQUIRE(game.game_over() == true);
}


TEST_CASE("Test first Column win")
{
	TicTacToe3 game;
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
	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test second Column win")
{
	TicTacToe3 game;
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
	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test third Column win")
{
	TicTacToe3 game;
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
	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test first row win")
{
	TicTacToe3 game;
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
	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test second row win")
{
	TicTacToe3 game;
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
	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test third row win")
{
	TicTacToe3 game;
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
	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test diag top left  win")
{
	TicTacToe3 game;
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
	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test diag bottom left  win")
{
	TicTacToe3 game;
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
	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test for tie")
{
	TicTacToe3 game;
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
	
	//C wins
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "C");
}
	

//TICTACTOE4
//Testing Game over Scenarios, Tie or win
TEST_CASE("Test game4 over")
{
	TicTacToe4 game;
	game.start_game("X");
	for (int i = 1; i < 16; ++i)
	{
		game.mark_board(i);
		REQUIRE(game.game_over() == false);
	}
	game.mark_board(16);
	REQUIRE(game.game_over() == true);
}


TEST_CASE("Test first Column4 win")
{
	TicTacToe3 game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);
	game.mark_board(1);//X        
	REQUIRE(game.game_over() == false);
	game.mark_board(2);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(5);//X          
	REQUIRE(game.game_over() == false);
	game.mark_board(6);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(9);//X
	REQUIRE(game.game_over() == false);
	game.mark_board(12);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(13);//X
	//X wins
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test second Column4 win")
{
	TicTacToe3 game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);
	game.mark_board(2);//X        
	REQUIRE(game.game_over() == false);
	game.mark_board(1);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(6);//X          
	REQUIRE(game.game_over() == false);
	game.mark_board(5);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(10);//X
	REQUIRE(game.game_over() == false);
	game.mark_board(12);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(14);//X
	//X wins
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test third Column4 win")
{
	TicTacToe3 game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);
	game.mark_board(3);//X        
	REQUIRE(game.game_over() == false);
	game.mark_board(1);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(7);//X          
	REQUIRE(game.game_over() == false);
	game.mark_board(5);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(11);//X
	REQUIRE(game.game_over() == false);
	game.mark_board(12);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(15);//X
	//X wins
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");
}
TEST_CASE("Test fourth Column4 win")
{
	TicTacToe3 game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);
	game.mark_board(4);//X        
	REQUIRE(game.game_over() == false);
	game.mark_board(1);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(8);//X          
	REQUIRE(game.game_over() == false);
	game.mark_board(5);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(13);//X
	REQUIRE(game.game_over() == false);
	game.mark_board(12);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(16);//X
	//X wins
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test first row4 win")
{
	TicTacToe3 game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);
	game.mark_board(1);//X        
	REQUIRE(game.game_over() == false);
	game.mark_board(10);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(2);//X          
	REQUIRE(game.game_over() == false);
	game.mark_board(5);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(3);//X
	REQUIRE(game.game_over() == false);
	game.mark_board(12);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(4);//X
	//X wins
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test second row4 win")
{
	TicTacToe3 game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);
	game.mark_board(5);//X        
	REQUIRE(game.game_over() == false);
	game.mark_board(2);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(6);//X          
	REQUIRE(game.game_over() == false);
	game.mark_board(1);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(7);//X
	REQUIRE(game.game_over() == false);
	game.mark_board(10);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(8);//X
	//X wins
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test third row4 win")
{
	TicTacToe3 game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);
	game.mark_board(8);//X        
	REQUIRE(game.game_over() == false);
	game.mark_board(4);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(9);//X          
	REQUIRE(game.game_over() == false);
	game.mark_board(5);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(10);//X
	REQUIRE(game.game_over() == false);
	game.mark_board(5);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(12);//X
	//X wins
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");
}
TEST_CASE("Test fourth row4 win")
{
	TicTacToe3 game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);
	game.mark_board(13);//X        
	REQUIRE(game.game_over() == false);
	game.mark_board(4);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(14);//X          
	REQUIRE(game.game_over() == false);
	game.mark_board(5);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(15);//X
	REQUIRE(game.game_over() == false);
	game.mark_board(5);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(16);//X
	//X wins
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test diag top left4  win")
{
	TicTacToe3 game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);
	game.mark_board(1);//X        
	REQUIRE(game.game_over() == false);
	game.mark_board(4);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(6);//X          
	REQUIRE(game.game_over() == false);
	game.mark_board(2);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(10);//X
	REQUIRE(game.game_over() == false);
	game.mark_board(6);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(15);//X
	//X wins
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test diag bottom left  win")
{
	TicTacToe3 game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);
	game.mark_board(13);//X        
	REQUIRE(game.game_over() == false);
	game.mark_board(5);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(10);//X          
	REQUIRE(game.game_over() == false);
	game.mark_board(6);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(7);//X
	REQUIRE(game.game_over() == false);
	game.mark_board(6);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(4);//X
	//X wins
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test for tie")
{
	TicTacToe3 game;
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
	REQUIRE(game.game_over() == false);
	game.mark_board(13);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(10);//X          
	REQUIRE(game.game_over() == false);
	game.mark_board(14);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(15);//X
	REQUIRE(game.game_over() == false);
	game.mark_board(11);//O       
	REQUIRE(game.game_over() == false);
	game.mark_board(16);//X         
	REQUIRE(game.game_over() == false);
	game.mark_board(12);//O          
	


	//C wins
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "C");
}
