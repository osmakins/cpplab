/*Goal: demonstrate conditions using switch statement.*/

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

  switch (menuItem)
  {
  case (1):
    std::cout << "Skiing?! Sounds dangerous!\n";
    break;
  case (2):
    std::cout << "Sledding?! Sounds like work!\n";
    break;
  case (3):
    std::cout << "Sitting by the fire?! Sounds warm!\n";
    break;
  case (4):
    std::cout << "Hot chocolate?! Yum!\n";
    break;
  default:
    std::cout << "Enter a valid menu item\n";
  }
  return 0;
}