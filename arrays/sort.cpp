/*Goal: Practice array manipulation in C++. 
**The user will input 10 integers. 
**Put them into an array. Then print the array in the order the numbers were
**entered. Then print in reverse order. Then sort the array in ascending order 
**and print it. 
**The each print of the array should separate the numbers in the array by
**one space. 
**For example: the array were [3,4,55] the printout would be 3 4 55
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
  int value = 0;
  int userInput[10];
  for (int i = 0; i <= 10; i++)
  {
    cin >> value;
    userInput[i] = value;
  }
  cout << endl;
  cout << "The values entered: \n";
  for (int i = 0; i <= 10; i++)
  {
    cout << userInput[i] << " ";
  }
  cout << endl;
  cout << endl;
  cout << "The array in reverse order:\n";
  // print the array in reverse order
  for (int j = 10; j >= 0; j--)
  {
    cout << userInput[j] << " ";
  }
  cout << endl;
  cout << endl;
  for (int k = 0; k <= 10; k++)
  {
    for (int j = 0; j <= 9 - k; j++)
    {
      if (userInput[j] > userInput[j + 1])
      {
        // temporary swap variable
        int temp;
        temp = userInput[j];
        userInput[j] = userInput[j + 1];
        userInput[j + 1] = temp;
      }
    }
  }
  // the sorted array
  cout << "\n\nThe array sorted\n";
  for (int i = 0; i <= 10; i++)
  {
    cout << userInput[i] << " ";
  }
  cout << endl;
  // The sorted array in reverse order
  cout << "\nThe sorted array in reverse order: \n";
  for (int l = 10; l >= 0; l--)
  {
    cout << userInput[l] << " ";
  }
  cout << endl;
  return 0;
}