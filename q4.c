#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Apply the conversion formula
    celsius = (fahrenheit - 32.0) * 5.0 / 9.0;

    printf("%f Fahrenheit is equal to %f Celsius.\n", fahrenheit, celsius);

    return 0;
}

