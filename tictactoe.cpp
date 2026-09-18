#include <iostream>

using namespace std;
//function protoype
float pow(float a, int x);

int main () {
  float number = 0.0;
  int power  = 0;
  
  cout << "This is the TicTacToe Game" << endl;

  cout << "Enter a number: ";
  cin >> number;

  cout << "Enter the exponent you want to raise it to: ";
  cin >> power;

  float result = pow(number, power);
  cout << result << endl;

  return 0;
}

//learning functions

float pow(float a, int x){
  float answer = a;
  for(int i = 0; i < x-1; i++) {
    answer = answer * a;
    
  }

  return answer;
}
