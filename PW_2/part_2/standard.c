#include <stdio.h>
#include <math.h>

// Function to calculate the sum of a and b
float sum(float a, float b) {
    return a + b;
}

// Function to calculate the difference between a and b
float subtraction(float a, float b) {
    return a - b;
}

// Function to calculate a raised to the power of b
float power(float a, float b) {
    return powf(a, b);
}

// Function to calculate the square root of a
float roots(float a) {
    return sqrtf(a);
}

// Function to calculate the division of a by b
float division(float a, float b) {
    return a / b;
}

// Function to calculate the integer quotient of a divided by b
int quotient(int a, int b) {
    return a / b;
}

// Function to calculate the remainder of a divided by b
int remainder(int a, int b) {
    return a % b;
}

// Standard calculator menu
void standard_menu() {
    int menuChoice;
    printf("\nSTANDARD CALCULATOR\n \
1) sum\n \
2) difference\n \
3) division\n \
4) quotient\n \
5) remainder\n \
6) roots\n \
7) power\n");
    scanf("%d", &menuChoice);

    float a, b, result;
    int result_remainder, result_quotient;
    int int_a, int_b;

    switch (menuChoice) {
        case 1:
            printf("We will calculate the sum a + b:\nEnter a: ");
            scanf("%f", &a);
            printf("\nEnter b: ");
            scanf("%f", &b);
            result = sum(a, b);
            printf("Result: %f", result);
            break;
        case 2:
            printf("We will calculate the difference a - b:\nEnter a: ");
            scanf("%f", &a);
            printf("\nEnter b: ");
            scanf("%f", &b);
            result = subtraction(a, b);
            printf("Result: %f", result);
            break;
        case 3:
            printf("We will calculate the division a/b:\nEnter a: ");
            scanf("%f", &a);
            printf("\nEnter b: ");
            scanf("%f", &b);
            result = division(a, b);
            printf("Result: %f", result);
            break;
        case 4:
            printf("We will calculate the integer quotient of a divided by b:\nEnter a: ");
            scanf("%d", &int_a);
            printf("\nEnter b: ");
            scanf("%d", &int_b);
            result_quotient = quotient(int_a, int_b);
            printf("Result: %d", result_quotient);
            break;
        case 5:
            printf("We will calculate the remainder of a divided by b:\nEnter a: ");
            scanf("%d", &int_a);
            printf("\nEnter b: ");
            scanf("%d", &int_b);
            result_remainder = remainder(int_a, int_b);
            printf("Result: %d", result_remainder);
            break;
        case 6:
            printf("We will calculate the square root of a:\nEnter a: ");
            scanf("%f", &a);
            result = roots(a);
            printf("Result: %f", result);
            break;
        case 7:
            printf("We will calculate a raised to the power of b:\nEnter a: ");
            scanf("%f", &a);
            printf("\nEnter b: ");
            scanf("%f", &b);
            result = power(a, b);
            printf("Result: %f", result);
            break;
        default:
            printf("\nEntry not recognized");
    }
}
