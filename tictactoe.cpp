#include <iostream>
using namespace std;
//function protoype
float pow(float a, int x);
bool isLegal(char board[3][3], int x, int y);
void printBoard(char board[3][3]);
void playerOneMove(int &r, int &c);
void playerTwoMove(int &r, int &c);
char checkingWinner(char board[3][3], int r, int c);
int main () {
  // make the array/board
  char board[3][3] = {0};

  //declare variables
  int i;
  int j;
  int row = 0;
  int col = 0;
  bool still_playing = true;
  bool checking_one_legal = true;
  bool checking_two_legal = true;

  //building the board
  for(int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      board[i][j] = 'a';
      //cout << board[i][j];
    }

    cout << '\n';
  }

  //main game loop
  while (still_playing == true) {

    //player one moves
    while (checking_one_legal == true) { 
	playerOneMove(row, col);
	if(isLegal(board, row-1, col-1)) {
	  board[row - 1][col - 1] = 'X';
	  printBoard(board);

	  if(checkingWinner(board, row - 1, col - 1) == 'X') {
	    cout << "Player 1 wins!" << endl;
	    still_playing = false;
	  }
	  
	  checking_one_legal = false;
	  checking_two_legal = true;
	} else {
	  cout << "Thats not a valid move. Try Again" << endl;
	  //playerOneMove(row, col);

	}

      }
      
      //player 2 moves
      while (checking_two_legal == true) { 
	playerTwoMove(row, col);
	if(isLegal(board, row-1, col-1)) {
	  board[row - 1][col - 1] = 'O';
	  printBoard(board);

	  if(checkingWinner(board, row - 1, col - 1) == 'O') {
	    cout << "Player 2 wins!" << endl;
	    still_playing = false;
	  }

	  
	  checking_two_legal = false;
	  checking_one_legal = true;
	} else {
	  cout << "Thats not a valid move. Try Again" << endl;
	  //playerTwoMove(row, col);

	}

      }
	

      //still_playing = false;

  } 
  //cout << "The board is: " << board;
  
  return 0;
}

//functions

//checking for a win or a tie
char checkingWinner(char board[3][3], int r, int c) {

  //checking rows
  for(int i = 0; i < 3; i++) {
    if(board[r][0] != ' ' && board[r][0] == board[r][1] && board[r][1] == board[r][2]) {
      return board[r][0];
    }
  }

  //checking columns
  for(int j = 0; j < 3; j++) {
    if(board[0][c] != ' ' && board[0][c] == board[1][c] && board[1][c] == board[2][c]) {
      return board[0][c];
    }
  }

  //checking diagnols

  return ' ';
}

//print the board

void printBoard(char board[3][3]) {
  for(int a = 0; a < 3; a++) {
    for(int b = 0; b < 3; b++) {
      cout << board[a][b] << " ";
    }
    cout << endl;
  }
}

//player one move function
void playerOneMove(int &r, int &c) {
  //player one moving
      cout << "PLAYER 1 (X) What row would you like (1. 2 or 3): ";
      cin >> r;
      cout << "PLAYER 1, You picked Row " << r << endl;

      cout << "PLAYER 1, What column would you like (1, 2, or 3): ";
      cin >> c;
      cout << "PLAYER 1, You picked Column " << c << endl;

}

//player two move function
void playerTwoMove(int &r, int &c) {
  //player 2 moving
      cout << "PLAYER 2 (O) What row would you like (1. 2 or 3): ";
      cin >> r;
      cout << "PLAYER 2, You picked Row " << r << endl;

      cout << "PLAYER 2, What column would you like (1, 2, or 3): ";
      cin >> c;
      cout << "PLAYER 2, You picked Column " << c << endl;

}

//check if legal

bool isLegal(char board[3][3], int x, int y) {
  if(x >= 0 && x <= 3 && y >= 0 && y <= 3 && board[x][y] == 'a') {
    cout << "its valid!" << endl;
    return true;
  }

  return false;
} 

//check for winning and tie



