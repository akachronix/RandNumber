#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

using namespace std;

void Delay(double a)
{
  double b = a * 1000;
  usleep(b);
}

int randomNumber(int a, int b)
{
  srand((unsigned)time(NULL));
  int c = rand() % b + a;
  return c;
}

int GetInput(string question)
{
  int userInput;
  cout << question << endl;
  cin >> userInput;
  cout << endl;
  return userInput;
}

int main(void)
{
  int input1 = GetInput("From?");
  int input2 = GetInput("To?");
  
  try
  {
    cout << "Your random number is: " << randomNumber(input1, input2) << endl;
  }
  
  catch(...)
  {
    cout << "Unexpected error occurred." << endl;
    return -1;
  }
  
  return 0;
}
