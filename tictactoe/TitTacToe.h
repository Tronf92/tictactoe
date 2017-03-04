#ifndef TICTACTOE_H_INCLUDED
#define TICTACTOE_H_INCLUDED

class TicTacToe
{
public:
	TicTacToe();
	~TicTacToe();
	void welcome();
	const  void getInput();
private:
	char blockEntries[9];
	int checkStatus() const;
	int turns;
	void printBoard() const;
	const void resetBoard();
};

#endif // TICTACTOE_H_INCLUDED