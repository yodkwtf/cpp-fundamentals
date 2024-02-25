## Introduction to C++

C++ is a general-purpose programming language that was developed by Bjarne Stroustrup in 1979. It is an extension of the C programming language, and is still one of the fastest abd most efficient programming languages available today.

It is used by companies like Adobe, Microsoft, Google, NASA, and many more. Every 3 years, a new version of C++ is released, which adds new features to the language.

#### Applications of C++

C++ is one of the most popular programming languages in the world. It is used in a variety of applications, including:

- High Performance Applications
- Video Games
- Device Drivers
- Web Browsers
- Servers
- Operating Systems

#### Mastering C++

To master C++, we need to learn 2 things:

1. The syntax and semantics of the language itself
2. C++ Standard Library (STL) - A collection of classes and functions that are part of the C++ Standard Library for example, algorithms, containers, iterators, etc.

## Writing C++ Programs

Let's cover how and where to write C++ programs.

#### Popular IDEs for C++

There are many IDEs available for C++, some of them are free and some are paid. Some of the popular ones are:

- Visual Studio
- Xcode
- CLion

#### First C++ Program

- A C++ program is a collection of functions, and every C++ program must have a `main` function
- The `main` function is the entry point of the program, and it is called when the program is executed
- The `main` function returns an integer value, which is used to indicate the status of the program

> Note: C++ is case-sensitive, so `main` and `Main` are different functions.

```cpp
#include <iostream>

int main() {
  std::cout << "Hello World!" << std::endl;
  return 0;
}
```

- The `#include <iostream>` directive tells the compiler to include the iostream library, which provides input and output functionality
- `cout` stands for "character output"

#### Compiling and Running C++ Programs

C++ is a compiled language, which means to run a C++ program, we need to compile it first. The compilation process translates the source code into machine code that can be executed by the computer.

## Variables

Variable is the name of the location in memory where we store data. It is the basic unit of storage in a C++ program.

#### Constants

A constant is a value that cannot be altered by the program during normal execution. It is a type of variable that is used to store a value that does not change.

```cpp
const pi = 3.14;
```

This will prevent the value of `pi` from being accidentally changed.

#### Naming Conventions

- Always use meaningful names for variables
- Variables names can follow any case convention (camelCase, snake_case, etc.)
- It depends on the organization's coding standards

## Mathematical Operators

C++ provides a variety of operators that can be used to perform mathematical operations.

###### Common Arithmetic Operators

```cpp
double a = 10;
int b = 20;

// Addition
double sum = a + b;
cout << "Sum: " << sum << endl; // 30

// Subtraction
double difference = a - b;
cout << "Difference: " << difference << endl; // -10

// Multiplication
double product = a * b;
cout << "Product: " << product << endl; // 200

// Division
double quotient = a / b;
cout << "Quotient: " << quotient << endl; // 0.5

// Modulus
int remainder = b % a;
cout << "Remainder: " << remainder << endl; // 0

// Increment
a++;
cout << "Increment: " << a << endl; // 11

// Decrement
b = b - 1;
cout << "Decrement: " << b << endl; // 19
```

#### Order of Operations

The order of operations in C++ is the same as in mathematics. The following table lists the precedence and associativity of C++ operators.

| Precedence | Operator | Description                       |
| ---------- | -------- | --------------------------------- |
| 1          | ()       | Parentheses                       |
| 2          | \* / %   | Multiplication, Division, Modulus |
| 3          | + -      | Addition, Subtraction             |

This can be referred to as BODMAS (Brackets, Orders, Division and Multiplication, Addition and Subtraction).

###### Code Example

```cpp
int result = 10 + 20 * 30;
cout << "Result: " << result << endl; // 610
```

## The Standard Library

The C++ Standard Library is a collection of classes and functions that are part of the C++ Standard Library. It is a powerful tool that can be used to perform a variety of tasks.

#### Writing to the Console

The `iostream` library provides the `cout` object, which is used to print text to the console.

```cpp
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!" << endl;
  return 0;
}
```

- The `<<` operator is used to insert data into the `cout` object
- The `endl` object is used to insert a newline character into the `cout` object
- The `using namespace std` directive tells the compiler to use the `std` namespace, which contains the `cout` object

#### Reading from the Console

The `iostream` library also provides the `cin` object, which is used to read input from the console.

