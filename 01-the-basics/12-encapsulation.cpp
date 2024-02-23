#include <iostream>
using namespace std;

class Counter
{
private:
  int count;

public:
  // Constructor with a parameter to set initial count
  Counter(int initialCount)
  {
    count = initialCount;
  }

  // Method to increment the count
  void increment()
  {
    count++;
    cout << "Count incremented. New count: " << count << endl;
  }

  // Method to decrement the count
  void decrement()
  {
    if (count > 0)
    {
      count--;
      cout << "Count decremented. New count: " << count << endl;
    }
    else
    {
      cout << "Count is already zero. Cannot decrement further." << endl;
    }
  }

  // Method to get the current count
  int getCount() const
  {
    return count;
  }
};

int main()
{
  // Object with the initial count set to 3
  Counter myCounter(3);
  cout << "Initial count: " << myCounter.getCount() << endl; // 3

  // myCounter.count = 5; // Error: 'int Counter::count' is private within this context

  // Play with public methods
  myCounter.increment(); // 4
  myCounter.decrement(); // 3
  myCounter.increment(); // 4

  return 0;
}
