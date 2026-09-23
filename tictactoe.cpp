#include <iostream>

using namespace std;
//function protoype
float pow(float a, int x);
void cubed(int x);


int main () {
  float number = 0.0;
  int power  = 0;

  /*
  struct Student {
    char name[10];
    int id;
    float gpa;
  };
  
  Student george;
  cin >> george.name;
  george.id = 1234;
  george.gpa = 3.0;
  cout << george.name << " ID: " << george .id << " GPA: " << george.gpa << endl;
  */

  int num = 2;
  cubed(num);
  cout << "From the main function: " << num << endl;
  
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

float pow(float a, int x) {
  float answer = a;
  for(int i = 0; i < x-1; i++) {
    answer = answer * a;
    
  }

  return answer;
}

//pass by value function

void cubed(int x){
  x = x*x*x;
  cout << "From pass by value:" << x << endl;

}
