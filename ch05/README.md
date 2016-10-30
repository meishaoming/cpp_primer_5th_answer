## Exercises Section 5.1
### Exercise 5.1: 

> What is a null statement? When might you use a null statement?空语句 - 只有一个单独分号的语句

while/for 循环，当全部工作在条件部分完成时，会用到空语句。
### Exercise 5.2: 

> What is a block? When might you might use a block?块，把多条语句包起来作为一条语句，这条语句称为复合语句。

if, whlie/for, switch 等语句时可能用到。

在控制变量作用域时，也可能用到。### Exercise 5.3: 

> Use the comma operator (§ 4.10, p. 157) to rewrite the while loop from § 1.4.1 (p. 11) so that it no longer requires a block. Explain whether this rewrite improves or diminishes the readability of this code.

[ex5_03.cc](./ex5_03.cc)

---

## Exercises Section 5.2### Exercise 5.4: 

> Explain each of the following examples, and correct any problems you detect.

```cpp(a) while (string::iterator iter != s.end()) { /* . . . */ } // iter 没有初始值
(b) while (bool status = find(word)) { /* . . . */ }	 if (!status) { /* . . . */ } // 过了 status 的作用域
```

---

## Exercises Section 5.3.1### Exercise 5.5: 

> Using an if–else statement, write your own version of the program to generate the letter grade from a numeric grade.[ex5_05.cc](./ex5_05.cc)

```
$ ./ex5_05 < data/scores
F D A A++ F D A C B C B A C A
```
### Exercise 5.6: 

> Rewrite your grading program to use the conditional operator(§ 4.7, p. 151) in place of the if–else statement.[ex5_06.cc](./ex5_06.cc)
### Exercise 5.7: 

> Correct the errors in each of the following code fragments:

```cpp(a) 
if (ival1 != ival2) 
		ival1 = ival2 // 漏了分号 ;
else ival1 = ival2 = 0;
	 (b) 
if (ival < minval) 
	minval = ival;	occurs = 1;	// 这行的缩进不对，或者漏了 else(c) 
if (int ival = get_value())	cout << "ival = " << ival << endl;if (!ival) // ival 在这里已经离开了其作用域	cout << "ival = 0\n";(d) 
if (ival = 0)	// ==	ival = get_value();
```
### Exercise 5.8: 

> What is a “dangling else”? How are else clauses resolved in C++?

else 与其紧临的 if 匹配。习惯上最好加上大括号。

---

## Exercises Section 5.3.2### Exercise 5.9: 

> Write a program using a series of if statements to count the number of vowels in text read from cin.[ex5_09.cc](./ex5_09.cc)
### Exercise 5.10: 

> There is one problem with our vowel-counting program as we’ve implemented it: It doesn’t count capital letters as vowels. Write a program that counts both lower- and uppercase letters as the appropriate vowel—that is, your program should count both 'a' and 'A' as part of aCnt, and so forth.[ex5_10.cc](./ex5_10.cc)
### Exercise 5.11: 

> Modify our vowel-counting program so that it also counts the number of blank spaces, tabs, and newlines read.[ex5_11.cc](./ex5_11.cc)
### Exercise 5.12: 

> Modify our vowel-counting program so that it counts the number of occurrences of the following two-character sequences: ff, fl, and fi.[ex5_12.cc](./ex5_12.cc)
### Exercise 5.13: 

> Each of the programs in the highlighted text on page 184 contains a common programming error. Identify and correct each error.

