## Installation and Setup

1. Open Visual Studio Code from the Developer Command Prompt for Visual Studio.
2. Install C/C++ extension pack for Visual Studio Code.
3. Install MinGW via MSYS2 page or use this [direct installer link](https://github.com/msys2/msys2-installer/releases/download/2024-01-13/msys2-x86_64-20240113.exe).
4. Run the installer and install MinGW.
5. Once installed, open MSYS2 shell and run the following command -

   ```bash
   pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
   ```

6. Select the default installation options and proceed with the installation.
7. Add the MinGW bin directory to the system path environment variable.

   ```bash
   C:\Windows\msys64\ucrt64\bin
   ```

8. Check MinGW installation by running the following command in a terminal -

   ```bash
   gcc --version
   g++ --version
   gdb --version
   ```

9. Create a new C++ file and add some code to test the installation.

   ```cpp
   #include <iostream>

   int main() {
     std::cout << "Hello, World!" << std::endl;
     return 0;
   }
   ```

10. Run the file using by clicking the "Run" button in Visual Studio Code or by running the following command in the terminal -

    ###### Compile the file

    ```bash
    g++ -g -o main main.cpp
    ```

    ###### Run the file

    ```bash
    # run the file
    ./main
    ```

## Comments

We write comments in C++ using `//` for single-line comments and `/* ... */` for multi-line comments.

```cpp
// This is a single-line comment

/*
  This is a multi-line comment
*/
```

## Print to Console

We can print to the console using the `std::cout` object from the `iostream` library.

```cpp
#include <iostream>

int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}
```

In the above code -

- `int main()` is the entry point of the program.
- `std::cout` is the standard output stream object.
- `<<` is the insertion operator.
- `"Hello, World!"` is the string to be printed.
- `std::endl` is used to insert a new line and flush the stream.
- `return 0` is used to indicate successful termination of the program.

## Variables

Variables are used to store data in a program. We can declare a variable using the following syntax -

```cpp
int age = 25;
```

In the above code -

- `int` is the data type of the variable.
- `age` is the name of the variable.
- `25` is the value assigned to the variable.

We can also declare a variable without assigning a value to it.

```cpp
int age;

// assign a value later
age = 25;
```

We can also modify the value of a variable later in the program.

```cpp
int age = 25;

// modify the value
age = 30;
```

#### Constants

We can use the `const` keyword to declare a constant variable.

```cpp
const int age = 25;
```

If we try to modify the value of a constant variable, the compiler will throw an error.

```cpp
const int age = 25;

// error
age = 30;
```

## Data Types

C++ has several data types such as `int`, `float`, `double`, `char`, `bool`, etc.

#### int

- `int` is used to store integer values
- Has a size of 4 bytes and a range of -2,147,483,648 to 2,147,483,647
- Can use the `unsigned` keyword to store only positive values

```cpp
int age = 25;
```

#### float

- `float` is used to store decimal numbers
- Has a size of 4 bytes and a range of 3.4e-38 to 3.4e+38
- `f` suffix can be used to declare a float value

```cpp
float pi = 3.14f;
```

#### double

- `double` is used to store double-precision floating-point numbers
- Cam store double the range of float and hence more accurate
- Has a size of 8 bytes and a range of 1.7e-308 to 1.7e+308
- `d` suffix can be used to declare a double value

```cpp
double pi = 3.14159265359;
```

#### char

- `char` is used to store single characters
- Has a size of 1 byte and a range of -128 to 127

```cpp
char grade = 'A';
```

#### string

- `string` is used to store a sequence of characters

```cpp
string name = "John Doe";
```

#### bool

- `bool` is used to store boolean values
- Has a size of 1 byte and can store either `true` or `false`

```cpp
bool isStudent = true;
```

#### array

- `array` is used to store a collection of elements of the same data type
- Can be declared using square brackets `[]`
- Type of array needs to be specified while declaring
- Cannot store elements of different data types
- Size of array can also be specified while declaring

```cpp
int numbers[] = {1, 2, 3, 4, 5};

// specify size
int numbers[5] = {1, 2, 3, 4, 5};

// access elements
cout << numbers[0] << endl; // 1

// modify elements
numbers[0] = 10;
cout << numbers[0] << endl; // 10
```

These were some of the basic data types in C++. There are more data types such as `long`, `long long`, `short`, `unsigned int`, `long double`, etc. which are used in specific scenarios. Please refer to the official documentation for more details.

## Conditionals

Conditionals are used to make decisions in a program. We can use `if`, `else if`, and `else` statements to execute different blocks of code based on different conditions.

#### If-Else Statement

```cpp
int age = 25;

if (age >= 18) {
  cout << "You are an adult" << endl;
} else {
  cout << "You are a minor" << endl;
}
```

#### Ternary Operator

We can also use the ternary operator to write a more concise version of the above code.

```cpp
int age = 25;

string message = (age >= 18) ? "You are an adult" : "You are a minor";
cout << message << endl;
```

#### Nested If-Else Statement

We can also use nested if-else statements to check for multiple conditions.

```cpp
int age = 25;
bool hasLicense = true;

if (age >= 18) {
  if (hasLicense) {
    cout << "You can drive" << endl;
  } else {
    cout << "You cannot drive" << endl;
  }
} else {
  cout << "You are a minor" << endl;
}
```

#### Switch Statement

We can use the switch statement to execute different blocks of code based on different values of a variable.

```cpp
enum Weather {
   Sunny,
   Rainy,
   Cold
};

Weather today = Sunny;

switch (today) {
  case Sunny:
    cout << "It's sunny today" << endl;
    break;
  case Rainy:
    cout << "It's rainy today" << endl;
    break;
  case Cold:
    cout << "It's cold today" << endl;
    break;
  default:
    cout << "Invalid weather" << endl;
}
```

##### Enums

Enums are used to define a collection of constants. They are used to define a set of named integer constants.

```cpp
enum Weather {
   Sunny,
   Rainy,
   Cold
};
```

- `enum` is the keyword used to define an enumeration.
- `Weather` is the name of the enumeration.
- `Sunny`, `Rainy`, and `Cold` are the named constants.
- By default, the value of the first constant is 0, and the value of each subsequent constant is incremented by 1.
- We can also assign custom values to the constants.

```cpp
enum Weather {
   Sunny = 1,
   Rainy = 2,
   Cold = 3
};
```

## Loops

Loops are used to execute a block of code multiple times. We can use `for`, `while`, and `do-while` loops in C++.

#### For Loop

```cpp
for (int i = 0; i < 5; i++) {
  cout << i << endl;
}
```

#### While Loop

```cpp
int i = 0;

while (i < 5) {
  cout << i << endl;
  i++;
}
```

#### Do-While Loop

```cpp
int i = 0;

do {
  cout << i << endl;
  i++;
} while (i < 5);
```

All the above loops will print the following output -

```bash
0
1
2
3
4
```

The difference between the `while` and `do-while` loop is that the `do-while` loop will execute the block of code at least once, even if the condition is false.

#### Infinite Loop

Infinite loops are loops that run indefinitely. We can create an infinite loop using the following syntax -

```cpp
for (;;) {
  cout << "Hello, World!" << endl;
}
```

```cpp
while (true) {
  cout << "Hello, World!" << endl;
}
```

```cpp
do {
  cout << "Hello, World!" << endl;
} while (true);
```

This needs to be used with caution as it can lead to system crashes if not handled properly. It is generally used in scenarios where we want the program to run indefinitely, such as server applications.
