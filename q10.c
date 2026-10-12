#include <stdio.h>

int main() {
    float M, P, C, E, CM;

    printf("Enter Mathematics marks (out of 200): ");
    scanf("%f", &M);

    printf("Enter Physics marks (out of 200): ");
    scanf("%f", &P);

    printf("Enter Chemistry marks (out of 200): ");
    scanf("%f", &C);

    printf("Enter Entrance Exam marks (out of 100): ");
    scanf("%f", &E);

    // Calculate Cut-off Mark
    CM = (M / 2) + (P / 2) + (C / 2) + E;

    printf("\nCut-off Mark (CM) = %f\n", CM);

    return 0;
}
