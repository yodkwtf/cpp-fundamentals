#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
  // Seed
  srand(time(0));

  // Random Number
  int random = rand() % 100;
  cout << "Random Number: " << random << endl;

  return 0;
}