## Exercises Section 3.1


> Rewrite the exercises from § 1.4.1 (p. 13) and § 2.6.2 (p. 76) with appropriate using declarations.

```cpp
#include <iostream>

using std::cout;
using std::endl;

int main() {
	int sum = 0;
	int val = 50;

	while (val <= 100) {
		sum += val;
		val++;
	}
	cout << "Sum of 50 to 100 inclusive is " << sum << endl;
	return 0;
}
```
---

## Exercises Section 3.2.2


Write a program to read the standard input a line at a time.

---

Exercises Section 3.2.3
C++ Primer, Fifth Edition


---


---

Exercises Section 3.3.2

---

Exercises Section 3.3.3

---

 

---



---

Exercises Section 3.5.1
C++ Primer, Fifth Edition

---

Exercises Section 3.5.2

---

 

Given that p1 and p2 point to elements in the same array, what does the following code do? Are there values of p1 or p2 that make this code illegal?

Using pointers, write a program to set the elements in an array to zero.

Write a program to compare two arrays for equality. Write a similar program to compare two vectors.

---

## Exercises Section 3.5.4

What does the following program do?
```cpp
const char ca[] = {'h', 'e', 'l', 'l', 'o'}; 
const char *cp = ca;
}
```


In this section, we noted that it was not only illegal but meaningless to try to add two pointers. Why would adding two pointers be meaningless?

Write a program to compare two strings. Now write a program to compare the values of two C-style character strings.

Write a program to define two character arrays initialized from string literals. Now define a third character array to hold the concatenation of the two arrays. Use strcpy and strcat to copy the two arrays into the third.

---

## Exercises Section 3.5.5


Write a program to initialize a vector from an array of ints.

Write a program to copy a vector of ints into an array of ints.

---

## Exercises Section 3.6


> Write three different versions of a program to print the elements of ia. One version should use a range for to manage the iteration, the other two should use an ordinary for loop in one case using subscripts and in the other using pointers. In all three programs write all the types directly. That is, do not use a type alias, auto, or decltype to simplify the code.

> Rewrite the programs from the previous exercises using a
