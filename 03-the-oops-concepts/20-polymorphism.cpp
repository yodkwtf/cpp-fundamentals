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

  // Other functions
  void introduce()
  {
    cout << "Name - " << Name << endl;
    cout << "Company - " << Company << endl;
    cout << "Age - " << Age << endl;
  }

  virtual void work()
  {
    cout << Name << " is working..." << endl;
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

// #1 Derived class
class Developer : public Employee
{
private:
  string FavProgrammingLanguage;

public:
  Developer(string name, int age, string company, string favProgrammingLanguage)
      : Employee(name, age, company)
  {
    FavProgrammingLanguage = favProgrammingLanguage;
  }

  void FixBug()
  {
    cout << Name << " fixed bug using " << FavProgrammingLanguage << endl;
  }

  // Overriding the base class function
  // void work()
  // {
  //   cout << Name << " is coding using " << FavProgrammingLanguage << endl;
  // }
};

// #2 Derived class
class Teacher : public Employee
{
private:
  string Subject;

public:
  Teacher(string name, int age, string company, string subject)
      : Employee(name, age, company)
  {
    Subject = subject;
  }

  void PrepareLesson()
  {
    cout << Name << " is preparing " << Subject << " lesson" << endl;
  }

  // Overriding the base class function
  void work()
  {
    cout << Name << " is teaching " << Subject << endl;
  }
};

// # Main function
int main()
{
  cout << "--------- Abstract Class Example --------\n"
       << endl;
  Employee employee1 = Employee("Jane", 25, "Amazon");

  employee1.introduce();
  employee1.AskForPromotion();

  cout << "\n--------- Method Overriding --------\n"
       << endl;

  Developer dev = Developer("Sue", 35, "Amazon", "C++");
  dev.introduce();
  dev.FixBug();
  dev.AskForPromotion();
  dev.work();

  cout << "\n"
       << endl;

  Teacher teacher = Teacher("Jack", 45, "Amazon", "Math");
  teacher.introduce();
  teacher.PrepareLesson();
  teacher.AskForPromotion();
  teacher.work();

  return 0;
}