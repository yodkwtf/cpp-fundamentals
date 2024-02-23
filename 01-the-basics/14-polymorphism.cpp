#include <iostream>
using namespace std;

// Base class
class Shape
{
public:
  // Constructor with parameters
  Shape(double p1 = 0.0, double p2 = 0.0) : param1(p1), param2(p2) {}

  double area()
  {
    cout << "Calculating area of a generic shape." << endl;
    return 0.0;
  }

protected:
  double param1;
  double param2;
};

// Derived class Circle
class Circle : public Shape
{
public:
  // Constructor with a parameter for radius
  Circle(double radius) : Shape(radius) {}

  // Override the area method for circles
  double area()
  {
    cout << "Calculating area of a circle." << endl;
    return 3.14 * param1 * param1;
  }
};

// Derived class Rectangle
class Rectangle : public Shape
{
public:
  // Constructor with parameters for length and width
  Rectangle(double length, double width) : Shape(length, width) {}

  // Override the area method for rectangles
  double area()
  {
    cout << "Calculating area of a rectangle." << endl;
    return param1 * param2;
  }
};

int main()
{
  // Creating objects of Circle and Rectangle with constructors
  Circle myCircle(5.0);
  Rectangle myRectangle(4.0, 6.0);

  // Using each object separately
  cout << "Area of Circle: " << myCircle.area() << endl;
  cout << "Area of Rectangle: " << myRectangle.area() << endl;

  return 0;
}
