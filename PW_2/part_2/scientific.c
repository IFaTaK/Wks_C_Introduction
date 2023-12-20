#include "standard.h"
#include <math.h>

// Computes the sine of x
float sine(float x)
{
    return sinf(x);
}

// Computes the cosine of x
float cosine(float x)
{
    return cosf(x);
}

// Computes the tangent of x
float tangent(float x)
{
    return tanf(x);
}

// Computes the exponential of x
float exponential(float x)
{
    return expf(x);
}

// Computes the logarithm of x
float logarithm(float x)
{
    return logf(x);
}

// Computes the inverse sine of x
float inverse_sine(float x)
{
    return asinf(x);
}

// Computes the inverse cosine of x
float inverse_cosine(float x)
{
    return acosf(x);
}

// Computes the inverse tangent of x
float inverse_tangent(float x)
{
    return atanf(x);
}

// Computes the factorial of n, used in permutations
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

// Computes the combination of k items from n
int combination(int k, int n)
{
    int fact_k = factorial(k);
    int fact_n = factorial(n);
    int fact_n_minus_k = factorial(n - k);
    return fact_n / (fact_k * fact_n_minus_k);
}

// Scientific calculator menu
void scientific_menu()
{
    int menuChoice;
    printf("\nSCIENTIFIC CALCULATOR\n \
1)  sum\n \
2)  difference\n \
3)  division\n \
4)  quotient\n \
5)  remainder\n \
6)  roots\n \
7)  power\n \
8)  sine\n \
9)  cosine\n \
10) tangent\n \
11) exponential\n \
12) logarithm\n \
13) inverse sine\n \
14) inverse cosine\n \
15) inverse tangent\n \
16) permutation\n \
17) combination\n");
    scanf("%d", &menuChoice);

    float a, b, result;
    int result_int;
    int int_a, int_b;

    switch (menuChoice)
    {
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
            printf("We will calculate the quotient of the Euclidean division of a by b:\nEnter a: ");
            scanf("%d", &int_a);
            printf("\nEnter b: ");
            scanf("%d", &int_b);
            result_int = quotient(int_a, int_b);
            printf("Result: %d", result_int);
            break;
        case 5:
            printf("We will calculate the remainder of the Euclidean division of a by b:\nEnter a: ");
            scanf("%d", &int_a);
            printf("\nEnter b: ");
            scanf("%d", &int_b);
            result_int = remainder(int_a, int_b);
            printf("Result: %d", result_int);
            break;
        case 6:
            printf("We will calculate the root of a:\nEnter a: ");
            scanf("%f", &a);
            result = roots(a);
            printf("Result: %f", result);
            break;
        case 7:
            printf("We will calculate a to the power of b:\nEnter a: ");
            scanf("%f", &a);
            printf("\nEnter b: ");
            scanf("%f", &b);
            result = power(a, b);
            printf("Result: %f", result);
            break;
        case 8:
            printf("We will calculate the sine of x:\nEnter x: ");
            scanf("%f", &a);
            result = sine(a);
            printf("Result: %f", result);
            break;
        case 9:
            printf("We will calculate the cosine of x:\nEnter x: ");
            scanf("%f", &a);
            result = cosine(a);
            printf("Result: %f", result);
            break;
        case 10:
            printf("We will calculate the tangent of x:\nEnter x: ");
            scanf("%f", &a);
            result = tangent(a);
            printf("Result: %f", result);
            break;
        case 11:
            printf("We will calculate the exponential of x:\nEnter x: ");
            scanf("%f", &a);
            result = exponential(a);
            printf("Result: %f", result);
            break;
        case 12:
            printf("We will calculate the logarithm of x:\nEnter x: ");
            scanf("%f", &a);
            result = logarithm(a);
            printf("Result: %f", result);
            break;
        case 13:
            printf("We will calculate the inverse sine of x:\nEnter x: ");
            scanf("%f", &a);
            result = inverse_sine(a);
            printf("Result: %f", result);
            break;
        case 14:
            printf("We will calculate the inverse cosine of x:\nEnter x: ");
            scanf("%f", &a);
            result = inverse_cosine(a);
            printf("Result: %f", result);
            break;
        case 15:
            printf("We will calculate the inverse tangent of x:\nEnter x: ");
            scanf("%f", &a);
            result = inverse_tangent(a);
            printf("Result: %f", result);
            break;
        case 16:
            printf("We will calculate the permutations of n:\nEnter n: ");
            scanf("%d", &int_a);
            result_int = permutation(int_a);
            printf("Result: %d", result_int);
            break;
        case 17:
            printf("We will calculate the combination of k out of n:\nEnter k: ");
            scanf("%d", &int_a);
            printf("Enter n: ");
            scanf("%d", &int_b);
            result_int = combination(int_a, int_b);
            printf("Result: %d", result_int);
            break;
        default:
            printf("\nEntry not recognized");
    }
}
