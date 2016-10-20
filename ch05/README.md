## Exercises Section 5.1


> What is a null statement? When might you use a null statement?

> What is a block? When might you might use a block?

> Use the comma operator (§ 4.10, p. 157) to rewrite the while loop from § 1.4.1 (p. 11) so that it no longer requires a block. Explain whether this rewrite improves or diminishes the readability of this code.

---

## Exercises Section 5.2

> Explain each of the following examples, and correct any problems you detect.
(b) while (bool status = find(word)) { /* . . . */ }

---

## Exercises Section 5.3.1

> Using an if–else statement, write your own version of the program to generate the letter grade from a numeric grade.

> Rewrite your grading program to use the conditional operator

> Correct the errors in each of the following code fragments:

> What is a “dangling else”? How are else clauses resolved in C++?

---

## Exercises Section 5.3.2

> Write a program using a series of if statements to count the number of vowels in text read from cin.

> There is one problem with our vowel-counting program as we’ve implemented it: It doesn’t count capital letters as vowels. Write a program that counts both lower- and uppercase letters as the appropriate vowel—that is, your program should count both 'a' and 'A' as part of aCnt, and so forth.

> Modify our vowel-counting program so that it also counts the number of blank spaces, tabs, and newlines read.

Modify our vowel-counting program so that it counts the number of occurrences of the following two-character sequences: ff, fl, and fi.

> Each of the programs in the highlighted text on page 184 contains a common programming error. Identify and correct each error.

---

## Exercises Section 5.4.1

> Write a program to read strings from standard input looking for duplicated words. The program should find places in the input where one word is followed immediately by itself. Keep track of the largest number of times a single repetition occurs and which word is repeated. Print the maximum number of duplicates, or else print a message saying that no word was repeated. For example, if the input is

---

## Exercises Section 5.4.2

> Explain each of the following loops. Correct any problems you detect.

> The while loop is particularly good at executing while some condition holds; for example, when we need to read values until end-of-file. The for loop is generally thought of as a step loop: An index steps through a range of values in a collection. Write an idiomatic use of each loop and then rewrite each using the other loop construct. If you could use only one loop, which would you choose? Why?

> Given two vectors of ints, write a program to determine whether one vector is a prefix of the other. For vectors of unequal length, compare the number of elements of the smaller vector. For example, given the vectors containing 0, 1, 1, and 2 and 0, 1, 1, 2, 3, 5, 8, respectively your program should return true.

---

## Exercises Section 5.4.4

> Explain each of the following loops. Correct any problems you detect.

> Write a program that uses a do while loop to repetitively request two strings from the user and report which string is less than the other.

---


> Write a program to read a sequence of strings from the standard input until either the same word occurs twice in succession or all the words have been read. Use a while loop to read the text one word at a time. Use the break statement to terminate the loop if a word occurs twice in succession. Print the word if it occurs twice in succession, or else print a message saying that no word was repeated.

---

## Exercises Section 5.5.2

> Revise the program from the exercise in § 5.5.1 (p. 191) so that it looks only for duplicated words that start with an uppercase letter.

---

## Exercises Section 5.5.3

> The last example in this section that jumped back to begin could be better written using a loop. Rewrite the code to eliminate the goto.

---

## Exercises Section 5.6.3

> Write a program that reads two integers from the standard input and prints the result of dividing the first number by the second.

> Revise your program to throw an exception if the second number is zero. Test your program with a zero input to see what happens on your system if you don’t catch an exception.

> Revise your program from the previous exercise to use a try block to catch the exception. The catch clause should print a message to the user and ask them to supply a new number and repeat the code inside the try.

