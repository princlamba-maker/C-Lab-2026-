#include <stdio.h>

int main() {
    char ch;
    int a, b;

    printf("Enter operator (+,-,*,/): ");
    scanf(" %c", &ch);
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch(ch) {
        case '+': printf("Result = %d\n", a+b); break;
        case '-': printf("Result = %d\n", a-b); break;
        case '*': printf("Result = %d\n", a*b); break;
        case '/': b!=0 ? printf("Result = %d\n", a/b) : printf("Error! Division by zero\n"); break;
        default: printf("Invalid operator\n");
    }
    return 0;
}