#include <stdio.h>

int main() {
    float base, height, area;

    // Input values
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);

    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    
    area = 0.5 * base * height;

    printf("\nArea of the triangle = %f\n", area);

    return 0;
}
