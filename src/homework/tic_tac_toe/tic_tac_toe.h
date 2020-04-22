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
	TicTacToe(int size) : pegs(size*size, " ") {}
	bool game_over();
	void start_game(string first_player);
	void mark_board(int position);
	string get_player() const { return player; }
	string get_winner() {return winner; }
	friend std::ostream& operator<<(std::ostream & out, const TicTacToe &game);
	friend std::istream& operator>>(std::istream & in, TicTacToe &game);

protected:
	std::vector<string> pegs;
	virtual bool check_column_win();
	virtual bool check_row_win();
	virtual bool check_diagonal_win();
	void set_winner();
	string winner = "";

private:
	
	
	void set_next_player();
	bool check_board_full();
	void clear_board();
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
#endif