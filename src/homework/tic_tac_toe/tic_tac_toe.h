//h
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H
#include <string>
#include <iostream>
#include<vector>
using std::string;	using std::cout;	using std::cin;
using std::vector;
class TicTacToe
{
public:
	bool game_over();
	void start_game(string first_player);
	void mark_board(int position);
	string get_player() const { return player; }
	void display_board() const;
	string get_winner() {return winner; }
	friend std::ostream& operator<<(std::ostream & out, const TicTacToe &game);
	friend std::istream& operator>>(std::istream & in, TicTacToe &game);
private:
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void set_winner();
	void set_next_player();
	bool check_board_full();
	void clear_board();
	string player = "";
	string winner = "";
	std::vector<string> pegs{ 9, " " };
	
};


class Error 
{
public:
	Error(string msg) : message{ msg } {}
	string get_message()const { return message; }
private:
	string message;

};
#endif