/*
 * First Exercise in College C Programming Class
 * This program is designed to demonstrate the basic concepts of function creation
 * and usage in C. It includes a custom function to calculate the cube of a number
 * and utilizes this function to compute and display the cube of 3.
 */

#include <stdio.h>

// Function to calculate the cube of a number
float cube(float x) {
    return x * x * x;  // Returns the cube of x
}

int main() {
    float cube_of_3;  // Variable to store the cube of 3
    cube_of_3 = cube(3.0);  // Calculating the cube of 3.0
    printf("%f", cube_of_3);  // Printing the result
    return 0;  // End of the program
}
