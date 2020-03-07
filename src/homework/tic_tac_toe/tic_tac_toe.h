//h
#include <string>
#include <iostream>
using std::string;	using std::cout;	using std::cin;
class TicTacToe
{
public:
	void start_game(string first_player);
	void mark_board(int position);
	string get_player() const { return player; }
private:
	void set_next_player();
	string player = "";

};

class Error 
{
public:
	Error(string msg) : message{ msg } {}
	string get_message()const { return message; }
private:
	string message;

};