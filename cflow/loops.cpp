#include <iostream>
#include <sstream>

using namespace std;

int main()
{
  //use 55 as the number to be guessed
  int target = 55;
  int guess = -1;
  std::cout << "Guess a number between 0 and 100: ";
  std::cin >> guess;
  std::cout << guess << "\n";

  while (guess != target)
  {
    if (guess < target)
    {
      cout << guess << " is too low, try again!\n";
      cin >> guess;
    }
    if (guess > target)
    {
      cout << guess << " is too high, try again!\n";
      cin >> guess;
    }
  }

  cout << "you have guessed the right number.\n"
       << guess;

  return 0;
}