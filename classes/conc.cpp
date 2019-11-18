/*Goal: learn to use constructors*/

#include "conc.hpp"

int main()
{
  Cats cat1;
  Cats cat2;
  cat2.setAge(5);
  cat2.setBreed("Collie");
  cat2.setName("shadow");

  // this prints the values from the constructor
  cat1.printInfo();

  // this prints the values assigned to cat2
  cat2.printInfo();

  return 0;
}