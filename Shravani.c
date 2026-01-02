// N.Shravani  ERP-RU-25-10860
/*Create separate functions for each operation. 
 In main(), display menu and read choice. Call appropriate function based on choice.*/

#include <stdio.h>

// Function declarations
void add();
void subtract();
void multiply();
void divide();

int main() {
    int choice;

    printf("Mini Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            add();
            break;
        case 2:
            subtract();
            break;
        case 3:
            multiply();
            break;
        case 4:
            divide();
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

// Function definitions
void add() {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Result = %.2f\n", a + b);
}

void subtract() {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Result = %.2f\n", a - b);
}

void multiply() {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Result = %.2f\n", a * b);
}

void divide() {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    if (b != 0)
        printf("Result = %.2f\n", a / b);
    else
        printf("Error: Division by zero!\n");
}
