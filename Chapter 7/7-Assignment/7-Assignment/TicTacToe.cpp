#include <iostream>
using namespace std;

void displayBoard(char[3][3]);
void player1(char[3][3]);
void player2(char[3][3]);
int winner(char[3][3]);

/*-----------------------------------
# ticTacToe() accepts no arguments
# it runs a game of tic-tac-toe using
# 2d arrays
-------------------------------------*/
void ticTacToe()
{
	const int ROWS = 3, COLS = 3;
	char turn, game = 'y';
	int gameOver = 0;
	while (tolower(game) == 'y')
	{
		// Initializes array
		char board[ROWS][COLS] =
		{
			{'*', '*', '*'},
			{'*', '*', '*'},
			{'*', '*', '*'},
		};

		while (gameOver != 1 && gameOver != 2 && gameOver != 3)
		{
			
			player1(board);
			gameOver = winner(board);
			player2(board);
			
		}

		// Asks user if they want to play again
		cout << "Do you want to play again? (y/n): ";
		cin >> game;
	}
}

/*---------------------------------------
# displayBoard() accepts board[3][3]
# it displays the board using a for loop
-----------------------------------------*/
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


/*---------------------------------------
# player1() accepts board[3][3]
# it prompts user for their move, validates it,
# and modifies the board accordingly
-----------------------------------------*/
void player1(char board[3][3])
{
	// Declares variables
	int row, col;

	// Displays the board and asks the user for their move
	displayBoard(board);
	cout << "It is player 1's turn\n"
		<< "Enter row number: ";
	cin >> row;
	cout << "Enter column number: ";
	cin >> col;

	// Validates that input is valid
	while (row < 1 || row > 3 || col < 1 || col > 3 || board[row - 1][col - 1] != '*')
	{
		cout << "\nInvalid Move!\n"
			<< "Enter row number: ";
		cin >> row;
		cout << "Enter column number: ";
		cin >> col;
	}

	// Replaces player1's choice with X
	board[row - 1][col - 1] = 'X';
	cout << "------------------------------------\n\n";
}


/*---------------------------------------
# player2() accepts board[3][3]
# it prompts user for their move, validates it,
# and modifies the board accordingly
-----------------------------------------*/
void player2(char board[3][3])
{
	// Declares variables
	int row, col;

	// Displays the board and asks the user for their move
	displayBoard(board);
	cout << "It is player 2's turn\n"
		<< "Enter row number: ";
	cin >> row;
	cout << "Enter column number: ";
	cin >> col;

	// Validates that input is within range
	while (row < 1 || row > 3 || col < 1 || col > 3 || board[row - 1][col - 1] != '*')
	{
		cout << "\nInvalid move!\n"
			<< "Enter row number: ";
		cin >> row;
		cout << "Enter column number: ";
		cin >> col;
	}

	// Replaces player1's choice with X
	board[row - 1][col - 1] = 'O';
	cout << "------------------------------------\n\n";
}


/*--------------------------------
# int winner() accepts board
# it determines if their is a winner
# it returns 1 if player 1 wins, 2 if player 2 wins,
# 3 if it is a tie, or 0 if the game is still going
-----------------------------------*/
int winner(char board[3][3])
{
	// Determines if player 1 wins
	if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X')
		return 1;
	else if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X')
		return 1;
	else if (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X')
		return 1;
	else if (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X')
		return 1;
	else if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X')
		return 1;
	else if (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X')
		return 1;
	else if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X')
		return 1;
	else if (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X')
		return 1;

	// Determines if player 2 wins
	else if (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O')
		return 2;
	else if (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O')
		return 2;
	else if (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O')
		return 2;
	else if (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O')
		return 2;
	else if (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O')
		return 2;
	else if (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O')
		return 2;
	else if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O')
		return 2;
	else if (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O')
		return 2;

	// Determine if the game is a tie
	else if (board[0][0] != '*' && board[0][1] != '*' && board[0][2]
		!= '*' && board[1][0] != '*' && board[1][1] != '*' && board[1][2]
		!= '*' && board[2][0] != '*' && board[2][1] != '*' && board[2][2] != '*')
	{
		return 3;
	}

	return 0;

}