# Compiler Blueprint Exercises

## Chapters 1, 2, 3, 4, 5, 6, 8, 11, 12


## Chapter 1 - Introduction to Compilers
- **[P_1.1](p_1.1.c):** Write a C program that will count the number of vowels in a string
- **[P_1.2](p_1.2.c):** Write a program to convert all lowercase letters in a string to uppercase.
- **[P_1.3](p_1.3.c):** Write a C program to reverse a string without using library functions.
- **[P_1.4](p_1.4.c):** Write a program to count the number of words in a sentence.
- **[P_1.5](p_1.5.c):** Write a C program to check whether a string is a palindrome or
not.

## Chapter 2 - Phases of a Compiler
- **[PP_2.1](p_2.1.c):** Write a C program that reads a line of code and prints its tokens
- **[PP_2.2](p_2.2.c):** Write a program that takes multiple variable declarations and builds a symbol table.
- **[PP_2.3](p_2.3.c):** Create a program that converts an infix expression to 3-address code.
- **[PP_2.4](p_2.4.c):** Write a program that detects type mismatch in simple assignments

## Chapter 3 - Lexical Analysis & Context-Free Grammar
- **[PP_3.1](p_3.1.py):** Write a program in Python that uses regular expressions to extract all identifiers from a given code snippet.
- **[PP_3.2](p_3.2.py):** Implement a lexical analyzer for arithmetic expressions (supporting +, -, *, /, numbers, and variables).
- **[PP_3.3](p_3.3.py):** Simulate a DFA in code that recognizes binary numbers divisible by 3.
- **[PP_3.4](p_3.4.c):** Write a C/C++ program to tokenize a C-style source file and count the number of keywords, identifiers, and literals.
- **[PP_3.5](p_3.5.py):** Write a Python program using the ‘nltk‘ or ‘lark‘ library to parse strings using a given CFG.  
- **[PP_3.6](p_3.6.py):** Implement a parser that takes a CFG and checks whether a given string is accepted using the CYK algorithm. 
- **[PP_3.7](p_3.7.py):** Create a program to convert a simple CFG into its equivalent left-factored form. 
- **[PP_3.8](p_3.8.py):** Simulate derivations of a CFG and print the parse tree using any programming language.
 

## Chapter 4 - Regular Expressions
- **[PP_4.1](p_4.1.c):** Write a C program to check whether a given string is a binary string (i.e., consists only of 0 and 1). Pattern: (0|1)*
- **[PP_4.2](p_4.2.c):** Accept strings that contain an even number of a characters (e.g., aa, aabb, bbaabb). Hint: Use a counter to track number of a’s.
- **[PP_4.3](p_4.3.c):** Accept strings that match the pattern: a*b*c* (e.g., aaabbbccc, abc, aabbcc, but not acb, cba).

- **[PP_4.4](p_4.4.c):** Check if a string is a valid C identifier. Conditions:
• Starts with a letter or underscore (_)
• Followed by letters, digits or underscores
Pattern: [a-zA-Z_][a-zA-Z0-9_]*
- **[PP_4.5](p_4.5.c):** Write a program to check if the string is a palindrome and has even length Examples: abba, noon, cc are valid. aba, racecar are not.

- **[PP_4.6](p_4.6.c):** Accept strings where characters alternate between a and b, starting with a. Examples: abab, ab, ababab. Reject: aa, ba, abb.


## Chapter 5 - Finite Automata – NFA & DFA
- **[PP_5.1](p_5.1.cpp):** Write a C++ program that simulates a DFA which accepts binary numbers divisible by 3.
- **[PP_5.2](p_5.2.cpp):** Implement a DFA in C++ to accept strings ending in 01.
- **[PP_5.3](p_5.3.cpp):** Write a program that accepts binary strings with even number of 0s.

- **[PP_5.4](p_5.4.cpp):** Write a program that checks whether a string belongs to the language of a DFA defined by a given transition table.
- **[PP_5.5](p_5.5.cpp):** Simulate an NFA in C++ that accepts the language defined by the regular expression ab*.
- **[PP_5.6](p_5.6.cpp):** Write a program to simulate an epsilon-NFA that accepts strings ending with a or aa.
- **[PP_5.7](p_5.7.cpp):** Convert a given NFA transition table into DFA (you may use data structures to implement it).


## Chapter 6 - Left Recursion & Left Factoring
- **[PP_6.1](p_6.1.c):** Write a C program to detect immediate left recursion in a given production.
- **[PP_6.2](p_6.2.c):** Write a program to eliminate immediate left recursion from a grammar rule.
- **[PP_6.3](p_6.3.c):** Write a program that finds and factors out the common prefix in multiple productions.
- **[PP_6.4](p_6.4.c):** Write a program that performs left factoring on two given alternatives.



## Chapter 8 - LR(0) Parser and Canonical Table
- **[PP_8.1](p_8.1.cpp):** Write a C++ program to read a context-free grammar and generate LR(0) items.
- **[PP_8.2](p_8.2.cpp):** Extend the program to generate the Canonical Collection of LR(0) items using closures and GOTO operations. 
- **[PP_8.3](p_8.3.cpp):** Write a program that builds the parsing table and parses an input string (like id + id * id) using stack operations, showing shift/reduce actions.


## Chapter 11 - Basic Blocks and Flow Graph
- **[PP_11.1](p_11.1.cpp):** Leader Identification
- **[PP_11.2](p_11.2.cpp):** Control Flow Graph

## Chapter 12 - Code Optimization
- **[PP_12.1](p_12.1.cpp):** Write a program to perform constant folding on arithmetic expressions.
- **[PP_12.2](p_12.2.cpp):** Write a program that detects dead code in simple variable assignments.
- **[PP_12.2](p_12.3.cpp):** Implement copy propagation to replace variables by their known copies.



## Download the Book
You can download the book from [Compiler Blueprint](https://drive.google.com/file/d/1TRMY7GE4qbrQnGHrVyXrGyO641CmaTYF/view?usp=drive_link).
