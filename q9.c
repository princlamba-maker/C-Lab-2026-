#include <stdio.h>

int main() {
    int hours, minutes, seconds, total_Seconds;
    printf("Enter hours: ");
    scanf("%d", &hours);

    printf("Enter minutes: ");
    scanf("%d", &minutes);

    printf("Enter seconds: ");
    scanf("%d", &seconds);

    total_Seconds = (hours * 3600) + (minutes * 60) + seconds;

    printf("\nTotal time in seconds = %d\n", total_Seconds);

    return 0;
}
