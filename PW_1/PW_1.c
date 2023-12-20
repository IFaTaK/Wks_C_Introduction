/*
 * First Practical Work in College C Programming Class
 * This program represents the initial practical exercise in C programming. It includes various tasks like solving quadratic equations, inverting factorials, computing distances between points, matrix multiplication, and managing student records. It showcases the use of conditional structures, loops, and libraries like math.h and stdio.h. It also introduces working with structures and type definitions for modeling points and students. The program emphasizes the process of algorithm design, programming, testing, and error correction.
 */

/*
 * Kilian LEFEVRE, Group 2B
 *
 * Steps in Implementing the Solution:
 * For each exercise, before programming, we must think of a paper algorithm that performs the task: this helps determine which types we should use and the necessary conditional structures or loops. After this first step, we draft a program, test it, and correct errors. We then test the program in different scenarios to confirm its proper functioning.
 *
 * The following programs use conditional structures such as if/else and loops like for/while. Some also use the math.h library for calculations like square roots. The stdio.h library is used for standard inputs and outputs (terminal and file). We also use structures and type definitions to model points and then students.
 *
 * The programs of the first part were written as if they were alone in their file: as a main functions hence their type and the presence of return 0 at the end of each. They were renamed for continuity to compile and progress.
 *
 * The quadratic equation solver is limited to real roots (no complex numbers). Moreover, the coefficients a, b, and c must all be integers and are entered by the user.
 *
 * The inverse factorial returns the expected result: when the user enters 120, the program correctly displays the value 5. When the user enters 5, the program indicates that it is not a factorial.
 *
 * The Cartesian distance is accurately calculated: the user will have to enter real number coordinates for the two points A and B in the order x then y.
 *
 * The matrix multiplication correctly performs the product of two matrices A and B, each with a maximum size of 10x10. The size of the two matrices and the elements are entered by the user. If the two formats are not compatible for matrix multiplication, the program displays: "Multiplication is impossible: incompatible formats." Otherwise, the product of the two matrices C is calculated (using the matrix product formula) and then displayed.
 *
 * The definition of the student structure and thus the type is done outside the functions to be global and recognized by all the following functions. The fill, display, and save functions are of type void: they do not return a value. The fill function directly modifies the array through pointers. The others only need to read the array and then display/save it, so no return value is needed.
 *
 * The file reading function allocates a portion of memory the size of the array to be retrieved, retrieves it from the file, and returns the pointer to the first element.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// [Rest of the program remains the same as previously translated]



#include <stdio.h>
#include <math.h>

// Part 1

// Solving a quadratic equation
int solveQuadratic()
{
    int a, b, c;
    float discriminant;

    printf("Calculating real solutions of equations of the form ax^2 + bx + c = 0. \n");
    printf("Enter values for a, b, c (separated by space):\n");
    scanf("%d %d %d", &a, &b, &c);

    // Calculating the discriminant
    discriminant = b * b - 4 * a * c;
    printf("\na : %d \nb : %d \nc : %d \ndiscriminant : %f\n\n", a, b, c, discriminant);

    // Depending on the value of the discriminant, we give the equation's solutions
    if (discriminant == 0)
    {
        printf("This equation has one real solution:\n");
        printf("x0 : %f", -b / (2.0 * a));
    }
    else if (discriminant > 0)
    {
        float root_disc = sqrt(discriminant); // Calculating the square root of the discriminant
        printf("This equation has two real solutions:\n");
        printf("x1 : %f\n", (-b - root_disc) / (2.0 * a));
        printf("x2 : %f\n", (-b + root_disc) / (2.0 * a));
    }
    else
    {
        printf("This equation does not have real solutions.\n");
    }
    return 0;
}

// Inverse factorial
int inverseFactorial()
{
    int n;
    printf("Calculating the inverse value of a factorial. \n");
    printf("Enter a value for n: ");
    scanf("%d", &n);
    int i = 0;
    int r = 0;
    while (n > 1 && r == 0)
    {
        i++;
        r = n % i;
        n = n / i; // Dividing successively by naturals, we check if n is divisible by the integer. If it's not, then it's not a factorial.
    }
    if (r == 0)
    {
        printf("The inverse factorial is: %d", i);
    }
    else
    {
        printf("No factorial found.");
    }
    return 0;
}

// Distance between two points
int distanceBetweenPoints()
{
    struct Point
    {
        float x;
        float y;
    };
    typedef struct Point Point;

    Point A, B;
    printf("Calculating the distance between two points:\n");
    printf("Enter the coordinates of point A:\n");
    scanf("%f %f", &A.x, &A.y);
    printf("Enter the coordinates of point B:\n");
    scanf("%f %f", &B.x, &B.y);

    float distance = sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y));
    printf("\nThe distance between the two points is: %f", distance);
}

// Matrix multiplication
int matrixMultiplication()
{
    int n, m, p, q; // Matrix sizes
    printf("Enter the size of the first matrix:\n");
    scanf("%d %d", &n, &m);
    printf("Enter the size of the second matrix:\n");
    scanf("%d %d", &p, &q);

    int mat1[10][10];
    int mat2[10][10];

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    // Now we have entered the sizes and elements of both matrices.

    printf("Multiplying the two matrices\n");
    if (m != p) // Checking the compatibility of sizes
    {
        printf("Multiplication is impossible: incompatible formats");
    }
    else
    {
        int result[10][10];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < q; j++)
            {
                result[i][j] = 0; // Initializing to 0 before summing up for matrix product
                for (int k = 0; k < m; k++)
                {
                    result[i][j] += mat1[i][k] * mat2[k][j]; // Formula for matrix product
                }
            }
        }

        printf("Displaying the result\n");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}

// Part 2

struct Student
{
    char name[50];
    char firstName[50];
    int age;
};
typedef struct Student Student;

void fill(Student *array, int size)
{
    for (int i = 0; i < size; i++) // Entering name, first name, and age for each entry in the array up to the size-th entry.
    {
        printf("Enter the student's name: ");
        scanf("%s", &((*(array + i)).name));
        printf("Enter the student's first name: ");
        scanf("%s", &((*(array + i)).firstName));
        printf("Enter the student's age: ");
        scanf("%d", &((*(array + i)).age));
    }
}

void display(Student *array, int size)
{
    printf("List of students\n");
    for (int i = 0; i < size; i++)
    {
        printf("%s : %s : %d\n", (*(array + i)).name, (*(array + i)).firstName, (*(array + i)).age); // Displaying in the desired format
    }
}

void save(Student *array, int size, char *path)
{
    FILE *fp = fopen(path, "w");
    for (int i = 0; i < size; i++)
    {
        fprintf(fp, "%s : %s : %d\n", (*(array + i)).name, (*(array + i)).firstName, (*(array + i)).age); // Writing in the correct format in the file
    }
    fclose(fp);
}

Student *readFile(char *path, int size)
{
    Student *array = (Student *)malloc(sizeof(Student) * size);
    FILE *fp = fopen(path, "r");
    for (int i = 0; i < size; i++)
    {
        fscanf(fp, "%s : %s : %d", &(*(array + i)).name, &(*(array + i)).firstName, &(*(array + i)).age); // Reading from the file
    }
    return array;
}

int main()
{
    Student students[50];
    char *file = "test.txt";

    int n;
    printf("Enter the number of students to enter into the array.\n");
    scanf("%d", &n);

    fill(students, n);
    display(students, n);
    save(students, n, file);
    Student *read = readFile(file, n);
    display(read, n);
    return 0;
}
