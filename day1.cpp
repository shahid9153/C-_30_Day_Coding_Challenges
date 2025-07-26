#include <iostream>
#include <iomanip> // for setprecision
using namespace std;

int main()
{
  int i = 4, i2;
  double d = 4.0, d2;
  string s = "HackerRank ", s2;

  // Taking input
  cin >> i2;
  cin >> d2;
  cin.ignore(); // ignore newline before getline
  getline(cin, s2);

  // Integer sum
  cout << i + i2 << endl;

  // Double sum (1 decimal place)
  cout << fixed << setprecision(1) << d + d2 << endl;

  // String concatenation
  cout << s + s2 << endl;

  return 0;
}
