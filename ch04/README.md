## Exercises Section 4.1.2
### Exercise 4.1: 

> What is the value returned by 5 + 10 * 20/2?5+((10*20)/2) = 105### Exercise 4.2: 

> Using Table 4.12 (p. 166), parenthesize the following expressions to indicate the order in which the operands are grouped:

```cpp(a) * vec.begin() // *(vec.begin())(b) * vec.begin() + 1 // (*(vec.begin()) + 1
```

---

## Exercises Section 4.1.3### Exercise 4.3: 

> Order of evaluation for most of the binary operators is left undefined to give the compiler opportunities for optimization. This strategy presents a trade-off between efficient code generation and potential pitfalls in the use of the language by the programmer. Do you consider that an acceptable trade-off? Why or why not?

能够接受，因为已经习惯这种思维方式了。-_#

---
## Exercises Section 4.2
### Exercise 4.4: 

> Parenthesize the following expression to show how it is evaluated. Test your answer by compiling the expression (without parentheses) and printing its result.> 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2

```((12 / 3) * 4) + (5 * 15) + ((24 % 4) / 2)= 16 + 75 + 0
= 91
```
### Exercise 4.5: 

> Determine the result of the following expressions. 

```
(a) -30 * 3 + 21 / 5 = -90+4=-86(b) -30 + 3 * 21 / 5 = -30 + 12 = -18(c) 30 / 3 * 21 % 5 = 42(d) -30 / 3 * 21 % 4 = -2
```
### Exercise 4.6: 

> Write an expression to determine whether an int value is even or odd.

```cppval % 2 == 0
```
### Exercise 4.7: 

> What does overflow mean? Show three expressions that will overflow.

赋的值超出了变量类型所能表示的范围。

```cpp
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	
	signed char a = 128;
	std::cout << (int)a << std::endl; // 这里强制转换成int型，否则会按char类型来打印

	short b = 65535; // 如果这里写 65536 则编译器会报警告
	std::cout << b << std::endl;

	short c = 32768;
	std::cout << c << std::endl;
	
	return 0;
}
```

the result is:

```
-128
-1
-32768
```

---

## Exercises Section 4.3### Exercise 4.8: 

> Explain when operands are evaluated in the logical AND, logical OR, and equality operators.### Exercise 4.9: 

> Explain the behavior of the condition in the following if:

> ```cppconst char *cp = "Hello World"; 
if (cp && *cp)
```

```
先检查 cp 是否为空，如果 cp 不为 0 的话，再检查 *cp 的值(即字符串第一个字符)是否为 0 。
```### Exercise 4.10: 

> Write the condition for a while loop that would read ints from the standard input and stop when the value read is equal to 42.

[ex4_10.cc](./ex4_10.cc)### Exercise 4.11: 

> Write an expression that tests four values, a, b, c, and d, and ensures that a is greater than b, which is greater than c, which is greater than d.
```cpp
a > b && b > c && c > d
```
### Exercise 4.12: 

> Assuming i, j, and k are all ints, explain what i != j < k means.

```
先比较 j < k，得到 bool 值 true 或 false
然后比较 i 与 该 bool 值是否相等。而 int 类型在与 bool 值比较时，会把 bool 值提升为整型 1 或 0 。
```


---

## Exercises Section 4.4### Exercise 4.13: 

> What are the values of i and d after each assignment? int i; double d;

```cpp(a) d = i = 3.5; // i = 3; d = 3;(b) i = d = 3.5; // i = 3; d = 3.5;
```
### Exercise 4.14: 

> Explain what happens in each of the if tests:

```cppif(42=i) // ... 编译错误，常量42不能作为左值
if(i=42) // ... 编译通过（可能会有警告)，但这个表达式结果为42，if测试恒为 true。
```
### Exercise 4.15: 

> The following assignment is illegal. Why? How would you correct it?

```cppdouble dval; 
int ival; 
int *pi; // int *ip = &ival;
dval = ival = pi = 0; // dval = ival = *ip = 0;
```
pi = 0 表达式的结果是个左值，类型为 int *，不能赋值给 int 类理革变量。

同时 int *pi; 未指向某个具体对象，所以在 `*pi = 0` 赋值之前，需要将其指向某个 int对象。
### Exercise 4.16: 

> Although the following are legal, they probably do not behave as the programmer expects. Why? Rewrite the expressions as you think they should be.(a) if (p = getPtr() != 0) 
(b) if (i = 1024)


```
if ((p = getPtr()) != 0)

if (i == 1024)
```

---

## Exercises Section 4.5### Exercise 4.17: 

> Explain the difference between prefix and postfix increment.- 前置++，其结果是个左值（值加1后的对象）
- 后置++，其结果是个右值，并且是执行增加操作之前的值。### Exercise 4.18: 

> What would happen if the while loop on page 148 that prints the elements from a vector used the prefix increment operator?

`*pbeg++` 改成 `*++pbeg` 会漏掉 vector 里的第一个元素，并且有可能解引用到尾指针，进而引发错误。### Exercise 4.19: 

> Given that ptr points to an int, that vec is a vector<int>, and that ival is an int, explain the behavior of each of these expressions. Which, if any, are likely to be incorrect? Why? How might each be corrected?

```cpp
(a) ptr != 0 && *ptr++ // ptr不为0 且 *ptr 也不为0，最后ptr向后移一个元素(b) ival++ && ival // ival 不为0，且ival+1不为0(c) vec[ival++] <= vec[ival] // 错误。<= 操作符两边的元素没有规定先后顺序，此表达式属于未定义错误。
```

这里主要考虑的是 && 运算符两边的操作符计算有先后顺序，先算左右，左右不为0时再算右边。

而 <= 运算符的左右两个操作符未定义计算顺序，所以其中右边的 ival 值无法确定是++之后的还是之前的。


