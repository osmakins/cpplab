#include <iostream>
#include <sstream>

using namespace std;

int main()
{
  //use 55 as the number to be guessed
  int target = 55;
  int guess = -1;
  int count = 0;
  std::cout << "Guess a number between 0 and 100: ";
  std::cin >> guess;

  do
  {
    if (guess < target)
    {
      cout << guess << " is too low, try again!\n\n";
      cout << "Enter a higher number: ";
      cin >> guess;
      cout << "\n";
      count++;
    }
    else if (guess > target)
    {
      cout << guess << " is too high, try again!\n\n";
      cout << "Enter a lower number: ";
      cin >> guess;
      cout << "\n";
      count++;
    }
    else
    {
      cout << "you have guessed the right number " << guess << "\n\n";
      break;
    }

  } while (count < 5);

  if (count >= 5)
  {
    std::cout << "Too many tries already. Come back later!\n\n";
  }
  return 0;
}