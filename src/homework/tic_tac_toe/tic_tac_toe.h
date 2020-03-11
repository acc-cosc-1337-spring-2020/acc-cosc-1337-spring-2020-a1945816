//h
#include <string>
#include <iostream>
#include<vector>
using std::string;	using std::cout;	using std::cin;
class TicTacToe
{
public:
	bool game_over();
	void start_game(string first_player);
	void mark_board(int position);
	string get_player() const { return player; }
	void display_board() const;
private:
	void set_next_player();
	bool check_board_full();
	void clear_board();
	string player = "";
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