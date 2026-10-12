#include <stdio.h>

int main() {
    int seconds = 31558150;   // Total seconds in Earth's revolution
    int days, hours, minutes;

    // Convert seconds into days, hours, minutes
    days = seconds / (24 * 3600);          // 1 day = 24*3600 seconds
    seconds = seconds % (24 * 3600);       // Remaining seconds

    hours = seconds / 3600;                // 1 hour = 3600 seconds
    seconds = seconds % 3600;              // Remaining seconds

    minutes = seconds / 60;                // 1 minute = 60 seconds

    printf("Earth's revolution period:\n");
    printf("%d days, %d hours, %d minutes\n", days, hours, minutes);

    return 0;
}