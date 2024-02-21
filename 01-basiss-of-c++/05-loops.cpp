#include <iostream>
using namespace std;

int main()
{
  // while loop
  int j = 100;

  while (j > 0)
  {
    cout << "j is " << j << endl;
    j -= 10;
  }

  // for loop
  string fruits[5] = {"apple", "banana", "cherry", "date", "elderberry"};

  for (int i = 0; i < 5; i++)
  {
    cout << "fruits " << i + 1 << " is " << fruits[i] << endl;
  }

  // do-while loop
  int k = 100;

  do
  {
    cout << "k is " << k << endl;
    k -= 10;
  } while (k > 0);
}