#include <iostream>
using namespace std;
//function protoype
float pow(float a, int x);
bool isLegal(char board[3][3], int x, int y);
void printBoard(char board[3][3]);

int main () {
  // make the array/board
  char board[3][3] = {0};
  int i;
  int j;
  int row = 0;
  int col = 0;
  //bool player_one_move = true;
  //bool player_two_move = false;
  bool still_playing = true;
  
  for(int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      board[i][j] = 'a';
      //cout << board[i][j];
    }

    cout << '\n';
  }

  //player gives a move
  while (still_playing == true) {

    //player one moving
      cout << "PLAYER 1 (X) What row would you like (1. 2 or 3): ";
      cin >> row;
      cout << "PLAYER 1, You picked Row " << row << endl;

      cout << "PLAYER 1, What column would you like (1, 2, or 3): ";
      cin >> col;
      cout << "PLAYER 1, You picked Column " << col << endl;

      //check if move legal function
      //isLegal(board, row, col);

      if(isLegal(board, row-1, col-1)) {
	board[row][col] = 'X';
	printBoard(board);
	
      }

     //player 2 moving
      

      still_playing == false;

  } 
  //cout << "The board is: " << board;
  
  return 0;
}

//functions

//print the board

void printBoard(char board[3][3]) {
  for(int a = 0; a < 3; a++) {
    for(int b = 0; b < 3; b++) {
      cout << board[a][b] << " ";
    }
    cout << endl;
  }
}

//check if legal

bool isLegal(char board[3][3], int x, int y) {
  if(x >= 0 && x <= 3 && y >= 0 && y <= 3 && board[x][y] == 'a') {
    cout << "its valid!" << endl;
    return true;
  }

  return false;
} 




