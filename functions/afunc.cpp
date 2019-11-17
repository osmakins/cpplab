/*Goal: create a function that searches an array for 
**a given value. 
*/

#include <iostream>

using namespace std;

void search(int array[3], int size, int searchKey);

int main()
{
  const int size = 4;
  int array[] = {345, 75896, 2, 543};
  int searchKey = 543;
  cout << "Found at: ";
  search(array, size, searchKey);
  return 0;
}

void search(int array[4], int size, int searchKey)
{
  for (int i = 0; i < size; i++)
  {
    if (searchKey == array[i])
    {
      cout << i << " ";
    }
  }
}