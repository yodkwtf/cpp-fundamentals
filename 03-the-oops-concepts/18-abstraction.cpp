#include <iostream>
using namespace std;

class AbstractEmployee
{
  virtual void AskForPromotion() = 0;
};

class Employee : AbstractEmployee
{
private:
  string Name;
  string Company;
  int Age;

public:
  // Constructor
  Employee(string name, int age, string company)
  {
    Name = name;
    Age = age;
    Company = company;
  }

  // Getters and Setters...

  // Other functions
  void introduce()
  {
    cout << "Name - " << Name << endl;
    cout << "Company - " << Company << endl;
    cout << "Age - " << Age << endl;
  }

  // # Implementing the pure virtual function
  void AskForPromotion()
  {
    if (Age > 30)
    {
      cout << Name << " got promoted!" << endl;
    }
    else
    {
      cout << Name << ", sorry no promotion for you!" << endl;
    }
  }
};

int main()
{
  Employee employee1 = Employee("Jane", 25, "Amazon");
  Employee employee2 = Employee("John", 35, "Amazon");

  employee1.AskForPromotion();
  employee2.AskForPromotion();
  return 0;
}