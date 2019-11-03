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
  size_t i;
  for (i = 0; i < 5; i++)
  {
    cout << "num " << i + 1 << ": ";
    cin >> num;
    res += num;
  }
  avg = res / i;

  cout << "The sum and average the numbers you entered are: " << res << " and " << avg << "\n\n";

  return 0;
}
