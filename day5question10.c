//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>

int main() {
    int seconds, hours, minutes, remainingSeconds;

    printf("Enter time in seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;              
    minutes = (seconds % 3600) / 60;     
    remainingSeconds = seconds % 60;    

    printf("Time = %02d:%02d:%02d\n", hours, minutes, remainingSeconds);

    return 0;
}
