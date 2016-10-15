## Exercises Section 2.1.1
### Exercise 2.1: 

> What are the differences between int, long, long long, and short? Between an unsigned and a signed type? Between a float and a double?

int, long, long long, short 它们在计算机内存储的字节数不同。相同类型在不同平台上也有可能不同。

unsigned ：无符号数不能表示负数，其表达范围为 [0, 2^^n - 1]signed : 可以表示负数，表达范围 [-2^^(n-1), 2^^(n-1)]

float, double: 精度不一样。推荐用 double。
### Exercise 2.2: 

> To calculate a mortgage payment, what types would you use for the rate, principal, and payment? Explain why you selected each type.

```
rate - double
principal - unsigned int
payment - double
```

---

## Exercises Section 2.1.2### Exercise 2.3: 

> What output will the following code produce?

```cppunsigned u = 10, u2 = 42; 
std::cout << u2 - u << std::endl; // 32
std::cout << u - u2 << std::endl; // 2^^32 - 32
int i = 10, i2 = 42;std::cout << i2 - i << std::endl; // 32
std::cout << i - i2 << std::endl; // -32std::cout << i - u << std::endl;  // 0
std::cout << u - i << std::endl; // 0
```
### Exercise 2.4: 

> Write a program to check whether your predictions were correct. If not, study this section until you understand what the problem is.

[./ex02_04.cc](ex02_04.cc)

```
$ ./ex02_04
32
4294967264
32
-32
0
0
```

---

## Exercises Section 2.1.3### Exercise 2.5: 

Determine the type of each of the following literals. Explain the differences among the literals in each of the four examples: 

(a) 

- 'a' - 字符 'a'，char 类型
- L'a' - wchar_t
- "a" - 字符串
- L"a" - wchar_t 宽字符串
(b) 

- 10, int
- 10u, unsigned int
- 10L, long
- 10uL, unsigned long
- 012, 八进制，默认 unsigned int 类型
- 0xC, 十六进制，unsigned int 类一蚶
(c) 

- 3.14, double
- 3.14f, float
- 3.14L, long double
(d) 

- 10, int
- 10u, unsigned int 
- 10., double
- 10e-2, double
### Exercise 2.6: 

> What, if any, are the differences between the following definitions:

```cppint month = 9, day = 7;  // 十进制
int month = 09, day = 07; // 八进制
```

### Exercise 2.7: 

> What values do these literals represent? What type does each have?(a) "Who goes with F\145rgus?\012"
\ 后面跟1、2、3 个八进制
\145 -> e
\012 -> 换行符 '\n'
Who goes with Fergus?

(b) 3.14e1Llong double
(c) 1024ffloat
(d) 3.14L
longn double
### Exercise 2.8: 

> Using escape sequences, write a program to print 2M followed by a newline. Modify the program to print 2, then a tab, then an M, followed by a newline.


```cpp
	std::cout << "\062\115\n" << endl;
	std::cout << "\062\t\115\n" << endl;
```

---
 ## Exercises Section 2.2.1
### Exercise 2.9: 

> Explain the following definitions. For those that are illegal, explain what’s wrong and how to correct it.

```cpp(a) std::cin >> int input_value; // 变量要先定义，不能在这里定义 (b) int i = { 3.14 }; // 非法。去掉花括号(c) double salary = wage = 9999.99; // wage 未定义(d) int i = 3.14; // 全法。但会隐式转换
```

### Exercise 2.10: 

> What are the initial values, if any, of each of the following variables?

```cppstd::string global_str; 
int global_int; // 初始值 0int main(){
  int local_int; // 未定义初始值  std::string local_str; // 默认初始为空串
}
```

---

## Exercises Section 2.2.2
### Exercise 2.11: 

> Explain whether each of the following is a declaration or a definition:

```cpp(a) extern int ix = 1024; // 定义
(b) int iy; // 定义(c) extern int iz; // 声明
```

---

## Exercises Section 2.2.3
### Exercise 2.12: 

Which, if any, of the following names are invalid? 
```cpp
(a) int double = 3.14; // 非法
(b) int _; // 合法(c) int catch-22; // 非法(d) int 1_or_2 = 1; // 非法(e) double Double = 3.14; // 合法
```

---

## Exercises Section 2.2.4
### Exercise 2.13: 

> What is the value of j in the following program?

```cppint i = 42; 
int main(){	int i = 100;	int j = i; // 100
}
```
### Exercise 2.14: 

Is the following program legal? If so, what values are printed?
```cpp
int i = 100, sum = 0;for (int i = 0; i != 10; ++i)	sum += i;std::cout << i << " " << sum << std::endl;
```
100 45

---

