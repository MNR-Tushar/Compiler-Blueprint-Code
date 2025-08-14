# Compiler Blueprint Exercises

This repository contains programming exercises from various chapters of the "Compiler Blueprint" book. Each exercise focuses on different compiler design concepts.

## Book Reference
[Compiler Blueprint](https://drive.google.com/file/d/1TRMY7GE4qbrQnGHrVyXrGyO641CmaTYF/view?usp=drive_link)

## Chapter Exercises

### Chapter 1 - Introduction to Compilers
Basic string manipulation exercises:
- **[P_1.1](p_1.1.c):** Count vowels in a string
- **[P_1.2](p_1.2.c):** Convert lowercase to uppercase
- **[P_1.3](p_1.3.c):** Reverse a string (no library functions)
- **[P_1.4](p_1.4.c):** Count words in a sentence
- **[P_1.5](p_1.5.c):** Check for palindromes

### Chapter 2 - Phases of a Compiler
Compiler frontend components:
- **[PP_2.1](p_2.1.c):** Tokenize a line of code
- **[PP_2.2](p_2.2.c):** Build symbol table from declarations
- **[PP_2.3](p_2.3.c):** Infix to 3-address code conversion
- **[PP_2.4](p_2.4.c):** Detect type mismatches

### Chapter 3 - Lexical Analysis & CFG
Lexical analysis and parsing:
- **[PP_3.1](p_3.1.py):** Extract identifiers using regex
- **[PP_3.2](p_3.2.py):** Lexical analyzer for arithmetic expressions
- **[PP_3.3](p_3.3.py):** DFA for binary numbers divisible by 3
- **[PP_3.4](p_3.4.c):** Tokenize C file and count elements
- **[PP_3.5](p_3.5.py):** CFG parser using NLTK/Lark
- **[PP_3.6](p_3.6.py):** CYK algorithm implementation
- **[PP_3.7](p_3.7.py):** Left-factoring CFG converter
- **[PP_3.8](p_3.8.py):** CFG derivation and parse tree visualization

### Chapter 4 - Regular Expressions
Pattern matching exercises:
- **[PP_4.1](p_4.1.c):** Binary string validator (0|1)*
- **[PP_4.2](p_4.2.c):** Even count of 'a's
- **[PP_4.3](p_4.3.c):** a*b*c* pattern matcher
- **[PP_4.4](p_4.4.c):** C identifier validator
- **[PP_4.5](p_4.5.c):** Even-length palindrome checker
- **[PP_4.6](p_4.6.c):** Alternating ab pattern

### Chapter 5 - Finite Automata
DFA/NFA implementations:
- **[PP_5.1](p_5.1.cpp):** DFA for binary numbers ÷3
- **[PP_5.2](p_5.2.cpp):** DFA for strings ending in 01
- **[PP_5.3](p_5.3.cpp):** Even 0s counter
- **[PP_5.4](p_5.4.cpp):** DFA string acceptor
- **[PP_5.5](p_5.5.cpp):** NFA for ab* language
- **[PP_5.6](p_5.6.cpp):** ε-NFA for strings ending with a/aa
- **[PP_5.7](p_5.7.cpp):** NFA to DFA converter

### Chapter 6 - Grammar Transformations
Grammar optimization:
- **[PP_6.1](p_6.1.c):** Immediate left recursion detector
- **[PP_6.2](p_6.2.c):** Left recursion eliminator
- **[PP_6.3](p_6.3.c):** Common prefix factorer
- **[PP_6.4](p_6.4.c):** Left factoring implementation

### Chapter 8 - LR Parsing
Bottom-up parsing:
- **[PP_8.1](p_8.1.cpp):** LR(0) items generator
- **[PP_8.2](p_8.2.cpp):** Canonical collection generator
- **[PP_8.3](p_8.3.cpp):** LR parsing table builder

### Chapter 11 - Control Flow
Intermediate representations:
- **[PP_11.1](p_11.1.cpp):** Leader identification
- **[PP_11.2](p_11.2.cpp):** Control flow graph generator

### Chapter 12 - Optimization
Compiler optimizations:
- **[PP_12.1](p_12.1.cpp):** Constant folding
- **[PP_12.2](p_12.2.cpp):** Dead code detection
- **[PP_12.3](p_12.3.cpp):** Copy propagation

## How to Use
1. Clone the repository
2. Navigate to specific chapter/exercise
3. Compile and run the code (instructions in each file)

## Contribution
Contributions are welcome! Please:
- Follow consistent naming conventions
- Include clear comments
- Add test cases where applicable
