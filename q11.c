#include <stdio.h>

int main() {
    int total_Seconds, hours, minutes, seconds;

    printf("Enter total seconds: ");
    scanf("%d", &total_Seconds);

    // Conversion
    hours = total_Seconds / 3600;            // 1 hour = 3600 seconds
    total_Seconds = total_Seconds % 3600;     // Remaining seconds

    minutes = total_Seconds / 60;            // 1 minute = 60 seconds
    seconds = total_Seconds % 60;            // Remaining seconds

    printf("\nTime = %d hr : %d min : %d sec\n", hours, minutes, seconds);

    return 0;
}