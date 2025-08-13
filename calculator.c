#include <stdio.h>

// int main() 
// {
//     int a, b;
//     char operator;

//     printf("Enter first number: ");
//     scanf("%d", &a);
//     printf("Enter second number: ");
//     scanf("%d", &b);
//     printf("Enter operator (+, -, *, /): ");
//     scanf(" %c", &operator);

//     if(operator == '+') {
//         printf("%d + %d = %d\n", a, b, a + b);
//     } else if(operator == '-') {
//         printf("%d - %d = %d\n", a, b, a - b);
//     } else if(operator == '*') {
//         printf("%d * %d = %d\n", a, b, a * b);
//     } else if(operator == '/') {
//         if(b != 0) {
//             printf("%d / %d = %.2f\n", a, b, (float)a / b);
//         } else {
//             printf("Error: Division by zero is not allowed.\n");
//         }
//     } else {
//         printf("Error: Invalid operator.\n");
//     }
//     return 0;
// }





int main(){
    int a, b;
    char operator;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator)
    {
        case '+':
            printf("%d + %d = %d\n", a, b, a + b);
            break;
        case '-':
            printf("%d - %d = %d\n", a, b, a - b);
            break;
        case '*':
            printf("%d * %d = %d\n", a, b, a * b);
            break;
        case '/':
            if (b != 0) {
                printf("%d / %d = %.2f\n", a, b, (float)a / b);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }
    return 0;
}