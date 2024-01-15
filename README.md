### Welcome to the C++ Programming Language lessons!
    - This is a series of lessons that will help you to learn the C++ programming language.
    - The heart of the computer is compose of:
       - I/P input devices (keyboard, mouse, etc.), 
       - O/P output devices (monitor, printer, etc.)
       - Memory (RAM, ROM, etc.)
       - CPU (Central Processing Unit) compse of ALU and CU
         - ALU (Arithmetic Logic Unit)
         - CU (Control Unit)
         - Registers
            - PC (Program Counter)
            - IR (Instruction Register)
            - MAR (Memory Address Register)
            - MDR (Memory Data Register)
            - ACC (Accumulator)
            - SP (Stack Pointer)
            - etc.
       - Buses (Data Bus, Address Bus, Control Bus)
       - Hard Disk (HDD): Compose of data and programs files
    - Since that the computer work on the binary system (0, 1), 
### Binary System and conversion
      It is very importan to understand the binary system.
    - Coversion
         - Binary { 1, 0 } 
         - Octal { 0, 1, 2, 3, 4, 5, 6, 7 }
         - Decimal { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }
         - Hexadecimal { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F }

    - 0 = 0000      - 4 = 0100      - 8 = 1000      - 12 = 1100
    - 1 = 0001      - 5 = 0101      - 9 = 1001      - 13 = 1101
    - 2 = 0010      - 6 = 0110      - 10 = 1010     - 14 = 1110
    - 3 = 0011      - 7 = 0111      - 11 = 1011     - 15 = 1111
    
    - B

    - 8 bits = 1 byte
    - 1 KB = 1024 bytes = 2^10 bytes
    - 1 MB = 1024 KB = 2^20 bytes
    - 1 GB = 1024 MB = 2^30 bytes
    - 1 TB = 1024 GB = 2^40 bytes

