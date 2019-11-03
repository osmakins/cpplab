/*Write a program that asks a user for five numbers.
**Print out the sum and average of the five numbers.
*/

#include <iostream>

using namespace std;

int main()
{

  float num, res, avg;
  int i;
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
