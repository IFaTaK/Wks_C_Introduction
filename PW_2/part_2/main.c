/* Second Part of the Practical Work in C Programming
This program serves as the main interface for a calculator application, developed as part of the second practical work in a C programming class. It offers users a choice between two types of calculators: a standard calculator and a scientific calculator.

Upon launching the program, users are presented with a menu to choose the type of calculator they wish to use. The standard calculator provides basic arithmetic operations like addition, subtraction, multiplication, division, and calculations of quotient and remainder. The scientific calculator, on the other hand, includes advanced functions such as trigonometric calculations (sine, cosine, tangent), exponential and logarithmic computations, and more complex mathematical operations like permutations and combinations.

Each calculator option is implemented in separate modules, 'standard.h' and 'scientific.h', showcasing the use of modular programming in C. The program demonstrates the practical application of various C programming concepts, including function calls, conditional statements, and user input handling, to create an interactive and user-friendly computational tool.
*/

#include "standard.h"
#include "scientific.h"
#include "stdio.h"

int main() {
    int choice;
    printf("Calculator choice:\n1) Standard Calculator\n2) Scientific Calculator\n");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            standard_menu();
            break;
        case 2:
            scientific_menu();
            break;
        default:
            printf("Entry not recognized");
    }
    return 0;
}
