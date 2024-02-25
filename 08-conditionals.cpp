#include <iostream>
using namespace std;

int main()
{
  bool isWeatherSunny = false;

  // if-else statement
  if (isWeatherSunny)
  {
    cout << "Let's go out for a walk!" << endl;
  }
  else
  {
    cout << "Let's stay inside and read a book." << endl;
  }

  // ternary operator
  bool isWeatherRainy = true;
  string activity = isWeatherRainy ? "Take an umbrella" : "Wear a hat";
  cout << activity << endl;

  // nested if-else statement
  bool isWeatherCold = true;
  if (isWeatherCold)
  {
    if (isWeatherSunny)
    {
      cout << "Let's go out for a walk!" << endl;
    }
    else
    {
      cout << "Let's stay inside and read a book." << endl;
    }
  }
  else
  {
    cout << "Let's go out for a walk!" << endl;
  }
}