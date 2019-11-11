/*Goal: practice using multidimensional arrays.
**Write a program that will accept values for a 4x4 array 
**and a vector of size 4. 
**Use the dot product to multiply the array by the vector. 
**Print the resulting vector. 
*/

#include <iostream>

int main()
{
  //array dimensions must be known at compile time
  //so I used const int to set the row and col numbers
  const int row = 4;
  const int col = 4;

  int arr[row][col];
  int vector[row], product[row];
  int sum;

  //get array values from the user
  for (int i = 0; i < row; i++)
    for (int j = 0; j < row; j++)
    {
      std::cout << "arr[" << i << "][" << j << "] = ";
      std::cin >> arr[i][j];
    }

  //get vector values from the user
  for (int i = 0; i < row; i++)
  {
    std::cout << "vector[" << i << "] = ";
    std::cin >> vector[i];
  }
  sum = 0;

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < row; j++)
    {
      sum = (arr[i][j] * vector[i]) + sum;
    }
    product[i] = sum;
    sum = 0;
  }

  for (int i = 0; i < row; i++)
  {
    std::cout << "product[" << i << "] = " << product[i] << "\n";
  }
  return 0;
}