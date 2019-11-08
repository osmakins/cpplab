/*Goal: In the programming quiz, use a while loop to prompt
**the user to guess a target number. 
**Tell the user if the guess is too high or too low. 
**The user enters 'q'  or guesses the target number to end 
**the program.
*/

#include <iostream>
#include <sstream>
#include <time.h>  //added for the random number generator seed
#include <cstdlib> //added to use the rand function

using namespace std;

int main()
{
  srand(time(NULL));             //set the seed for the random number generator
  int target = rand() % 100 + 1; //generate the 'random' number
  int guess = -1;
  std::string userString;
  int count = 0;
  std::cout << "Guess a number between 0 and 100: ";

  do
  {
    std::getline(std::cin, userString);
    //convert to an int
    std::stringstream(userString) >> guess;
    // std::cout << userString << "\n";
    if (userString == "q")
    {
      std::cout << "Good bye! The number was " << target << "\n";
      break;
    }
    if (guess < target)
    {
      cout << guess << " is too low, try again!\n\n";
      cout << "Enter another number: ";
      count++;
    }
    else if (guess > target)
    {
      cout << guess << " is too high, try again!\n\n";
      cout << "Enter another number: ";
      count++;
    }
    else
    {
      cout << "Congratulations! you have guessed the right number. \n\n The right number is: " << guess << "\n\n";
      break;
    }

  } while (count < 10);

  if (count >= 10)
  {
    std::cout << "Too many tries already. Come back later!\n\n";
  }
  return 0;
}