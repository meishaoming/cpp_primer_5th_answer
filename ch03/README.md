## Exercises Section 3.1
### Exercise 3.1: 

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
### Exercise 3.2: 

> Write a program to read the standard input a line at a time.Modify your program to read a word at a time.


```cpp
#include <iostream>
#include <string>

int main() {
  std::string line;

  while (getline(std::cin, line)) {
    std::cout << line << std::endl;
  }

  return 0;
}
```

```cpp
#include <iostream>
#include <string>

int main() {
  std::string word;

  while (std::cin >> word) {
    std::cout << word << std::endl;
  }

  return 0;
}
```
### Exercise 3.3: 

> Explain how whitespace characters are handled in the stringinput operator and in the getline function.

* cin 自动忽略开头的空白符，从第一个真正的字符开始，直至遇见下一处空白为止，计作一次读取。
* getline 不处理空白符。读入数据直到遇到换行符，计作一次读取。会读入换行符，但不会把换行符存入 string 中。### Exercise 3.4: 

> Write a program to read two strings and report whether the strings are equal. If not, report which of the two is larger. Now, change the program to report whether the strings have the same length, and if not, report which is longer.[ex3_04.cc]

[ex3_04.cc]: ex3_04.cc### Exercise 3.5: 

> Write a program to read strings from the standard input, concatenating what is read into one large string. Print the concatenated string. Next, change the program to separate adjacent input strings by a space.

[ex3_05.cc]

[ex3_05.cc]: ex3_05.cc

---

## Exercises Section 3.2.3### Exercise 3.6: 

> Use a range for to change all the characters in a string to X.[ex3_06.cc]

[ex3_06.cc]: ex3_06.cc
### Exercise 3.7: 

> What would happen if you define the loop control variable in the previous exercise as type char? Predict the results and then change your program to use a char to see if you were right.如果循环控制变量变为 char 的话，则每次修改成 X 的字符是该变量，而不是原字符串内的字符。于是原字符串的内容不变。

喏：

[ex3_07.cc]

[ex3_07.cc]: ex3_07.cc### Exercise 3.8: 

> Rewrite the program in the first exercise, first using a while and again using a traditional for loop. Which of the three approaches do you prefer and why?
```cpp
#include <iostream>
#include <string>

int main() {
  std::string str;
  std::cin >> str;

  std::string::size_type n = 0;
  while (n < str.size()) {
    str[n++] = 'X';
  }

  std::cout << str << std::endl;
  return 0;
}
```

```cpp
#include <iostream>
#include <string>

int main() {
  std::string str;
  std::cin >> str;

  for (std::string::size_type n = 0;n < str.size(); ++n) {
    str[n] = 'X';
  }
  std::cout << str << std::endl;
  return 0;
}
```

显然，范围 for 语句写起来更简洁明了。### Exercise 3.9: 

> What does the following program do? Is it valid? If not, why not?
> 
> ```cppstring s;cout << s[0] << endl;
```非法。s 初始为空，s[0] 试图访问它的第一个元素，会造成未定义的错误。### Exercise 3.10: 

> Write a program that reads a string of characters including punctuation and writes what was read but with the punctuation removed.

[ex3_10.cc](./ex3_10.cc)### Exercise 3.11: 

> Is the following range for legal? If so, what is the type of c?
```cpp
const string s = "Keep out!"; 
for (auto &c:s) {
  /*... */
}
```

合法，c的类型为 const char &

---
## Exercises Section 3.3.1
### Exercise 3.12: 

> Which, if any, of the following vector definitions are in error? For those that are legal, explain what the definition does. For those that are not legal, explain why they are illegal.

```cpp
(a) vector<vector<int>> ivec; // 正确
(b) vector<string> svec = ivec; // 错误，类型不同(c) vector<string> svec(10, "null"); // 正确，svec 中有10个string类型元素，每个元素值是 "null"
```
### Exercise 3.13: 

> How many elements are there in each of the following vectors? What are the values of the elements? 

