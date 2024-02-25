#include <iostream>
using namespace std;

int main()
{
  enum Weather
  {
    Sunny,
    Rainy,
    Cold
  };

  Weather weather = Rainy;

  // switch statement
  switch (weather)
  {
  case Sunny:
    cout << "Let's go out for a walk!" << endl;
    break;
  case Rainy:
    cout << "Let's stay inside and read a book." << endl;
    break;
  case Cold:
    cout << "Let's go out for a walk!" << endl;
    break;
  default:
    cout << "Let's stay inside and read a book." << endl;
  }
}