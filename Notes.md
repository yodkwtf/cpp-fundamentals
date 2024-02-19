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