```cpp 
(a) vector<int> v1; // 0 个，(b) vector<int> v2(10); // 10 个元素，每个为 0(c) vector<int> v3(10, 42); // 10 个元素，每个为 42(d) vector<int> v4{10}; // 1 个元素，值为 10(e) vector<int> v5{10, 42}; // 2 个元素，值分别为 10，42(f) vector<string> v6{10}; // 10 个元素，每个为空(g) vector<string> v7{10, "hi"}; // 10 个元素，每个为 "hi"
```

---

## Exercises Section 3.3.2### Exercise 3.14: 

> Write a program to read a sequence of ints from cin and store those values in a vector.[ex3_14.cc](./ex3_14.cc)### Exercise 3.15: 

> Repeat the previous program but read strings this time.

[ex3_15.cc](./ex3_15.cc)

---

## Exercises Section 3.3.3### Exercise 3.16: 

> Write a program to print the size and contents of the vectors from exercise 3.13. Check whether your answers to that exercise were correct. If not, restudy § 3.3.1 (p. 97) until you understand why you were wrong.[ex3_16.cc](./ex3_16.cc)### Exercise 3.17: 

> Read a sequence of words from cin and store the values a vector. After you’ve read all the words, process the vector and change each word to uppercase. Print the transformed elements, eight words to a line.每个词占一行：
[ex3_17.cc](./ex3_17.cc)
### Exercise 3.18: 

> Is the following program legal? If not, how might you fix it? 

```cpp
vector<int> ivec;ivec[0] = 42; // -> ivec.push_back(42);
```### Exercise 3.19: 

> List three ways to define a vector and give it ten elements, each with the value 42. Indicate whether there is a preferred way to do so and why.
```cpp
vector<int> vec(10, 42);

vector<int> vec{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};

vector<int> vec;
for (auto i = 0; i < 10; ++i) {
	vec.push_back(42);
}
```
就这个例子而言，第一种方法最好。### Exercise 3.20: 

> Read a set of integers into a vector. Print the sum of each pair of adjacent elements. Change your program so that it prints the sum of the first and last elements, followed by the sum of the second and second-to-last, and so on.

[ex3_20.cc](./ex3_20.cc)

---

## Exercises Section 3.4.1### Exercise 3.21: 

> Redo the first exercise from § 3.3.3 (p. 105) using iterators.[ex3_21.cc](./ex3_21.cc)### Exercise 3.22: 

> Revise the loop that printed the first paragraph in text to instead change the elements in text that correspond to the first paragraph to all uppercase. After you’ve updated text, print its contents.

[ex3_22.cc](./ex3_22.cc)### Exercise 3.23: 

> Write a program to create a vector with ten int elements. Using an iterator, assign each element a value that is twice its current value. Test your program by printing the vector.

[ex3_23.cc](./ex3_23.cc)

---
## Exercises Section 3.4.2### Exercise 3.24: 

> Redo the last exercise from § 3.3.3 (p. 105) using iterators.[ex3_24.cc](./ex3_24.cc)### Exercise 3.25: 

> Rewrite the grade clustering program from § 3.3.3 (p. 104) using iterators instead of subscripts.[ex3_25.cc](./ex3_25.cc)
### Exercise 3.26: 

> In the binary search program on page 112, why did we write mid=beg+(end-beg)/2;instead ofmid=(beg+end) /2;?

迭代器没有加法运算，beg + end 是非法的。编译就通不过。

---

## Exercises Section 3.5.1### Exercise 3.27: 

> Assuming txt_size is a function that takes no arguments and returns an int value, which of the following definitions are illegal? Explain why.

```cppunsigned buf_size = 1024; 
(a) int ia[buf_size]; // 错，数组的维度必须是常量表达式。(b) int ia[4 * 7 - 14];  // 对
(c) int ia[txt_size()]; // 错，同a(d) char st[11] = "fundamental"; // 错，字符串最后有个 '/0' 结束符
```
### Exercise 3.28: 

> What are the values in the following arrays? 

