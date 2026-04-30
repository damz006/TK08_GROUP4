#include <stdio.h>

float add(float a, float b);
float sub(float a, float b);
float mul(float a, float b);
float divide(float a, float b);

int main() {
    int choice;
    float num1, num2, result;

    printf("=================================\n");
    printf("        SIMPLE CALCULATOR        \n");
    printf("=================================\n");

    while (1) {
        printf("\nAvailable Operations:\n");
        printf("  1. Add (+)\n");
        printf("  2. Sub (-)\n");
        printf("  3. Mul (*)\n");
        printf("  4. Div (/)\n");
        printf("  5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting the calculator. Goodbye!\n");
            break;
        }

        if (choice < 1 || choice > 5) {
            printf("Invalid choice! Please select a number between 1 and 5.\n");
            continue;
        }

        printf("Enter the first number: ");
        scanf("%f", &num1);
        printf("Enter the second number: ");
        scanf("%f", &num2);

        switch (choice) {
            case 1:
                result = add(num1, num2);
                printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
                break;
            case 2:
                result = sub(num1, num2);
                printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
                break;
            case 3:
                result = mul(num1, num2);
                printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
                break;
            case 4:
                if (num2 == 0) {
                    printf("Math Error: Cannot divide by zero!\n");
                } else {
                    result = divide(num1, num2);
                    printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
                }
                break;
        }
        printf("---------------------------------\n");
    }

    return 0;
}

float add(float a, float b) {
    return a + b;
}

float sub(float a, float b) {
    return a - b;
}

float mul(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}