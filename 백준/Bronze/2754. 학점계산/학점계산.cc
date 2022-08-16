#include <iostream>

using namespace std;

int main(void)
{
  char grade[3];
  float score = 0;

  cout<<fixed;
  cout.precision(1);

  cin>>grade;

  switch (grade[0])
  {
  case 'A':
    score = 4.0;
    break;
  case 'B':
    score = 3.0;
    break;
  case 'C':
    score = 2.0;
    break;
  case 'D':
    score = 1.0;
    break;
  }
  switch (grade[1])
  {
  case '+':
    score += 0.3;
    break;
  case '-':
    score -= 0.3;
    break;
  }
  
  cout<<score;

  return 0;
}