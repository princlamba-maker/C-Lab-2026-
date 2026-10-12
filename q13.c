#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (num % 2 == 0)
     {
        printf("%d is Even\n", num);
    } 
    else if (num % 2 ==1)
     {
        printf("%d is Odd\n", num);
    }
else {
    printf("neither even nor odd");
}
    return 0;
}