```cpp
(a) 
unsigned aCnt = 0, eCnt = 0, iouCnt = 0; 
char ch = next_text();switch (ch) {	case 'a': aCnt++; case 'e': eCnt++; default: iouCnt++; // 没有 break;}(b) 
unsigned index = some_value(); 
switch (index) {case 1:	int ix = get_value(); ivec[ ix ] = index; break;default:	ix = ivec.size()-1; ivec[ ix ] = index; // ix 在 case 1 中定义。}(c) 
unsigned evenCnt = 0, oddCnt = 0; int digit = get_num() % 10;switch (digit) {case 1, 3, 5, 7, 9: // 一个 case 标签里放置了多个值
	oddcnt++;	break;case 2, 4, 6, 8, 10: // 一个 case 标签里放置了多个值   evencnt++;   break;}(d) 
unsigned ival=512, jval=1024, kval=4096; 
unsigned bufsize;unsigned swt = get_bufCnt();switch (swt) {case ival: // case 标签不能是变量	bufsize = ival * sizeof(int); break;case jval: // case 标签不能是变量	bufsize = jval * sizeof(int); break;case kval: // case 标签不能是变量	bufsize = kval * sizeof(int); break;}
```
---

## Exercises Section 5.4.1### Exercise 5.14: 

> Write a program to read strings from standard input looking for duplicated words. The program should find places in the input where one word is followed immediately by itself. Keep track of the largest number of times a single repetition occurs and which word is repeated. Print the maximum number of duplicates, or else print a message saying that no word was repeated. For example, if the input ishow now now now brown cow cowthe output should indicate that the word now occurred three times.

[ex5_14.cc](./ex5_14.cc)

---

## Exercises Section 5.4.2### Exercise 5.15: 

> Explain each of the following loops. Correct any problems you detect.

```cpp(a)
for(int ix=0;ix!=sz;++ix) 
{/* ... */} 
if (ix != sz) // 过了 ix 作用域	// . . .(b) 
int ix; 
for(ix!=sz;++ix) // ix 未初始化：for (ix = 0; ...)
{/* ... */}(c)
for(int ix=0;ix!=sz;++ix,++sz)  // 循环无法结束
{/*...*/}
```### Exercise 5.16: 

> The while loop is particularly good at executing while some condition holds; for example, when we need to read values until end-of-file. The for loop is generally thought of as a step loop: An index steps through a range of values in a collection. Write an idiomatic use of each loop and then rewrite each using the other loop construct. If you could use only one loop, which would you choose? Why?### Exercise 5.17: 

> Given two vectors of ints, write a program to determine whether one vector is a prefix of the other. For vectors of unequal length, compare the number of elements of the smaller vector. For example, given the vectors containing 0, 1, 1, and 2 and 0, 1, 1, 2, 3, 5, 8, respectively your program should return true.

---

## Exercises Section 5.4.4### Exercise 5.18: 

> Explain each of the following loops. Correct any problems you detect.(a) doint v1, v2;cout << "Please enter two numbers to sum:" ; if (cin >> v1 >> v2)cout << "Sum is: " << v1 + v2 << endl; while (cin);(b) do {// . . .} while (int ival = get_response());(c) do {int ival = get_response();  } while (ival);### Exercise 5.19: 

> Write a program that uses a do while loop to repetitively request two strings from the user and report which string is less than the other.

---
## Exercises Section 5.5.1### Exercise 5.20: 

> Write a program to read a sequence of strings from the standard input until either the same word occurs twice in succession or all the words have been read. Use a while loop to read the text one word at a time. Use the break statement to terminate the loop if a word occurs twice in succession. Print the word if it occurs twice in succession, or else print a message saying that no word was repeated.

---

## Exercises Section 5.5.2### Exercise 5.21: 

> Revise the program from the exercise in § 5.5.1 (p. 191) so that it looks only for duplicated words that start with an uppercase letter.

---

## Exercises Section 5.5.3### Exercise 5.22: 

> The last example in this section that jumped back to begin could be better written using a loop. Rewrite the code to eliminate the goto.

---

## Exercises Section 5.6.3### Exercise 5.23: 

> Write a program that reads two integers from the standard input and prints the result of dividing the first number by the second.### Exercise 5.24: 

> Revise your program to throw an exception if the second number is zero. Test your program with a zero input to see what happens on your system if you don’t catch an exception.### Exercise 5.25: 

> Revise your program from the previous exercise to use a try block to catch the exception. The catch clause should print a message to the user and ask them to supply a new number and repeat the code inside the try.


