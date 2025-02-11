# Scientific Calculator

## Overview
This is a command-line scientific calculator built in C++. It supports basic arithmetic operations, exponentiation, logarithms, trigonometric functions, and factorial calculations. The program provides a simple text-based interface for user interaction.

## Features
- **Basic Arithmetic Operations**: Addition (+), Subtraction (-), Multiplication (x), Division (/)
- **Advanced Operations**:
  - Factorial (F)
  - Logarithm (L)
  - Power (P) (x^y)
  - Square (S) (x^2)
  - Cube (C) (x^3)
  - Sine (s)
  - Cosine (c)
  - Tangent (t)
  - Square Root (R)
- **Clear Screen (k)**
- **Exit the Program (.)**

## How to Use
1. Run the executable file in a terminal.
2. The calculator will display a grid with supported operations.
3. Enter the operation symbol when prompted.
4. Input the required numbers based on the operation.
5. The result will be displayed, and you can continue performing calculations.
6. Enter `k` to clear the screen or `.` to exit the program.

## Example Usage
```
Enter the signal for calculation: +
Enter num1: 10
Enter num2: 5
Output: 15
```

## Compilation
To compile the program using g++:
```
g++ main.cpp -o main.exe
```
To run the program:
```
./main.exe
```

## Requirements
- C++ compiler
- Windows OS (uses `system("cls")` for clearing the screen)

## Notes
- Ensure that inputs are valid numerical values.
- The program clears the screen after every operation.
