/*Goal: practice returning values from functions*/

#include "func.hpp"

int main()
{
  float m1 = 4.0;
  float m2 = 3.5;
  float answer;

  answer = add(m1, m2);
  cout << m1 << "+" << m2 << " = " << answer << "\n";

  cout << m1 << "-" << m2 << " = " << sub(m1, m2) << "\n";
  cout << m1 << "*" << m2 << " = " << mult(m1, m2) << "\n";
  cout << m1 << "/" << m2 << " = " << div(m1, m2) << "\n";
  return 0;
}