## Exercises Section 2.3.1
### Exercise 2.15: 

> Which of the following definitions, if any, are invalid? Why?

```cpp
(a) int ival = 1.01; // 定义(b) int &rval1 = 1.01; // 错误。引用必须绑定到对象(c) int &rval2 = ival; // 定义(d) int &rval3; // 错误，引用必须初始化
```### Exercise 2.16: 

> Which, if any, of the following assignments are invalid? If they are valid, explain what they do.

```cppint i = 0, &r1 = i; 
double d = 0, &r2 = d; 
(a) r2 = 3.14159; // d = 3.14159(b) r2 = r1; // d = 0(c) i = r2; // i = 3(d) r1 = d; // i = 0
```
### Exercise 2.17: 

What does the following code print?

```cppint i, &ri = i;i = 5; 
ri = 10;std::cout << i << " " << ri << std::endl;
```
10 10

---

## Exercises Section 2.3.2
### Exercise 2.18: 

> Write code to change the value of a pointer. Write code to change the value to which the pointer points.


```cpp
int val = 10, *p = &val;
int i = 100;

p = &i; // 改变指针的值
*p = 99; // 改变指针所指向对象的值
```### Exercise 2.19: 

> Explain the key differences between pointers and references. 

指针本身是个对象。而引用不是，引用只是某个对象的别名。

### Exercise 2.20: 

> What does the following program do?

```cppint i = 42;int *p1 = &i; 
*p1 = *p1 * *p1;
```i = 42 * 42### Exercise 2.21: 

> Explain each of the following definitions. Indicate whether any are illegal and, if so, why.

```cppint i = 0;(a) double* dp = &i; // 错误，类型不同
(b) int *ip = i; // 错误，取地址 &i(c) int *p = &i; // 正确
```### Exercise 2.22: 

> Assuming p is a pointer to int, explain the following code:

```cppif (p) // ... 检查指针变量是否为0
if (*p) // ... 检查指针上所指的 int 变量值是否为0
```### Exercise 2.23: 

> Given a pointer p, can you determine whether p points to a valid object? If so, how? If not, why not?

不能。
通常需要约定。比如约定无效指针的值都为 nullptr。
### Exercise 2.24: 

> Why is the initialization of p legal but that of lp illegal?

```cppint i =42; void *p= &i; // 合法
long *lp=&i; // 类型不同
```

---

## Exercises Section 2.3.3
### Exercise 2.25: 

Determine the types and values of each of the following variables.

```cpp(a) int* ip, &r = ip; // ip是指针，r是引用
(b) int i, *ip = 0;  // i是int变量，ip是指向int的指针且初始值为0
(c) int* ip, ip2; // ip是指向int的指针；ip2是个int变量
```

---

## Exercises Section 2.4
### Exercise 2.26: 

> Which of the following are legal? For those that are illegal, explain why.
```cpp(a) const int buf; // const值要初始化(b) int cnt = 0; // 正确(c) const int sz = cnt; // 正确 
(d) ++cnt; ++sz; // 错误。sz是const，值不能修改
```

---

## Exercises Section 2.4.2
### Exercise 2.27: 

> Which of the following initializations are legal? Explain why. 

```cpp
(a) int i = -1, &r = 0; // r是引用，要绑定到对象上(b) int *const p2 = &i2; //(c) const int i = -1, &r = 0; // r是引用，要绑定到对象上(d) const int *const p3 = &i2; //(e) const int *p1 = &i2; // (f) const int &const r2; // 引用本身就是常量。后面的const多余(g) const int i2 = i, &r = i; // 
```### Exercise 2.28: 

> Explain the following definitions. Identify any that are illegal. 

```cpp
(a) int i, *const cp; // cp 是const，需要初始化(b) int *p1, *const p2; // p2 是const，需要初始化(c) const int ic, &r = ic; //
(d) const int *const p3; // p3 要初始化(e) const int *p; // 合法。底层const
```
### Exercise 2.29: 

> Uing the variables in the previous exercise, which of the following assignments are legal? Explain why.

```cpp(a) i = ic; // 
(b) p1 = p3; // 错误。底层const需相同。const *ip1
(c) p1 = &ic; // 错误，底层const需相同
(d) p3 = &ic; // 错误。p3有顶层const，其值无法改变
(e) p2 = p1; // 错误，p2顶层const，不能重新赋值
(f) ic = *p3; // 错误，ic是const，其值不能改变
```

---

## Exercises Section 2.4.3
### Exercise 2.30: 

> For each of the following declarations indicate whether the object being declared has top-level or low-level const. 

