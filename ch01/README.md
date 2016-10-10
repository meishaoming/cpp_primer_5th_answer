## Exercises Section 1.1.1
### Exercise 1.1: 

> Review the documentation for your compiler and determine what file naming convention it uses. Compile and run the main program from page 2.

[reference](https://gcc.gnu.org/onlinedocs/gcc-4.4.1/gcc/Overall-Options.html#index-file-name-suffix-71)

```
file.c
C source code which must be preprocessed. 
file.i
C source code which should not be preprocessed. 
file.ii
C++ source code which should not be preprocessed. 
file.m
Objective-C source code. Note that you must link with the libobjc library to make an Objective-C program work. 
file.mi
Objective-C source code which should not be preprocessed. 
file.mm
file.M
Objective-C++ source code. Note that you must link with the libobjc library to make an Objective-C++ program work. Note that `.M' refers to a literal capital M. 
file.mii
Objective-C++ source code which should not be preprocessed. 
file.h
C, C++, Objective-C or Objective-C++ header file to be turned into a precompiled header. 
file.cc
file.cp
file.cxx
file.cpp
file.CPP
file.c++
file.C
C++ source code which must be preprocessed. Note that in `.cxx', the last two letters must both be literally `x'. Likewise, `.C' refers to a literal capital C. 
file.mm
file.M
Objective-C++ source code which must be preprocessed. 
file.mii
Objective-C++ source code which should not be preprocessed. 
file.hh
file.H
file.hp
file.hxx
file.hpp
file.HPP
file.h++
file.tcc
C++ header file to be turned into a precompiled header. 
file.f
file.for
file.ftn
Fixed form Fortran source code which should not be preprocessed. 
file.F
file.FOR
file.fpp
file.FPP
file.FTN
Fixed form Fortran source code which must be preprocessed (with the traditional preprocessor). 
file.f90
file.f95
file.f03
file.f08
Free form Fortran source code which should not be preprocessed. 
file.F90
file.F95
file.F03
file.F08
Free form Fortran source code which must be preprocessed (with the traditional preprocessor). 
file.ads
Ada source code file which contains a library unit declaration (a declaration of a package, subprogram, or generic, or a generic instantiation), or a library unit renaming declaration (a package, generic, or subprogram renaming declaration). Such files are also called specs. 
file.adb
Ada source code file containing a library unit body (a subprogram or package body). Such files are also called bodies. 
file.s
Assembler code. 
file.S
file.sx
Assembler code which must be preprocessed. 
other
An object file to be fed straight into linking. Any file name with no recognized suffix is treated this way.
```
### Exercise 1.2: 

> Change the program to return -1. A return value of -1 is often treated as an indicator that the program failed. Recompile and rerun your program to see how your system treats a failure indicator from main.

```cpp
int main() {
    return -1;
}
```

```
$ g++ -Wall ex1_2.cc
$ ./a.out
$ echo $?
255
```

## Exercises Section 1.2
### Exercise 1.3: 

> Write a program to print Hello, World on the standard output.

see [ex1_3.cc](./ex1_3.cc)
### Exercise 1.4: 

Our program used the addition operator, +, to add two numbers. Write a program that uses the multiplication operator, *, to print the product instead.

see [ex1_4.cc](./ex1_4.cc)
### Exercise 1.5: 

We wrote the output in one large statement. Rewrite the program to use a separate statement to print each operand.

see [ex1_5.cc](./ex1_5.cc)
### Exercise 1.6: 

> Explain whether the following program fragment is legal. Click here to view code image

> ```cpp
std::cout << "The sum of " << v1;
			<< " and " << v2;			<< " is " << v1 + v2 << std::endl;
```> If the program is legal, what does it do? If the program is not legal, why not? How would you fix it?

illegal. 多了两个分号。

```cpp
std::cout << "The sum of " << v1
			<< " and " << v2			<< " is " << v1 + v2 << std::endl;
```

---
## Exercises Section 1.3
### Exercise 1.7: 

> Compile a program that has incorrectly nested comments.
## Exercise 1.8: 
> Indicate which, if any, of the following output statements are legal:
> ```cpp
std::cout << "/*";std::cout << "*/";std::cout << /* "*/" */;std::cout << /* "*/" /* "/*" */;
```> After you’ve predicted what will happen, test your answers by compiling a program with each of these statements. Correct any errors you encounter.

```cpp
std::cout << "/*";std::cout << "*/";std::cout << /* "*/" */;	// illegalstd::cout << /* "*/" /* "/*" */;
```

---

## Exercises Section 1.4.1
### Exercise 1.9: 

> Write a program that uses a while to sum the numbers from 50 to 100.

[ex1_9.cc](./ex1_9.cc)
### Exercise 1.10: 

> In addition to the ++ operator that adds 1 to its operand, there is a decrement operator (--) that subtracts 1. Use the decrement operator to write a while that prints the numbers from ten down to zero.

[ex1_10.cc](./ex1_10.cc)
### Exercise 1.11: 

> Write a program that prompts the user for two integers. Print each number in the range specified by those two integers.

[ex1_11.cc](./ex1_11.cc)

