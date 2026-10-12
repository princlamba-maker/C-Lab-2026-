#include <stdio.h>

int main() {
    int s1, s2, s3, s4, s5, total;
    float percentage;
    printf("Enter marks of 5 subjects (out of 100 each):\n");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);

    // Calculate total and percentage
    total = s1 + s2 + s3 + s4 + s5;
    percentage = total / 5.0;

    // Print division
    printf("\nTotal Marks = %d", total);
    printf("\nPercentage = %.2f%%", percentage);

    if (percentage >= 60) {
        printf("\nDivision = First\n");
    }
    else if (percentage >= 50) {
        printf("\nDivision = Second\n");
    }
    else if (percentage >= 40) {
        printf("\nDivision = Third\n");
    }
    else {
        printf("\nDivision = Fail\n");
    }

    return 0;
}