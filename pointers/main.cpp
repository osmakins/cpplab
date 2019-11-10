/*Goal: Examine pointers!*/

#include <iostream>

int main()
{
  int a = 54;
  int *pointerToA = &a;
  std::cout << "pointerToA gets the address of a = " << pointerToA << "\n";
  std::cout << "*PointerToA gets the value of a = " << *pointerToA << "\n";
  return 0;
}