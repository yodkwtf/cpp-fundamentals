#include <iostream>
using namespace std;

// Abstract class
class AbstractEmployee
{
  virtual void AskForPromotion() = 0;
};

// Base class
class Employee : AbstractEmployee
{
private:
  string Company;
  int Age;

protected:
  string Name;

public:
  // Constructor
  Employee(string name, int age, string company)
  {
    Name = name;
    Age = age;
    Company = company;
  }

  // Getters and Setters...
  string getName() { return Name; }

  // Other functions
  void introduce()
  {
    cout << "Name - " << Name << endl;
    cout << "Company - " << Company << endl;
    cout << "Age - " << Age << endl;
  }

  // Implementing the pure virtual function
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

// Derived class
class Developer : public Employee
{
private:
  string FavProgrammingLanguage;

public:
  // Constructor
  Developer(string name, int age, string company, string favProgrammingLanguage)
      : Employee(name, age, company)
  {
    FavProgrammingLanguage = favProgrammingLanguage;
  }

  // derived class method
  void FixBug()
  {
    cout << Name << " fixed bug using " << FavProgrammingLanguage << endl;
  }
};

int main()
{
  Employee employee1 = Employee("Jane", 25, "Amazon");

  employee1.introduce();
  employee1.AskForPromotion();

  // print a new line
  cout << "\n"
       << endl;

  Developer dev = Developer("Sue", 35, "Amazon", "C++");
  dev.introduce();
  dev.FixBug();
  dev.AskForPromotion();

  return 0;
}