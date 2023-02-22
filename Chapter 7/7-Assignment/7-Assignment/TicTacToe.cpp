#include <iostream>
using namespace std;

void displayBoard(char[][]);

/*-----------------------------------
# ticTacToe() accepts no arguments
# it runs a game of tic-tac-toe using
# 2d arrays
-------------------------------------*/
void ticTacToe()
{
	const int ROWS = 3, COLS = 3;
	int row, col;
	char turn, game = 'y';
	bool gameOver = false;
	while (tolower(game) == 'y')
	{
		// Initializes array
		char board[ROWS][COLS] =
		{
			{'*', '*', '*'},
			{'*', '*', '*'},
			{'*', '*', '*'},
		};
		
		// BROKEN

		while (gameOver == false)
		{
			// Player 1 turn
			displayBoard(board[ROWS][COLS]);
			cout << "It is player 1's turn: ";
			cin >> row >> col;
			board[row][col] = 'X';

			// Player 2 turn
			displayBoard(board[ROWS][COLS]);
			cout << "It is player 2's turn: ";
			cin >> row >> col;
			board[row][col] = 'y';
		}

		// Asks user if they want to play again
		cout << "Do you want to play again? (y/n): ";
		cin >> game;
	}
}

void displayBoard(char board[3][3])
{
	const int ROWS = 3, COLS = 3;
	for (int i = 0; i < ROWS; i++)
	{
		for (int i2 = 0; i2 < COLS; i2++)
		{
			cout << board[i][i2] << "\t";
		}
		cout << endl;
	}
	cout << "\n";
}