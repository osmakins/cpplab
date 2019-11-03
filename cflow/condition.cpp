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

  // Switch statement with no breaks

  char begin;
  std::cout << "\n\nWhere do you want to begin?\n";
  std::cout << "B: At the beginning?\nM: At the middle?";
  std::cout << "\nE: At the end?\n\n";

  std::cout << "Enter your choice: ";
  std::cin >> begin;

  switch (begin)
  {
  case ('B'):
    std::cout << "Once upon a time there was a wolf.\n";
  case ('M'):
    std::cout << "The wolf hurt his leg.\n";
  case ('E'):
    std::cout << "The wolf lived happily ever after\n";
  }
  return 0;
}