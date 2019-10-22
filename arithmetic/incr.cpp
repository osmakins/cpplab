/*Goal: Practice PreFix and PostFix
**
*/

#include <iostream>

using namespace std;

int main()
{
  // using postfix and prefix variable increment
  int a = 0;
  int b = 0;
  int post = 0;
  int pre = 0;
  cout << "Inital values: \t\t\tpost = " << post << " pre= " << pre << "\n";
  post = a++;
  pre = ++b;
  cout << "After one postfix and prefix: \tpost = " << post << " pre= " << pre << "\n";
  post = a++;
  pre = ++b;
  cout << "After two postfix and prefix: \tpost = " << post << " pre= " << pre << "\n\n";

  //using variable assignment operators
  int c = 0;
  cout << "Variable\t\tOperation\tResult\n";
  cout << "c = " << c;
  c += 2;
  cout << "\t\t\tc += 2 \t\t c = " << c << "\n";

  cout << "c = " << c << " : ";
  c -= 4;
  cout << "\t\tc -= 4 \t\t c = " << c << "\n";

  int d = 3;
  cout << "c = " << c << ", d = " << d << " : ";
  c *= d;
  cout << "\tc *= d \t\t c = " << c << "\n";

  cout << "c = " << c << ", d = " << d << " : ";
  c /= d;
  cout << "\tc /= d \t\t c = " << c << "\n";
  return 0;
}