

# Decode DSA 2.0 with C++

## 📖 Description
A comprehensive, module-by-module collection of C++ implementations covering the core Data Structures and Algorithms (DSA) curriculum. This repository is structured as a hands-on learning companion, progressing from fundamental language concepts to advanced data structures like linked lists, stacks, queues, and binary trees. Each topic is isolated in its own directory with standalone, executable C++ programs designed for practice and reference.

## 📚 Topics Covered
The repository is organized sequentially into 45 learning modules:
- **Basics:** Output/Variables, Input/Operators, Control Statements, Loops, Pattern Printing
- **Core C++:** Functions, Pointers, Memory Management, OOP (Classes & Constructors)
- **Data Structures:** Arrays, 1D & 2D Vectors, Strings, Linked Lists (Singly & Doubly), Stacks, Queues, Binary Trees
- **Algorithms:** Sorting (Bubble, Selection, Insertion, Merge, Quick, Cyclic), Searching (Binary Search), Recursion, Prefix Sums, Sliding Window, Sieve of Eratosthenes

## 🛠️ Prerequisites
- A C++ compiler supporting **C++17** or higher (e.g., `g++`, `clang++`, or MSVC)
- Recommended IDE: VS Code, CLion, or Visual Studio
- Basic familiarity with C++ syntax and command-line compilation

## ▶️ Installation & Usage
Since each module consists of independent source files, no global build system is required.

1. **Clone the repository:**
   ```bash
   git clone https://github.com/AkshatRauthan/Decode-DSA-2.0-With-Cpp.git
   cd Decode-DSA-2.0-With-Cpp
   ```

2. **Compile a module:**
   Navigate to the desired topic folder and compile the `.cpp` file using your preferred compiler. Example with `g++`:
   ```bash
   cd "01. Output And Variables"
   g++ -std=c++17 areaOfCircle.cpp -o areaOfCircle
   ```

3. **Run the program:**
   ```bash
   ./areaOfCircle
   ```
   *(Windows users can run `areaOfCircle.exe`)*

## 💡 Notes
- The codebase is configured for **C++17** standards and includes workspace settings for MinGW/CLion.
- Several programs use `system("pause")`, which is optimized for Windows environments. Cross-platform users may want to replace it with `std::cin.get()` or remove it.
- Some files reference custom headers (e.g., `#include "linkedlist"`). Ensure you run these files from the correct working directory or adjust the include paths accordingly.
- Standard library constants like `INT_MIN` may require `#include <climits>` in strict compiler environments.

Happy Coding! 🚀