### Step involved in the execution of a program
    - 1. Edit
    - 2. Preprocess
    - 3. Compile
    - 4. Link
    - 5. Load
    - 6. Execute
        
        - Edititing: 
            - Stage:is where we  write theb program using a text editor.
            - Output: A source code file containing the program.

        - Preprocessing: 
            - Stage:The first stage in the GCC compilation process.
            - Function:It processes source code before actual compilation. It handles 
                     directives for the preprocessor (like #include, #define, and #ifdef).
            - Output: A modified source code with all the preprocessor directives expanded.

        - Compilation: 
            - Stage: Converts the preprocessed source code into assembly language.
            - Function: The compiler parses the code to build a syntax tree and translates it 
                      into an intermediate representation (IR). It then generates assembly 
                      code from this IR.
            - Output: Assembly code specific to the target architecture.

        - Assembly: 
            - Stage: Assembles the assembly code into machine code.
            - Function: The assembler converts the assembly code into machine code in the form 
              of object files. This code is still not executable as it may contain references 
              to undefined symbols.
            - Output: Object files (.o files in Unix/Linux).

        - Linking:
            - Stage: The final stage in the compilation process.
            - Function: The linker takes one or more object files produced by the assembler and combines 
              them into a single executable file. It resolves references to undefined symbols by 
              finding the correct addresses of those symbols in other object files or libraries.
            - Output: An executable file or a library.

        - Loading:
            - Stage: Loading the program into the disk.
            - Function: The loader loads the executable file from the disk into the memory and 
              transfers control to the starting address of the program.
            - Output: A running program.

        - Execution:
            - The execution happens when the program is running. The CPU executes the instructions 
              in the program one by one and produces the output.

### Header files in C/C++
    - The C/C++ header files and their functionalities can be found in the following link:
        - https://en.cppreference.com/w/cpp/header
    - All the cmath functions can be found in the following link:
        - https://cplusplus.com/reference/cmath/
        

### C++ first program
    - The first program in C++ is the "Hello World" program.
    - The program is as follows:
        - #include <iostream>
        - using namespace std;
        - The program is saved in a file with the extension .cpp
        - The program is compiled using the following command:
        - g++ -o hello hello.cpp
        - The program is executed using the following command: ./hello
```c++
#include <iostream>
int main(){
   std::cout << "Hello World!" << endl;
   return 0;
}
```
### Variables

```c++
#include <iostream>
int main()
{
    int file_sizes = 100;         // integer
    double sales = 100.0;         // double
    const double PI = 3.14;       // Constants
    std::cout << PI << std::endl;
    std::cout << file_sizes << std::endl;
    std::cout << sales << std::endl;
    std::cout << PI << std::endl;
    
    return 0;
}
```
### Naming conventions
    - file_size: Snake case
    - fileSize: Camel case
    - FileSize: Pascal case

### The mathematical expressions are the same as others programming languages
    - +: Addition
    - -: Subtraction
    - *: Multiplication
    - /: Division
    - %: Modulus
    - ++: Increment
    - --: Decrement
### Reading data from condole
```c++
cin >> file_sizes;
cin >> sales >> PI;
```
### Write a program that convert from Fahrenheit to Celsius
```c++
int main()
{
    double fahrenheit, celsius;
    std::cout << "Enter the temperature in Fahrenheit: ";
    std::cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5 / 9;
    std::cout << "The temperature in Celsius is: " << celsius << std::endl;
    return 0;
}
```
### Comments in C++
    - Single line comment: //
    - Multiple line comment: /* */

---
### Fundamental Data Types
    - The fundamental data types in C++ are:
        - int: integer  4 bytes
        - double: floating point
        - char: character
        - bool: boolean
    - The size of the data types are:
        - int: 
        - double: 8 bytes
        - char: 1 byte
        - bool: 1 byte
    - The limits of the data types are:
        - int: -2,147,483,648 to 2,147,483,647
        - double: 1.7E +/- 308 (15 digits)
        - char: -128 to 127
        - bool: true or false
    - The size of the data types can be found using the sizeof() function
### Variables initialization
    - Variables initialization
         - Float:  float interestRate = 3.67f;
         - Long:  fileSize = 90000L;
         - char leeter = 's';
         - bool isTrue = true;
         - auto interestRate = 3.67f;
    - Always initialize the variables with {} or =.
      to avoid the garbage values.
### Generate random numbers
```c++
int main() {
   srand(tim(0));
   int number = rand() % 10;
   cout << number << endl;
   return 0; 
}
```
### Formatting output with the <iomanip> io manipulator
    - setw(n): set the width of the output to n
      cout << setw(10) << "Spring" << endl;   =>   10   Spring
    - setprecision(n): set the precision of the output to n
    - fixed: set the output to fixed point notation
    - showpoint: show the decimal point
    - left: left justify the output
    - right: right justify the output
    - setfill(c): fill the output with the character c
    - showpos: show the positive sign
    - scientific: set the output to scientific notation
    - boolalpha: set the output to true or false
    - dec: set the output to decimal
    - hex: set the output to hexadecimal
    - oct: set the output to octal
    - uppercase: set the output to uppercase
    - nouppercase: set the output to lowercase
    - noshowpos: do not show the positive sign
    - noshowpoint: do not show the decimal point
    - noshowbase: do not show the base
    - noskipws: do not skip the white spaces
    - skipws: skip the white spaces
    - endl: end the line
    - flush: flush the output buffer
    - ends: end the string
    - hexfloat: set the output to hexadecimal floating point
    - defaultfloat: set the output to default floating point
    - left: left justify the output
    - right: right justify the output
    - internal: internal justify the output
    - dec: set the output to decimal
    - hex: set the output to hexadecimal
    - oct: set the output to octal
    - uppercase: set the output to uppercase
    - nouppercase: set the output to lowercase
    - noshowpos: do not show the positive sign
    - noshowpoint: do not show the decimal point
    - noshowbase: do not show the base
    - noskipws: do not skip the white spaces
    - skipws: skip the white spaces
    - endl: end the line
    - flush: flush the output buffer
    - ends: end the string
    - hexfloat: set the output to hexadecimal floating point
    - defaultfloat: set the output to default floating point
    - boolalpha: set the output to true or false
    - noboolalpha: set the output
```c++
#include <iomanip>
-- String
    cout << left;
    cout << setw(10) <<"Spring" <<setw(10) << "Nice" <<endl
         << setw(10) << "Summer" << setw(10) <<  "Hot" << endl;
-- Numbers: setprecision(n), fixed, showpoint
    cout << fixed << 12.3456 << endl; // This will print 12.3456
    cout << fixed << setprecision(2) << 12.3456 << endl; // This will print 12.34
    cout << fixed << setprecision(2) << showpoint << 12.3456 << endl; // This will print 12.34
    
--- Boolean
    cout << boolalpha << true << endl; // This will print true
    cout << noboolalpha << true << endl; // This will print 1
```

### Getting multiple inputs from the user using getline()
```c++
int main()
{
    string fullName;
    cout << "Enter your full name: ";
    getline(cin, fullName);
    cout << "Hello " << fullName << endl;
    return 0;
}
```
### Type casting
    - Type casting is the process of converting one data type to another.
    - There are two types of type casting:
        - Implicit type casting: This is done automatically by the compiler.
        - Explicit type casting: This is done by the programmer.
    - Implicit type casting
        - int x = 10;
        - double y = x; // This is implicit type casting
    - Explicit type casting
        - double x = 10.5;
        - int y = (int)x; // This is explicit type casting
```c++
int main()
{
    int x = 10;
    double y = x; // This is implicit type casting
    cout << y << endl;
    double x = 10.5;
    int y = (int)x; // This is explicit type casting
    cout << y << endl;
    return 0;
}
```
### Comparison operators
    - ==: Equal to
    - !=: Not equal to
    - >: Greater than
    - <: Less than
    - >=: Greater than or equal to
    - <=: Less than or equal to
### Logical operators
    - &&: Logical AND
    - ||: Logical OR
    - !: Logical NOT
### Conditional operators
    - ?: Conditional operator
```c++
int main()
{
    int x = 10;
    int y = 20;
    cout << (x == y) << endl; // This will print 0
    cout << (x != y) << endl; // This will print 1
    cout << (x > y) << endl; // This will print 0
    cout << (x < y) << endl; // This will print 1
    cout << (x >= y) << endl; // This will print 0
    cout << (x <= y) << endl; // This will print 1
    cout << (x == 10 && y == 20) << endl; // This will print 1
    cout << (x == 10 || y == 20) << endl; // This will print 1
    cout << !(x == 10) << endl; // This will print 0
    cout << (x == 10 ? "Yes" : "No") << endl; // This will print Yes
    return 0;
}
```
### If statement
```c++
int main()
{
    int x = 10;
    if (x == 10)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
```
### Switch statement
```c++
int main()
{
    int x = 10;
    switch (x)
    {
    case 10:
        cout << "Yes" << endl;
        break;
    case 20:
        cout << "No" << endl;
        break;
    default:
        cout << "None" << endl;
        break;
    }
    return 0;
}
```
### While loop
```c++
int main()
{
    int x = 1;
    while (x <= 10)
    {
        cout << x << endl;
        x++;
    }
    return 0;
}
```
### Do while loop
```c++
int main()
{
    int x = 1;
    do
    {
        cout << x << endl;
        x++;
    } while (x <= 10);
    return 0;
}
```
### For loop
```c++
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << i << endl;
    }
    return 0;
}
```
### Break statement
```c++
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            break;
        }
        cout << i << endl;
    }
    return 0;
}
```
### Continue statement
```c++
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        cout << i << endl;
    }
    return 0;
}
```
### Functions
```c++
int add(int x, int y)
{
    return x + y;
}
int main()
{
    cout << add(10, 20) << endl;
    return 0;
}
```
### Function overloading
```c++
int add(int x, int y)
{
    return x + y;
}
double add(double x, double y)
{
    return x + y;
}
int main()
{
    cout << add(10, 20) << endl;
    cout << add(10.5, 20.5) << endl;
    return 0;
}
```
### Default arguments
```c++
int add(int x, int y, int z = 0)
{
    return x + y + z;
}
int main()
{
    cout << add(10, 20) << endl;
    cout << add(10, 20, 30) << endl;
    return 0;
}
```
### Function prototypes
```c++
int add(int, int);
int main()
{
    cout << add(10, 20) << endl;
    return 0;
}
int add(int x, int y)
{
    return x + y;
}
```
### Recursion
```c++
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int main()
{
    cout << factorial(5) << endl;
    return 0;
}
```
### Passing by value
```c++
void add(int x, int y)
{
    cout << x + y << endl;
}
int main()
{
    add(10, 20);
    return 0;
}
```
### Passing by reference
```c++
void add(int &x, int &y)
{
    cout << x + y << endl;
}
int main()
{
    int x = 10;
    int y = 20;
    add(x, y);
    return 0;
}
```
### Passing by address
```c++
void add(int *x, int *y)
{
    cout << *x + *y << endl;
}
int main()
{
    int x = 10;
    int y = 20;
    add(&x, &y);
    return 0;
}
```

###  Organizing projects files
     - Putting all files in one place is not good
     - We need to organize the files in a good way
     - We can create a folder referencing the function declaration and 
       definition and called them in the main file
```c++
-- in greet.ccp ---
# include <iostream>
using namespace std;
// Function definition
void greet(string name ) {
    cout << "Hello " << name << endl;
}

-- in greet.hpp ----
#ifndef UTILS_GREET
#define UTILS_GREET

#include <string>
// Function declaration
void greet(std::string name);

#endif
-- main ---
#include "utils/greet.hpp"
using namespace std;
int main() {
    greet("Zakaria");
    return 0;
}
```
### Organizing project files using namespaces
    - The use of namespaces is to avoid the name collision
```c++
-- in greet.ccp ---
namespace messaging {
    void greet(string name ) {
        cout << "Hello " << name << endl;
    }
}

-- in greet.hpp ----
#ifndef UTILS_GREET
#define UTILS_GREET
#include <string>
// Function declaration

namespace messaging {
    void greet(std::string name);
}
#endif

-- main ---
#include "utils/greet.hpp"
using std::cout, std::endl, std::string;
using messaging::greet;

int main() {
    greet("Zakaria");
    return 0;
}
```
---
### Working with Arrays in C++ using the size() function in st library
```c++
int main()
{
    int number[10]; // This is good if we don't have initial size
    int numbers[] = {1, 2, 3, 4, 5};
    numbers[2] = 10;   // changing the number at index 2
    cout << numbers[0] << endl; // Writing the number at index 0
    return 0;
}
```
### Iterating over an array
```c++
--- Iterating over an array ---
int main()
{
    int numbers[] = {1, 2, 3, 4, 5};
    
    for(int i = 0; i < size(numbers); i++) {
        cout << numbers[i] << endl;
    }
    
    for(int number: numbers){
        cout << number << endl;
    }
    return 0;
}
```
### Copying Arrays
```c++
int main()
{
    int first[] = {1, 2, 3};
    int second[size(first)];
    
    // For the first array
    for (int i = 0; i < size(first); i++)
    {
        second[i] = first[i];
    }
    // For the second array
    for (int number : second)
    {
        cout << number << endl;
    }
    return 0;
}
```
### Comparing Arrays
```c++
int main()
{
    int first[] = {1, 2, 3};
    int second[] = {1, 2, 3};
    bool areEqual = true;
    for (int i = 0; i < size(first); i++)
    {
        if (first[i] != second[i])
        {
            areEqual = false;
            break;
        }
    }
    if (areEqual)
    {
        cout << "Equal" << endl;
    }
    else
    {
        cout << "Not equal" << endl;
    }
    return 0;
}
```
### Passing arrays to functions
```c++
void printNumbers(int numbers[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << endl;
    }
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    printNumbers(numbers, size(numbers));
    return 0;
}
```
### Destructuring and Arrays in C++
```c++
int main()
{
    int numbers[] = {1, 2, 3};
    auto [x, y, z] = numbers;
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    return 0;
}
```

### Bubble sort algorithm
```c++
void sort(int numbers[], int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - 1; j++){
            if(numbers[j] > numbers[j + 1]){
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numbers[] = {5, 4, 3, 2, 1};
    sort(numbers, size(numbers));
    for(int number: numbers){
        cout << number << endl;
    }
    return 0;
}
```

### Multidimensional Arrays
```c++
// Globals constants
const int  rows = 2;
const int columns = 3;

void printMatrix(int matrix[rows][colums])
{
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < columns; col++)
        {
            cout << matrix[row][col] << endl;
        }
    }
}
int main()
{
   
    int matrix[row][column] = {
            {1, 2, 3}, // Row
            {4, 5, 6} // Column
    };
    
    printMatrix(matrix);
    
    return 0;
}
```
---
### Pointers
    - We use pointers to efficiently pass large objects, Dynamic memeory allocation, 
      and to build data structures like linked lists, stacks, queues, trees, and graphs.
      Also Enablig polymorphism.

    - Always initialize the pointers with it real value or nullptr to avoid the garbage values.
```c++
int main() {
    int number = 10;  // number is an integer variable
    // The address-of operator (&) returns the address of its operand
    int* ptr = &number; // ptr is a pointer that point to the address of number
    cout << *ptr << endl; // This how we access the value of the pointer
    // Indirection (dereference) operator (*) returns the object that the pointer points to
    *ptr = 20; // This how we change the value of the pointer
    return 0;
}
```

### Pointers and constants
    - Data is constant // The type here should be identical
    - Pointer is constant
    - Both the data and the pointer are constant

```c++
int main()
{
    --- Constant data and pointer not ---
    
    const int number = 10;
    const int* ptr = &number; // The pointer is constant
    *ptr = 20; // This will give an error because the data is constant
    int y = 20;
    ptr = &y; // This is allowed
    
     --- Pointer is constant ---
     int number = 10;
     int* const ptr = &number; // The pointer is constant
     *ptr = 20; // This is allowed because we can change the data but ot the pointer address
     
     --- Both the data and the pointer are constant ---
        const int number = 10;
        const int* const ptr = &number; // The pointer is constant
    return 0;
}
```
### Passing data by reference and pointers to functions
```c++
void increasePrice(double& price) {
    price *= 1.2;
}
int main() {
   double price = 100;
    increasePrice(price);
    cout << price << endl;
    return 0;
}

// Passing data by reference
void increasePrice(double& price) {
    price *= 1.2;
}

int main() {
    double price = 100;
    increasePrice(price);
    cout << price << endl;
    return 0;
}

// Passing a pointer to a function  
void increasePrice(double* price) {
    *price *= 1.2;
}

int main() {
    double price = 100;
    increasePrice(&price);
    cout << price << endl;
    return 0;
}

// Using pointer to swap two numbers
void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
    int x = 10;
    int y = 20;
    swap(&x, &y);
    cout << x << endl;
    cout << y << endl;
    return 0;
}
```
### Arrays and pointers
```c++
int main()
{
    int numbers[] = {1, 2, 3, 4, 5};
    cout << numbers << endl;
    cout << *numbers << endl; // This will print the first element
    cout << *(numbers + 1) << endl; // This will print the second element and so on
    
    int* ptr = numbers;
    cout << ptr[1] << endl; // This will print the second element
    ptr++;
    ptr--;
    cout << *ptr << endl; // This will print the third element and so on
    return 0;
}
```

### Dynamic memory allocation
    - A simple variable declaration is store in a stack memory which is easy to clean up
    - a pointer declaration is store in a heap memory which has to be cleaned up by developper
```c++
int main()
{
    int* numbers = new int[10]; // This will allocate memory in the heap
    int* number = new int; // This will allocate memory in the heap
    
    // Do some stuff
    
    delete[] numbers; // This will free the memory
    delete number; // This will free the memory
    
    // It also a better practice to set the pointer to nullptr after deleting it
    numbers = nullptr;
    number = nullptr;
    return 0;
}
```
### Find a number input by a user
```c++
int main() {
    int* numbers = new int[5];
    while(true){
        cout << "Enter 5 numbers: ";
        for(int i = 0; i < 5; i++){
            cin >> numbers[i];
        }
        cout << "Enter a number to search for: ";
        int searchFor;
        cin >> searchFor;
        int* result = find(numbers, numbers + 5, searchFor);
        if(result != numbers + 5){
            cout << "Found " << searchFor << " at index " << result - numbers << endl;
        } else {
            cout << "Could not find " << searchFor << endl;
        }
    }
    return 0;
}
```
### Use pointer to allocate memory dynamically
```c++
int main() {

    int capacity = 5;
    int* numbers = new int[capacity];
    int entries = 0;

    while(true){
        cout << "Enter a number: ";
        cin >> numbers[entries];

        if (cin.fail()) break;
        entries++;

        if (entries == capacity){
            // Create a temp array (twice the size)
            capacity *= 2;
            int* temp = new int[capacity];
            // Copy the contents of the old array into the new array
            for(int i = 0; i < entries; i++){
                temp[i] = numbers[i];
            }
            delete[] numbers;
            // Have the number s pointer point to the new array
            numbers = temp;
        }
    }

    for(int i = 0; i < entries; i++){
        cout << numbers[i] << endl;
    }

    delete[] numbers;
    return 0;
}
```
### Smart pointers using the <memory> library: make_unique, make_shared
    - unique_ptr // Only one pointer can point to the memory
    - shared_ptr // Multiple pointers can point to the memory

---- make_unique ----
```c++
#include <iostream>
#include <memory>
using namespace std;

// The cool thing about unique pointer is that we don't have to delete it
int main(){
    auto numbers = make_unique<int[]>(10); // This will create a unique pointer in the heap
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    cout << numbers[0] << endl;
    
    // We can also create a unique pointer to a single variable
    auto number = make_unique<int>();
    *number = 10;
    cout << *number << endl;
    return 0;
}
```
---- make_unique ----
```c++
    auto x = make_shared<int>();
    *x = 10;
    
    shared_ptr<int> y(x); // This will create a shared pointer to x
    if (x == y) {
        cout << "They are equal" << endl;
    }
```
--- 
### Working with strings in C++
    - All the string reference can be found in the following link:
        - https://en.cppreference.com/w/cpp/string/basic_string
        - https://cplusplus.com/reference/string/string/
```c++

#include <iostream>
#include <string>
#include <cstring> // For using all the c ++ string functions but included in iosstream
using namespace std;
int main()
{
    string name = "John";
    cout << name << endl;
    cout << name.length() << endl;
    cout << name[0] << endl;
    cout << name[1] << endl;
    name[0] = 'S';
    cout << name << endl;
    
    ----- function ----
    cout << strlen(name) << endl; // This will print the length of the string
    
    char name[10] = "John";
    char name2[10] = "levis";
    strcpy(name2, name); // This will copy the content of name to name2
    strcat(name2, name); // This will concatenate the content of name to name2
    cout << strcmp(name2, name) << endl; // This will compare the content of name to name2
    
    string name = "John";
    name.start_with("J"); // This will return true
    name.end_with("n"); // This will return true
    name.empty() // This will return false
    name.front() // This will return the first character
    name.back() // This will return the last character
    name.find("oh"); // This will return 1
    name.append(" Doe"); // This will append Doe to the name
    name.insert(1, " Doe"); // This will insert Doe at index 1
    nmame.erase(1, 3); // This will erase the characters from index 1 to 3 => position and character number
    name.clear(); // This will clear the string
    name.substr(1, 3); // This will return oh => position and character number
    name.replace(1, 3, "Doe"); // This will replace the characters from index 1 to 3 with Doe
    name.resize(10); // This will resize the string to 10 characters
    name.resize(10, 'X'); // This will resize the string to 10 characters and fill the rest with X
    name.shrink_to_fit(); // This will shrink the string to fit the size of the string
    name.reserve(100); // This will reserve 100 characters for the string
    name.capacity(); // This will return the capacity of the string
    name.max_size(); // This will return the maximum size of the string
    name.push_back('X'); // This will push X to the end of the string
    name.pop_back(); // This will remove the last character of the string
    name.swap(name2); // This will swap the content of name and name2
    name.find_first_of("oh"); // This will return 1
    name.find_last_of("oh"); // This will return 2
    name.find_first_not_of("oh"); // This will return 0
    name.find_last_not_of("oh"); // This will return 0
    
    isalnum(name); // This will return true if the string is alphanumeric
    islower(n); // This will return true if the string is in lower case
    isupper(n); // This will return true if the string is in upper case
    isalpha(n); // This will return true if the string is alphabetic
    isdigit(n); // This will return true if the string is digit
    isxdigit(n); // This will return true if the string is hexadecimal digit
    isspace(n); // This will return true if the string is space


    toupper(n); // This will convert the string to upper case
    tolower(n); // This will convert the string to lower case
    return 0;
}
```
### Convert string to integer vis versa
```c++
int main()
{
    string number = "1234";
    int x = stoi(number); // This will convert the string to integer
    int y = stod(number); // This will convert the string to double
    int z = stof(number); // This will convert the string to float
    int w = stol(number); // This will convert the string to long
    int v = stoll(number); // This will convert the string to long long
    cout << x << endl;
    
    int number = 1234;
    string x = to_string(number); // This will convert the integer to string
    cout << x << endl;
    return 0;
}
```

### The raw string literal
```c++
string str = R("c:\folder\file.txt"); // This will print c:\folder\file.txt
cout << str << endl;
```
---
### Structures and Enumerations
    - Structures are used to group related data together: With them we can create custom data types ADT
    - Enumarations are used to group related constants together
```c++
// Pascal naming convention
// Creation of a structure
struct Movie {
    string title;
    int releaseYear;
};

int main() {
    // Initialization of a structure
    Movie movie = {"Star Wars", 1977};
    movie.title = "Terminator";
    movie.releaseYear = 2024;
    cout << "Title: " << movie.title << endl;
    cout << "Release Year: " << movie.releaseYear << endl;
    return 0;
}
```
### Passing structures to functions
```c++
struct Movie {
    string title;
    int releaseYear;
};
 
void printMovie(Movie movie) {
    cout << "Title: " << movie.title << endl;
    cout << "Release Year: " << movie.releaseYear << endl;
}

int main() {
    Movie movie = {"Star Wars", 1977};
    printMovie(movie);
    return 0;
}
```
### Returning structures from functions
```c++
struct Movie {
    string title;
    int releaseYear;
};

Movie getMovie() {
    Movie movie = {"Star Wars", 1977};
    return movie;
}

int main() {
    Movie movie = getMovie();
    cout << "Title: " << movie.title << endl;
    cout << "Release Year: " << movie.releaseYear << endl;
    return 0;
}
```

### Passing structures by reference to functions
```c++
struct Movie {
    string title;
    int releaseYear;
};

void printMovie(Movie& movie) {
    cout << "Title: " << movie.title << endl;
    cout << "Release Year: " << movie.releaseYear << endl;
}

int main() {
    Movie movie = {"Star Wars", 1977};
    printMovie(movie);
    return 0;
}
```
### Returning structures by reference from functions
```c++
struct Movie {
    string title;
    int releaseYear;
};

Movie& getMovie() {
    Movie movie = {"Star Wars", 1977};
    return movie;
}

int main() {
    Movie& movie = getMovie();
    cout << "Title: " << movie.title << endl;
    cout << "Release Year: " << movie.releaseYear << endl;
    return 0;
}
```
### Destructuring structures
    - We use destructuring to extract the data from the structure
```c++
struct Movie {
    string title;
    int releaseYear;
};

int main() {
    Movie movie = {"Star Wars", 1977};
    auto [title, releaseYear] = movie;
    cout << title << endl;
    cout << releaseYear << endl;
    return 0;
}

NB: To compare structures we need to overload the == operator
     movie1.title == movie2.title && movie1.releaseYear == movie2.releaseYear etc...
     
     Like data type, structure can also have function
     
     struct Movie {
        string title;
        int releaseYear;
        
        bool equals(Movie& other) {
            return title == other.title && releaseYear == other.releaseYear;
        }
     };
```
### Enumerations:
    - We used enumerations to group related constants together
```c++
enum class Genre {
    Action,
    Comedy,
    Drama,
    Horror,
    Romance,
    Thriller
};

int main() {
    Genre genre = Genre::Action;
    switch(genre) {
        case Genre::Action:
            cout << "Action" << endl;
            break;
        case Genre::Comedy:
            cout << "Comedy" << endl;
            break;
        case Genre::Drama:
            cout << "Drama" << endl;
            break;
        case Genre::Horror:
            cout << "Horror" << endl;
            break;
        case Genre::Romance:
            cout << "Romance" << endl;
            break;
        case Genre::Thriller:
            cout << "Thriller" << endl;
            break;
    }
    return 0;
}

static_cast<int>(genre); // This will convert the enum to integer
```
---
### Streams and files
    - We use streams to read and write data to and from files
    - We use the fstream library to work with files
    - We use the ifstream class to read from files
    - We use the ofstream class to write to files
    - We use the fstream class to read and write to files
```c++

// Writing inside a file
int main() {
    ofstream file;
    file.open("data.txt");
    if (file.is_open()) {
        file << "Star Wars" << endl;
        file.close();
    }
    
    return 0;
}

// Reading from a file
int main() {
    ifstream file;
    file.open("data.txt");
    if (file.is_open()) {
        string line;
        while(getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    }
    
    return 0;
}

// Writing to binary files
int main() {
    int numbers[] = {1'000'000, 2'000'000, 3'000'000};
    ofstream file("numbers.txt", ios::binary);
    if (file.is_open()) {
        file.write(reinterpret_cast<char*>(numbers), sizeof(numbers));
        file.close();
    }
    return 0;
}

// Reading from binary files
int main() {
    int numbers[3];
    ifstream file("numbers.txt", ios::binary);
    if (file.is_open()) {
        file.read(reinterpret_cast<char*>(numbers), sizeof(numbers));
        file.close();
    }
    for(int number: numbers) {
        cout << number << endl;
    }
    return 0;
}
```

### Converting Values to Strings
```c++
int main() {
    double number = 12.34;
    stringstream stream;
    stream << fixed << setprecision(1) << number;
    string str = stream.str();
    cout << str;
    return 0;
}
```
==========
---
### Objects in C++

```c++
------- Rectangle.h ------
class Rectangle {
public:
    // Default constructor
    Rectangle() = default;
    // Constructor
    Rectangle(int width, int height);
    void draw();
    int getArea();
    // Getters and setters
    int getWidth();
    void setWidth(int width);
    int getHeight();
    void setHeight(int height);
private:
    int width;
    int height;
};

------- Rectangle.cpp ------

// Constructor
Rectangle::Rectangle(int width, int height) {
    cout << "Constructing a rectangle" << endl;
    setWidth(width);
    setHeight(height);
}

void Rectangle::draw() {
  cout << "Drawing rectangle" << endl;
  cout << "Dimensions: " << getWidth() << " x " << getHeight() << endl;
}

int Rectangle::getArea() {
    return getWidth() * height;
}


// Getters and setters implementation
int Rectangle::getWidth() {
    return width;
}

void Rectangle::setWidth(int width) {
    if (width < 0) {
        throw invalid_argument("Width cannot be negative");
    } else{
        this->width = width;
    }

}

int Rectangle::getHeight() {
    return height;
}

void Rectangle::setHeight(int height) {
    if (height < 0) {
        throw invalid_argument("Height cannot be negative");
    } else{
        this->height = height;
    }
}

----- main.cpp ------
int main() {

    // With constructor
    Rectangle rectangle{10, 20};
    cout << "Area: " << rectangle.getArea() << endl;
    rectangle.draw();
    rectangle.setWidth(30);
    rectangle.setHeight(40);
    cout << rectangle.getWidth() << endl;
    cout << rectangle.getHeight() << endl;
    return 0;
}
```






















### Pointers and strings
```c++
int main()
{
    char name[] = "John";
    char *p = name;
    cout << *p << endl;
    cout << *(p + 1) << endl;
    cout << *(p + 2) << endl;
    cout << *(p + 3) << endl;
    return 0;
}
```
### Pointers and multidimensional arrays
```c++
int main()
{
    int numbers[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int *p = numbers[0];
    cout << *p << endl;
    cout << *(p + 1) << endl;
    cout << *(p + 2) << endl;
    cout << *(p + 3) << endl;
    cout << *(p + 4) << endl;
    cout << *(p + 5) << endl;
    return 0;
}
```
### Pointers and dynamic memory allocation
```c++
int main()
{
    int *p = new int;
    *p = 10;
    cout << *p << endl;
    delete p;
    return 0;
}
```
### Pointers and dynamic arrays
```c++
int main()
{
    int *p = new int[5];
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    p[3] = 4;
    p[4] = 5;
    cout << p[0] << endl;
    cout << p[1] << endl;
    cout << p[2] << endl;
    cout << p[3] << endl;
    cout << p[4] << endl;
    delete[] p;
    return 0;
}
```
### Pointers and multidimensional dynamic arrays
```c++
int main()
{
    int **p = new int *[3];
    p[0] = new int[3];
    p[1] = new int[3];
    p[2] = new int[3];
    p[0][0] = 1;
    p[0][1] = 2;
    p[0][2] = 3;
    p[1][0] = 4;
    p[1][1] = 5;
    p[1][2] = 6;
    p[2][0] = 7;
    p[2][1] = 8;
    p[2][2] = 9;
    cout << p[0][0] << endl;
    cout << p[0][1] << endl;
    cout << p[0][2] << endl;
    cout << p[1][0] << endl;
    cout << p[1][1] << endl;
    cout << p[1][2] << endl;
    cout << p[2][0] << endl;
    cout << p[2][1] << endl;
    cout << p[2][2] << endl;
    delete[] p[0];
    delete[] p[1];
    delete[] p[2];
    delete[] p;
    return 0;
}
```
### Pointers and strings
```c++
int main()
{
    char *p = new char[5];
    p[0] = 'J';
    p[1] = 'o';
    p[2] = 'h';
    p[3] = 'n';
    p[4] = '\0';
    cout << p << endl;
    delete[] p;
    return 0;
}
```
### Pointers and structures
```c++
struct Rectangle
{
    int length;
    int width;
};
int main()
{
    struct Rectangle r = {10, 5};
    struct Rectangle *p = &r;
    cout << p->length << endl;
    cout << p->width << endl;
    return 0;
}
```
### Pointers and classes
```c++
class Rectangle
{
private:
    int length;
    int width;

public:
    Rectangle(int length, int width)
    {
        this->length = length;
        this->width = width;
    }
    int getLength()
    {
        return length;
    }
    int getWidth()
    {
        return width;
    }
};
int main()
{
    Rectangle r(10, 5);
    Rectangle *p = &r;
    cout << p->getLength() << endl;
    cout << p->getWidth() << endl;
    return 0;
}
```
### Pointers and objects
```c++
class Rectangle
{
private:
    int length;
    int width;
    
public:
    Rectangle(int length, int width)
    {
        this->length = length;
        this->width = width;
    }
    int getLength()
    {
        return length;
    }
    int getWidth()
    {
        return width;
    }
};
int main()
{
    Rectangle *p = new Rectangle(10, 5);
    cout << p->getLength() << endl;
    cout << p->getWidth() << endl;
    delete p;
    return 0;
}
```
### Pointers and static variables
```c++
class Rectangle
{
private:
    int length;
    int width;
    static int count;

public:
    Rectangle(int length, int width)
    {
        this->length = length;
        this->width = width;
        count++;
    }
    int getLength()
    {
        return length;
    }
    int getWidth()
    {
        return width;
    }
    static int getCount()
    {
        return count;
    }
};
int Rectangle::count = 0;
int main()
{
    Rectangle r(10, 5);
    cout << Rectangle::getCount() << endl;
    return 0;
}
```
### Pointers and static functions
```c++
class Rectangle
{
private:
    int length;
    int width;
    static int count;
    
public:
    Rectangle(int length, int width)
    {
        this->length = length;
        this->width = width;
        count++;
    }
    int getLength()
    {
        return length;
    }
    int getWidth()
    {
        return width;
    }
    static int getCount()
    {
        return count;
    }
};
int Rectangle::count = 0;
int main()
{
    Rectangle r(10, 5);
    cout << Rectangle::getCount() << endl;
    return 0;
}
```
### Pointers and static objects
```c++
class Rectangle
{
private:
    int length;
    int width;
    static int count;

public:
    Rectangle(int length, int width)
    {
        this->length = length;
        this->width = width;
        count++;
    }
    int getLength()
    {
        return length;
    }
    int getWidth()
    {
        return width;
    }
    static int getCount()
    {
        return count;
    }
};
int Rectangle::count = 0;
int main()
{
    Rectangle *p = new Rectangle(10, 5);
    cout << Rectangle::getCount() << endl;
    delete p;
    return 0;
}
```
### Pointers and static arrays
```c++
class Rectangle
{
private:
    int length;
    int width;
    static int count;

public:
    Rectangle(int length, int width)
    {
        this->length = length;
        this->width = width;
        count++;
    }
    int getLength()
    {
        return length;
    }
    int getWidth()
    {
        return width;
    }
    static int getCount()
    {
        return count;
    }
};
int Rectangle::count = 0;
int main()
{
    Rectangle *p = new Rectangle[5];
    cout << Rectangle::getCount() << endl;
    delete[] p;
    return 0;
}
```
### Pointers and static multidimensional arrays
```c++
class Rectangle
{
private:
    int length;
    int width;
    static int count;
 
public:
    Rectangle(int length, int width)
    {
        this->length = length;
        this->width = width;
        count++;
    }
    int getLength()
    {
        return length;
    }
    int getWidth()
    {
        return width;
    }
    static int getCount()
    {
        return count;
    }
};
int Rectangle::count = 0;
int main()
{
    Rectangle *p = new Rectangle[5];
    cout << Rectangle::getCount() << endl;
    delete[] p;
    return 0;
}
```

### Pointers and static strings
```c++
class Rectangle
{
private:
    int length;
    int width;
    static int count;

public:
    Rectangle(int length, int width)
    {
        this->length = length;
        this->width = width;
        count++;
    }
    int getLength()
    {
        return length;
    }
    int getWidth()
    {
        return width;
    }
    static int getCount()
    {
        return count;
    }
};
int Rectangle::count = 0;
int main()
{
    Rectangle *p = new Rectangle[5];
    cout << Rectangle::getCount() << endl;
    delete[] p;
    return 0;
}
```
### Pointers and static structures
```c++
struct Rectangle
{
    int length;
    int width;
    static int count;
};
int Rectangle::count = 0;
int main()
{
    Rectangle *p = new Rectangle[5];
    cout << Rectangle::count << endl;
    delete[] p;
    return 0;
}
```
### Pointers and static classes
```c++
class Rectangle
{
private:
    int length;
    int width;
    static int count;

public:
    Rectangle(int length, int width)
    {
        this->length = length;
        this->width = width;
        count++;
    }
    int getLength()
    {
        return length;
    }
    int getWidth()
    {
        return width;
    }
    static int getCount()
    {
        return count;
    }
};
int Rectangle::count = 0;
int main()
{
    Rectangle *p = new Rectangle[5];
    cout << Rectangle::getCount() << endl;
    delete[] p;
    return 0;
}
``` 

   
       
   