```cpp
#include <iostream>
using namespace std;

int main() {
  int age;
  cout << "Enter your age: ";
  cin >> age;
  cout << "Your age is: " << age << endl;
  return 0;
}
```

- The `>>` operator is used to extract data from the `cin` object
- The `int age` statement declares a variable called `age` of type `int`
- The `cin >> age` statement reads an integer value from the console and stores it in the `age` variable
- The `cout << "Your age is: " << age << endl` statement prints the value of the `age` variable to the console

#### Mathematical Functions

The `cmath` library provides a variety of mathematical functions, such as `sqrt`, `pow`, `abs`, `sin`, `cos`, `tan`, etc.

```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  // Square Root
  cout << "Square Root: " << sqrt(16) << endl; // 4

  // Power
  cout << "Power: " << pow(2, 3) << endl; // 2^3 = 8

  // Floor
  cout << "Floor: " << floor(2.6) << endl; // 2

  // Ceiling
  cout << "Ceiling: " << ceil(2.3) << endl; // 3

  // Absolute
  cout << "Absolute: " << abs(-10) << endl; // 10

  return 0;
}
```

## Data Types

C++ is a statically typed language, which means that the type of a variable cannot be changed once it has been declared. Other languages, such as Python and JavaScript, are dynamically typed, which means that the type of a variable can change during the execution of the program.

#### Fundamental Data Types

C++ provides a variety of data types that can be used to store different types of data. The following table lists the fundamental data types in C++.

| Type   | Bytes | Range                                    |
| ------ | :---: | ---------------------------------------- |
| int    |   4   | -2,147,483,648 to 2,147,483,647          |
| char   |   1   | -128 to 127 or 0 to 255                  |
| bool   |   1   | true or false                            |
| float  |   4   | 3.4e-38 to 3.4e+38 (6 decimal places)    |
| double |   8   | 1.7e-308 to 1.7e+308 (15 decimal places) |
| long   |   4   | -2,147,483,648 to 2,147,483,647          |
| short  |   2   | -32,768 to 32,767                        |

#### Double vs Float

The `double` data type is a double-precision floating-point number, which means that it can store more decimal places than the `float` data type.

```cpp
float a = 3.14159F;
double b = 3.14159;
```

- The `F` suffix is used to indicate that the value is a `float` literal
- If the `F` suffix is not used, the value is treated as a `double` literal which can lead to a loss of precision
- The `double` data type is the default floating-point type in C++

#### Int vs Long

The `int` and `long` data types are used to store integer values. The `long` data type can store larger values than the `int` data type.

```cpp
int a = 2147483647;
long b = 2147483648L;
```

- The `L` suffix is used to indicate that the value is a `long` literal
- If the `L` suffix is not used, the value is treated as an `int` literal

#### `Auto` Keyword

The `auto` keyword is used to automatically deduce the data type of a variable at compile time.

```cpp
auto a = 10; // int
auto b = 3.14; // double
auto c = 3.14F; // float
```

- The `auto` keyword is useful when the data type of a variable is complex or difficult to determine
- The `auto` keyword is not used to declare function parameters or return types
- The `auto` keyword is not used to declare class members or global variables

#### Narrowing Conversion

Narrowing conversion is the process of converting a value of a larger data type to a value of a smaller data type. This can lead to a loss of precision.

```cpp
int a = 1'000'000;
short b = a; // Narrowing Conversion

cout << "a: " << a << endl; // 1000000
cout << "b: " << b << endl; // 16960
```

- The value of `a` is too large to be stored in a `short` variable, so the value is truncated
- The value of `b` is 16960, which is the remainder of 1000000 divided by 65536 (the maximum value of a `short` variable)
- The `short` data type is 2 bytes, which can store values from -32,768 to 32,767

#### Generating Random Numbers

The `cstdlib` library provides the `rand` function, which is used to generate random numbers.

```cpp
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  // Seed
  srand(time(0));

  // Random Number
  int random = rand() % 100;
  cout << "Random Number: " << random << endl;

  return 0;
}
```

- The `srand` function is used to seed the random number generator with a value
- The `time(0)` function is used to generate a seed based on the current time
- The `rand` function is used to generate a random number but it is not truly random because it is based on a mathematical formula
- The `%` operator is used to generate a random number between 0 and 99
