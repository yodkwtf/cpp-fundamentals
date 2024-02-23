#include <iostream>
using namespace std;

// # Parent class
class Counter
{
protected:
  int count;

public:
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

// # Child class
class LimitedCounter : public Counter
{
public:
  // Child class constructor
  LimitedCounter(int initialCount) : Counter(initialCount)
  {
  }
};

int main()
{
  // Object with the initial count set to 5
  LimitedCounter myLimitedCounter(5);

  // Getting the initial count and limit
  cout << "Initial count: " << myLimitedCounter.getCount() << endl;

  // Incrementing the count
  myLimitedCounter.increment();
  myLimitedCounter.increment();
  myLimitedCounter.increment();

  return 0;
}
