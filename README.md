# DSA-with-Cpp

**Data Structure:**
* Systematic ways to organize, manage and store data for efficient access and modification.
  
**Algorithm:**
* Step-by-step computational procedures used to perform operations on data, solve problems and achieve desired outcomes efficiently.
* Together DSA enables the development of optimized and scalable software solutions, by determining the most effective way to structure data and the most efficient approach to processing it.

**Data Structure:**

<img width="654" height="414" alt="image" src="https://github.com/user-attachments/assets/a8141931-f814-4d0c-b605-035146fc960e" />

**Flowchart & Pseudocode:**

* A Flowchart is a visual representation of the logic or sequence of steps in a program or algorithm.
* Pseudocode is a high level, human-readable desciption of an algorithm or program, logic that uses plain english mixed with programming style structure.
* It is not written in a specific programming language, and it cannot be executed by a compiler.

**Flowchart: Diagram of Solution**

<img width="914" height="735" alt="image" src="https://github.com/user-attachments/assets/3835798b-8a5a-4246-8d25-4dfe08260d9b" />

**What is ASCII ?**

* ASCII = American Standards of Code Information Interchange
  
**Pseudocode:**
* General Logic of a Solution.
* Step 1: input a & b
* Step 2: sum = a + b
* Step 3: print sum

* C++ is a Case Sensitive  Language

  **Variables:**

  * A Variable  in C++ is a named storage location in memory that holds a value which can be read, modified and reused during the execution of a program.
    
  * It has specific Data type such as int, float, char which determines the kind of data it can store and how much memory it will occupy.
    
  * Variavles are essential in C++ for storing data manipulating information and building logic in algorithm & Data structure.

  **Variable Scope:**

  * Local: Declared inside function or block - only accessible there.
    
  * Global: Declared outside all functions - accessible everywhere.
 
  * Static: Retains it's value between function calls.
 
  * Register: Stored in CPU register for quick access (Rarely used).
 
  * Extern: Declared in one file, defined in another.
 
  **Data Types:**

  * A Data type in C++ specifies the type of data which a variable can hold.
 
  * It defines the size, nature and operatitons that can be performed on the variable.
 
  * C++ has two main categories of Data Types:
 
  * 1) Primitive (Built-in) Data Types
    2) Non-Primitive OR Used Defined & Derived Data Types
   
  **Why Data Types matters in DSA ?**

  1) int is widely used for counters, indexes and sizes.
 
  2) char helps in string / character problem.
 
  3) bool is used in logic conditions and visited flags like Graph
 
  4) Struct and class helps you to build complex data structures like Linked LIsts, Trees and Graphs.
 
  **Type Conversion:**

  * Type conversion refers to changing the data type of a variable from one type to another.
 
  * it allows a value of one type like int to be treaed as another type like float. This is often necessary when mixing data types in expressions or passing arguments to functions.
 
  **Types of Type Conversion:**

  1) Implicit Type Conversion (Type Promotion / coercion)
  
  2) Explicit Type Conversion (Type Casting)
 
  **1) Implicit:**

  * Done automatically by the compiler when necessary.
 
  * Happens when you mixing difference type in an expression.
 
  * Lower type are promoted to higher types.
 
  * Promotion Order Lowest to Highest
 
  * bool -> char -> int -> float -> double -> long double
 
  **2) Type Casting:**

  * Done manually by the programmer.
 
  * There two main Forms:
 
    1. C-style casting (old way from c-language)

    2. C++ style casting (Modern, safer way) 

**1. C-Style Casting:**

* You forcefully change the data-type of a variable using parentheses and the type name.

* Think of it like: "temporary treat this value as another type"

  E.g: int a = 5;
  
  float b = (flaot)a; //tells the compiler to treat 'a' as float

  **2. C++ style casting:**

  * You use special C++ casting keyword like static cast that are clearer, safer and type specific.
 
  * Think of it like: "Hey compiler, I specially want to convert this variable using the correct and safest method".
 
  E.g: int a = 5;

  float b = static_cast<float>(a);
