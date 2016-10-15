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

---

## Exercises Section 1.4.2
### Exercise 1.12: 

> What does the following for loop do? What is the final valueof sum?  
> ```cpp
int sum = 0;for (int i = -100; i <= 100; ++i)sum += i;
```

从 -100 加到 100（包括100），最后值为0。
### Exercise 1.13: 

> Rewrite the exercises from § 1.4.1 (p. 13) using for loops.

[ex1_13.cc](./ex1_13.cc)
### Exercise 1.14: 

> Compare and contrast the loops that used a for with those using a while. Are there advantages or disadvantages to using either form?

for 写起来比较简洁。而且如果在 for 的括号里定义增长变量，则变量的作用域会限定在 for 语句中。

本质上 while 和 for 没有优劣之分，两者可以互换。
### Exercise 1.15: 

> Write programs that contain the common errors discussed in the box on page 16. Familiarize yourself with the messages the compiler generates.

---

## Exercises Section 1.4.3
### Exercise 1.16: 

> Write your own version of a program that prints the sum of a set of integers read from cin.

[ex1_16.cc](./ex1_16.cc)

---

## Exercises Section 1.4.4### Exercise 1.17: 

> What happens in the program presented in this section if the input values are all equal? What if there are no duplicated values?全相同，则打印出数值个数。
全不同，则每个数据打印一次。
### Exercise 1.18: 

> Compile and run the program from this section giving it only equal values as input. Run it again giving it values in which no number is repeated.[ex1_18.cc](./ex1_18.cc)
### Exercise 1.19: 

> Revise the program you wrote for the exercises in § 1.4.1 (p. 13) that printed a range of numbers so that it handles input in which the first number is smaller than the second.

[ex1_19.cc](./ex1_19.cc)

---

## Exercises Section 1.5.1
### Exercise 1.20:

> http://www.informit.com/title/032174113 contains a copy of Sales_item.h in the Chapter 1 code directory. Copy that file to your working directory. Use it to write a program that reads a set of book sales transactions, writing each transaction to the standard output.

[ex1_20.cc](./ex1_20.cc)
### Exercise 1.21:

> Write a program that reads two Sales_item objects that have the same ISBN and produces their sum.

[ex1_21.cc](./ex1_21.cc)

```
$ ./ex1_21
0-201-78345-X 3 20.00
0-201-78345-X 2 25.00
0-201-78345-X 5 110 22
```
### Exercise 1.22:

> Write a program that reads several transactions for the same ISBN. Write the sum of all the transactions that were read.

[ex1_22.cc](./ex1_22.cc)

---

## Exercises Section 1.5.2

### Exercise 1.23: 

> Write a program that reads several transactions and counts how many transactions occur for each ISBN.[ex1_23.cc](./ex1_23.cc)
### Exercise 1.24: 

> Test the previous program by giving multiple transactions representing multiple ISBNs. The records for each ISBN should be grouped together.

```
$ ./ex1_23 < data/book_sales
0-201-70353-X : 1
0-201-82470-1 : 1
0-201-88954-4 : 4
0-399-82477-1 : 2
```

---

## Exercises Section 1.6### Exercise 1.25: 

> Using the Sales_item.h header from the Web site, compile and execute the bookstore program presented in this section.

[ex1_25.cc](./ex1_25.cc)