```cppconst int v2=0; // top
int v1=v2;int *p1 = &v1, &r1 = v1;const int *p2 = &v2, *const p3 = &i, &r2 = v2; // p2 low, p3 top+low, r2 low
```
### Exercise 2.31: 

> Given the declarations in the previous exercise determine whether the following assignments are legal. Explain how the top-level or low-level const applies in each case.
```cpp
r1 = v2; // 错，r1是引用，不能重新绑定p1=p2; // 错，low-level 不同
p2=p1; // 对
p1=p3; // 错，p3 是 top-level+low-level
p2=p3; // 对
```

---

## Exercises Section 2.4.4
### Exercise 2.32: 

> Is the following code legal or not? If not, how might you make it legal?
```
int null = 0, *p = null; // *p = &null
```

---

## Exercises Section 2.5.2
### Exercise 2.33: 

> Using the variable definitions from this section, determine what happens in each of these assignments:
```cpp
int i = 0, &r = i;
auto a = r;

const int ci = i, &cr = ci;
auto b = ci;
auto c = cr;
auto d = &i;
auto e = &ci;
auto &g = ci;
```

```cppa=42; 
b=42; 
c=42; 
d=42; // 错误，d 是个 int * 指针，不能赋值一整型
e=42; // 错误，e 是 const int *
g=42; // 错误，g 是 const int & 引用，值不能变
```
### Exercise 2.34: 

> Write a program containing the variables and assignments from the previous exercise. Print the variables before and after the assignments to check whether your predictions in the previous exercise were correct. If not, study the examples until you can convince yourself you know what led you to the wrong conclusion.### Exercise 2.35: 

> Determine the types deduced in each of the following definitions. Once you’ve figured out the types, write a program to see whether you were correct.

```cppconst int i = 42;auto j = i; // int
const auto &k = i; // const int &
auto *p = &i; // const int *
const auto j2 = i, &k2 = i; // const int j2 = i; const int &k2 = i;
```

---

## Exercises Section 2.5.3## Exercise 2.36: 

> In the following code, determine the type of each variable and the value each variable has when the code finishes:

```cpp
int a = 3, b = 4; 
decltype(a) c = a; // int c = a;
decltype((b)) d = a; // int &d = a;
++c; // c = 4++d; // a = 4
```### Exercise 2.37: 

> Assignment is an example of an expression that yields a reference type. The type is a reference to the type of the left-hand operand. That is, if i is an int, then the type of the expression i = x is int&. Using that knowledge, determine the type and value of each variable in this code:

```cppint a = 3, b = 4; 
decltype(a) c = a;  // int c = a;
decltype(a = b) d = a; // int &d = a;
```
### Exercise 2.38: 

> Describe the differences in type deduction between decltype and auto. Give an example of an expression where auto and decltype will deduce the same type and an example where they will deduce differing types.

auto 会忽略顶层 const。decltype 会保留。
对于一个引用，auto将其当作引用绑定的对象。decltype中的引用会推断出引用类型。

如：

```cpp
const int i = 0;
auto a = i; // a 是 int。没有保留 i 的顶层 const
decltype(i) b = 1; // b 是一个 const int，所以必须赋初值。 
```

另外，如果 decltype 中的表达式不是一个变量，且表达式结果可作为左值，则会推断出引用类型。

如：

```cpp
int i = 0;
decltype(i) a = 1; // int a
auto a1 = 0; // ina a1 
decltype((i)) b = a; // int &b = a; 
```

---

## Exercises Section 2.6.1
### Exercise 2.39: 

> Compile the following program to see what happens when you forget the semicolon after a class definition. Remember the message for future reference. 
```cpp
struct Foo { /* empty 
*/ } // Note: no semicolon

int main(){return 0;}
```

```
error: expected ';' after struct
*/ } // Note: no semicolon
    ^
    ;
1 error generated.
```
### Exercise 2.40: 

> Write your own version of the Sales_data class.

```cpp
struct Sales_data {
	std::string bookNo;
	unsigned units_sold = 0;
	double price = 0;
	double revenue = 0.0;
};
```

---

## Exercises Section 2.6.2
### Exercise 2.41: 

> Use your Sales_data class to rewrite the exercises in § 1.5.1 (p. 22), § 1.5.2 (p. 24), and § 1.6 (p. 25). For now, you should define your Sales_data class in the same file as your main function.

[ex2_41_1.cc](ex2_41_1.cc)
[ex2_41_2.cc](ex2_41_2.cc)

---

## Exercises Section 2.6.3
### Exercise 2.42: 

> Write your own version of the Sales_data.h header and use it to rewrite the exercise from § 2.6.2 (p. 76).

[ex2_41_1.cc](ex2_41_1.cc)
[ex2_41_2.cc](ex2_41_2.cc)