---

## Exercises Section 4.6### Exercise 4.20: 

> Assuming that iter is a vector<string>::iterator, indicate which, if any, of the following expressions are legal. Explain the behavior of the legal expressions and why those that aren’t legal are in error.

```cpp(a) *iter++; // 正确，先解引用，再自增(b) (*iter)++; // 正确，虽然括号多余。同a(c) *iter.empty()  // 错误，`.` 先执行，然后才是解引用`*`
(d) iter->empty();  // 正确
(e) ++*iter; // 错误。 ++(*iter)，对某个 string 作 ++ 运算，没这个定义。++ 和 * 是同一优先级别，右结合律。(f) iter++->empty();// 合法，先算 iter->empty()，然后再 iter++；
```

---

## Exercises Section 4.7### Exercise 4.21: 

> Write a program to use a conditional operator to find the elements in a vector<int> that have odd value and double the value of each such element.[ex4_21.cc](./ex4_21.cc)
### Exercise 4.22: 

> Extend the program that assigned high pass, pass, and fail grades to also assign low pass for grades between 60 and 75 inclusive. Write two versions: One version that uses only conditional operators; the other should use one or more if statements. Which version do you think is easier to understand and why?
```cpp
  finalgrade = (grade > 90) ? "high pass"
      : (grade > 75) ? "low pass" 
      : (grade < 60) ? "fail" : "pass";
```

```cpp
  if (grade > 90) {
    finalgrade = "high pass";
  } else if (grade > 75) {
    finalgrade = "low pass";
  } else if (grade >= 60) {
    finalgrade = "pass";
  } else {
    finalgrade = "pass";
  }
```

显然前者看起来更简洁。
### Exercise 4.23: 

> The following expression fails to compile due to operator precedence. Using Table 4.12 (p. 166), explain why it fails. How would you fix it?

> ```cppstring s = "word";string pl = s + s[s.size() - 1] == 's' ? "" : "s" ;
```


```cpp
string pl = s + (s[s.size() - 1] == 's' ? "" : "s") ;
```

`?:` 优先级非常低，比 `==` 低，更比 `+` 低。所以 `==` 两边不用加括号，但整个 `?:` 表达式两侧要加括号。### Exercise 4.24: 

> Our program that distinguished between high pass, pass, and fail depended on the fact that the conditional operator is right associative. Describe how that operator would be evaluated if the operator were left associative.


```cpp
finalgrade = (grade > 90) ? "high pass"	: (grade < 60) ? "fail" : "pass";
```

如果是左结合律的话，则变成了下面的样子：


```cpp
finalgrade = ((grade > 90) ? "high pass" : (grade < 60)) ? "fail" : "pass";
```

如果分数小于 90 ，则结果为表达式 `grade < 60` 的值， 如果分数小于 60，得到 true，则最终结果是 "fail"。

整条语句按左结合律来计算，竟然结果也正确。

---

## Exercises Section 4.8### Exercise 4.25: 

What is the value of ~'q' << 6 on a machine with 32-bit ints and 8 bit chars, that uses Latin-1 character set in which 'q' has the bit pattern 01110001?### Exercise 4.26: 

In our grading example in this section, what would happen if we used unsigned int as the type for quiz1?### Exercise 4.27: 

What is the result of each of these expressions? unsigned long ul1 = 3, ul2 = 7;(a) ul1 & ul2 (b) ul1 | ul2 (c) ul1 && ul2 (d) ul1 || ul2


---

## Exercises Section 4.9### Exercise 4.28: 

Write a program to print the size of each of the built-intypes.### Exercise 4.29: 

Predict the output of the following code and explain your reasoning. Now run the program. Is the output what you expected? If not, figure out why.int x[10]; int *p = x;cout << sizeof(x)/sizeof(*x) << endl; cout << sizeof(p)/sizeof(*p) << endl;### Exercise 4.30: 

Using Table 4.12 (p. 166), parenthesize the following expressions to match the default evaluation:(a) sizeof x + y(b) sizeof p->mem[i] (c) sizeof a < b(d) sizeof f()

---

## Exercises Section 4.10### Exercise 4.31: 

The program in this section used the prefix increment and decrement operators. Explain why we used prefix and not postfix. What changes would have to be made to use the postfix versions? Rewrite the program using postfix operators.### Exercise 4.32: 

Explain the following loop.constexpr int size = 5;int ia[size] = {1,2,3,4,5}; for (int *ptr = ia, ix = 0;ix != size && ptr != ia+size; ++ix, ++ptr) { /* ... */ }### Exercise 4.33: 

Using Table 4.12 (p. 166) explain what the following expression does:someValue ? ++x, ++y : --x, --y

---

## Exercises Section 4.11.1### Exercise 4.34: 

Given the variable definitions in this section, explain what conversions take place in the following expressions:(a) if (fval)(b) dval = fval + ival; (c) dval + ival * cval;Remember that you may need to consider the associativity of the operators. 

### Exercise 4.35: 

Given the following definitions,char cval; int ival; unsigned int ui; float fval; double dval;
identify the implicit type conversions, if any, taking place:(a) cval = 'a' + 3;(b) fval = ui - ival * 1.0; (c) dval = ui * fval;(d) cval = ival + fval + dval;

---

## Exercises Section 4.11.3
### Exercise 4.36: 

Assuming i is an int and d is a double write the expression i *= d so that it does integral, rather than floating-point, multiplication.### Exercise 4.37: 

Rewrite each of the following old-style casts to use a named cast:int i; double d; const string *ps; char *pc; void *pv;(a) pv = (void*)ps;(b) i = int(*pc);(c) pv = &d;(d) pc = (char*) pv;### Exercise 4.38: 

Explain the following expression:double slope = static_cast<double>(j/i);

