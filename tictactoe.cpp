#include <iostream>
using namespace std;
//function protoype
float pow(float a, int x);



int main () {
  // make the array/board
  char board[3][3] = {0};
  int i;
  int j;
  bool player_one_move = true;
  bool player_two_move = false;

  for(int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      board[i][j] = ' ';
      //cout << board[i][j];
    }

    cout << '\n';
  }

  //player gives a move
  

  //cout << "The board is: " << board;
  
  return 0;
}

//functions




