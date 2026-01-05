#include <stdio.h>
#include <math.h>

// Function to calculate factorial
long long factorial(int n) {
    if (n < 0)
        return -1;
    long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int choice;
    double a, b, result;
    int n;

    do {
        printf("\n========== SCIENTIFIC CALCULATOR ==========\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power (a^b)\n");
        printf("6. Square Root\n");
        printf("7. Logarithm (base 10)\n");
        printf("8. Natural Log (ln)\n");
        printf("9. Sine\n");
        printf("10. Cosine\n");
        printf("11. Tangent\n");
        printf("12. Factorial\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                printf("Result = %.2lf\n", a + b);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                printf("Result = %.2lf\n", a - b);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                printf("Result = %.2lf\n", a * b);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                if (b != 0)
                    printf("Result = %.2lf\n", a / b);
                else
                    printf("Error! Division by zero.\n");
                break;

            case 5:
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &a, &b);
                printf("Result = %.2lf\n", pow(a, b));
                break;

            case 6:
                printf("Enter a number: ");
                scanf("%lf", &a);
                if (a >= 0)
                    printf("Result = %.2lf\n", sqrt(a));
                else
                    printf("Error! Negative number.\n");
                break;

            case 7:
                printf("Enter a number: ");
                scanf("%lf", &a);
                if (a > 0)
                    printf("Result = %.2lf\n", log10(a));
                else
                    printf("Error! Invalid input.\n");
                break;

            case 8:
                printf("Enter a number: ");
                scanf("%lf", &a);
                if (a > 0)
                    printf("Result = %.2lf\n", log(a));
                else
                    printf("Error! Invalid input.\n");
                break;

            case 9:
                printf("Enter angle in degrees: ");
                scanf("%lf", &a);
                printf("Result = %.2lf\n", sin(a * M_PI / 180));
                break;

            case 10:
                printf("Enter angle in degrees: ");
                scanf("%lf", &a);
                printf("Result = %.2lf\n", cos(a * M_PI / 180));
                break;

            case 11:
                printf("Enter angle in degrees: ");
                scanf("%lf", &a);
                printf("Result = %.2lf\n", tan(a * M_PI / 180));
                break;

            case 12:
                printf("Enter an integer: ");
                scanf("%d", &n);
                result = factorial(n);
                if (result != -1)
                    printf("Result = %lld\n", factorial(n));
                else
                    printf("Error! Factorial of negative number.\n");
                break;

            case 0:
                printf("Thank you for using the calculator!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 0);

    return 0;
}

