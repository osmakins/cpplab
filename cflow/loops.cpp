/*Write a program that asks a user for five numbers.
**Print out the sum and average of the five numbers.
*/

#include <iostream>
#include <cstddef>

using namespace std;

int main()
{

  float num, res, avg;
  // implicit type cast can make the code more portable and in some cases more secure
  size_t i = 0;
  while (i < 5)
  {
    cout << "num " << i + 1 << ": ";
    cin >> num;
    res += num;
    i++;
  }
  avg = res / i;

  cout << "The sum and average of the numbers you entered are: " << res << " and " << avg << "\n\n";

  return 0;
}