```cpp
string sa[10]; // 10 个空串int ia[10]; // 10个0
int main() {	string sa2[10]; // 10个空串	int ia2[10]; // 值未定义
}
```### Exercise 3.29: 

> List some of the drawbacks of using an array instead of a vector.

数组大小在初始化时固定。而 vector 使用起来就更为灵活。

---

## Exercises Section 3.5.2### Exercise 3.30: 

> Identify the indexing errors in the following code:

```cppconstexpr size_t array_size = 10;int ia[array_size];for (size_t ix = 1; ix <= array_size; ++ix) // 注意下标 ix，应该是 ix < array_size	ia[ix] = ix;
```### Exercise 3.31: 

> Write a program to define an array of ten ints. Give each element the same value as its position in the array.
[ex3_31.cc](./ex3_31.cc)
### Exercise 3.32: 

> Copy the array you defined in the previous exercise into another array. Rewrite your program to use vectors.[ex3_32.cc](./ex3_32.cc)### Exercise 3.33: 

> What would happen if we did not initialize the scores array in the program on page 116?

如果 scores 是定义在函数内部，其未初始化时，其中的值是未定义的。造成程序结果不正确。

---
 ## Exercises Section 3.5.3### Exercise 3.34: 

> Given that p1 and p2 point to elements in the same array, what does the following code do? Are there values of p1 or p2 that make this code illegal?

```cppp1 += p2 - p1;
```

相当于 p1 = p2 。理论上 p1 和 p2 所指的对象类型相同，都是合法的。如果所指对象类型不同，则非法，编译出错。
### Exercise 3.35: 

> Using pointers, write a program to set the elements in an array to zero.[ex3_35.cc](./ex3_35.cc)### Exercise 3.36: 

> Write a program to compare two arrays for equality. Write a similar program to compare two vectors.

vector 的比较当然方便得多。数组的比较还需要自己手动遍历。

[ex3_36.cc](./ex3_36.cc)

---

## Exercises Section 3.5.4### Exercise 3.37: 

> What does the following program do?
```cpp
const char ca[] = {'h', 'e', 'l', 'l', 'o'}; 
const char *cp = ca;while (*cp) {  // cp 字符串没有结束符	cout << *cp << endl;	++cp; 
}
```
### Exercise 3.38: 

> In this section, we noted that it was not only illegal but meaningless to try to add two pointers. Why would adding two pointers be meaningless?两指针相加，即两个对象的内存地址相加，没实际意义。### Exercise 3.39: 

＞　Write a program to compare two strings. Now write a program to compare the values of two C-style character strings.　string 对象可以直接比较。 字符串使用 strcmp 来比较。### Exercise 3.40: 

Write a program to define two character arrays initialized from string literals. Now define a third character array to hold the concatenation of the two arrays. Use strcpy and strcat to copy the two arrays into the third.

千万小心，第三个字符数组的大小有可能不足够容纳前两个。

[ex3_40.cc](./ex3_40.cc)

---

## Exercises Section 3.5.5
### Exercise 3.41: 

> Write a program to initialize a vector from an array of ints.[ex3_41.cc](./ex3_41.cc)
### Exercise 3.42: 

> Write a program to copy a vector of ints into an array of ints.

[ex3_41.cc](./ex3_41.cc)

写起来挺别扭的，因为要先保证数组的大小能容得下所有 vector 中的元素。

---

## Exercises Section 3.6
### Exercise 3.43: 

> Write three different versions of a program to print the elements of ia. One version should use a range for to manage the iteration, the other two should use an ordinary for loop in one case using subscripts and in the other using pointers. In all three programs write all the types directly. That is, do not use a type alias, auto, or decltype to simplify the code.[ex3_43.cc](./ex3_43.cc)
### Exercise 3.44: 

> Rewrite the programs from the previous exercises using a points type alias for the type of the loop control variables.[ex3_44.cc](./ex3_44.cc)
### Exercise 3.45: 

Rewrite the programs again, this time using auto.

[ex3_45.cc](./ex3_45.cc)


