                                                                PROGRAM 5A:

Aim: C++ Program to Check Whether Number is Even or Odd.

Tool: VS CODE.

Theory: This C++ program takes an integer input from the user and determines whether the number is even or odd using the modulus operator %.
1. Even numbers are divisible by 2 (i.e., leave a remainder of 0).
2. Odd numbers are not divisible by 2 (i.e., leave a remainder of 1).

The program uses an if-else condition to check the remainder:
1. If number % 2 == 0, the number is even
2. Else, the number is odd

Algorithm:
1. Start the program.
2. Declare an integer variable number.
3. Display a prompt: "ENTER THE NUMBER:".
4. Take user input for number.
5. Use if(number % 2 == 0):
   If true, display "number IS EVEN."
6. Else,
   Display "number IS ODD."
7. End the program.

Conclusion:
The program effectively demonstrates the basic use of the modulus operator and if-else statements in C++. It helps users understand how to check a number's properties (even or odd) using simple arithmetic and control structures. This is a fundamental program often used to introduce beginners to decision-making in programming.

                                                                PROGRAM 5B:

Aim: C++ Program to Check Whether a Character is Vowel or Consonant.

Tool: VS CODE.

Theory: This C++ program determines whether an entered character is a vowel or a consonant.
The English alphabet has 5 vowels: a, e, i, o, u (and their uppercase counterparts: A, E, I, O, U).
All other alphabetic characters are considered consonants.

The program uses an if-else statement to compare the input character against the list of vowels using the logical OR (||) operator. If the character matches any vowel (uppercase or lowercase), it prints "THE CHARACTER IS A VOWEL"; otherwise, it prints "THE CHARACTER IS A CONSONANT".

Algorithm:
1. Start
2. Declare a char variable character
3. Prompt the user: "ENTER THE CHARACTER:"
4. Read the input into character
5. Check if character is a vowel:
If it matches 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'
> Print "THE CHARACTER IS A VOWEL"
Else
> Print "THE CHARACTER IS A CONSONANT"
6. End.

Conclusion:
This program demonstrates the use of conditional statements and logical operators in C++ to solve real-world problems.
By checking the character against a predefined set of vowels, it correctly identifies whether the input is a vowel or consonant.
It’s a basic but essential example for beginners to understand character comparisons, decision-making, and user input/output in programming.


                                                                   PROGRAM 5C:
                                                                   
Aim: C++ Program to Find Largest Number Among Three Numbers (Nested if-else).

Tool: VS CODE.

Theory: This C++ program compares three input numbers (a, b, and c) and identifies which one is the largest.
It uses nested if-else conditions to perform step-by-step comparisons:
1. First, it checks if a > b.
2. If true, it then compares a and c.
3. If false, it compares b and c.
4. The number that passes all these conditions is printed as the largest.

This logic ensures that only the largest number out of the three is printed, regardless of whether the numbers are positive, negative, or zero.

Algorithm:
1. Start
2. Declare three integer variables: a, b, c
3. Prompt user: "ENTER THE THREE NUMBERS:"
4. Input values for a, b, and c
5. If a > b
> If a > c → Print a is the largest
> Else → Print c is the largest
6. Else (i.e., b >= a)
> If b > c → Print b is the largest
> Else → Print c is the largest
7. End.

Conclusion:
This program demonstrates the use of nested if-else statements to make multi-step decisions.
It’s an excellent example for beginners to understand:

1. Logical thinking in programming
2. Handling multiple conditions
3. Comparing numeric values

The code is simple, efficient, and suitable for solving real-world problems like finding the maximum value in a dataset.


                                                                   PROGRAM 5D:

Aim: C++ Program Calculator Program Switch-Case and break statement.

Tool: VS CODE.

Theory: This program is a basic calculator that performs arithmetic operations: addition (+), subtraction (-), multiplication (*), and division (/) on two input numbers.

1. The program takes two integer operands (num1, num2) from the user.
2. It also takes an operator character (+, -, *, /) as input.
3. A switch statement is used to perform the operation based on the chosen operator:
   + : Addition
   - : Subtraction
   * : Multiplication
   / : Division (with check for divide-by-zero)
4. If an invalid operator is entered, the program prints an error message.

Algorithm:
1. Start
2. Declare variables num1, num2 (integers) and option (character)
3. Prompt the user to input two numbers → store in num1 and num2
4. Prompt the user to input an operator → store in option
5. Use switch(option) to perform the operation:
(i). If option is '+': Print num1 + num2
(ii). If option is '-': Print num1 - num2
(iii). If option is '*': Print num1 * num2
(iv). If option is '/':
         If num2 != 0: Print num1 / num2
         Else: Print "ERROR! DIVISION BY ZERO."
(v). Else: Print "ERROR! OPERATOR IS NOT CORRECT."
6. End.

Conclusion: This calculator program demonstrates:
1. The practical use of switch-case statements in handling multiple operation types.
2. How to take user input and make conditional decisions.
3. How to handle error cases such as invalid operators and division by zero.
4. The concept of control flow in programming using switch, if, and else.
It is a great introductory program for beginners to understand how arithmetic operations and control structures work in C++.


                                                                   PROGRAM 5D:

Aim: C++ Program Calculator using Switch-Case and break statement.

Tool: VS CODE.

Theory: 








