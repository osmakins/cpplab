/*Goal: demonstrate conditions using if/else statement.*/

#include <iostream>

int main()
{
  int menuItem;

  std::cout << "What is your favorite winter sport? \n";
  std::cout << "1: Skiing\n2: Sledding\n3: Sitting by the fire";
  std::cout << "\n4: Drinking hot chocolate\n";
  std::cout << "\n\n";

  std::cout << "Enter your choice: ";
  std::cin >> menuItem;

  if (menuItem == 1)
  {
    std::cout << "Skiing?! Sounds dangerous!\n";
  }
  else if (menuItem == 2)
  {
    std::cout << "Sledding?! Sounds like work!\n";
  }
  else if (menuItem == 3)
  {
    std::cout << "Sitting by the fire?! Sounds warm!\n";
  }
  else if (menuItem == 4)
  {
    std::cout << "Hot chocolate?! Yum!\n";
  }
  else
  {
    std::cout << "Enter a valid menu item\n";
  }
  return 0;
}