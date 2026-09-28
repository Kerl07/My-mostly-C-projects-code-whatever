#include <stdio.h>

int main(void) {
    int totalSeconds = 0;
    int hours = 0;
    int minutes = 0;
    int seconds = 0;
    // used to check for remainders for totalSeconds if its converted to hours, minutes, and seconds
    int remainingSeconds = 0;   

    printf("Input the total amount of seconds: ");
    scanf("%d", &totalSeconds);
    // converts totalSeconds to hours 
    hours = (totalSeconds / 3600);
    remainingSeconds = (totalSeconds  - (hours * 3600));
    // doees the same thing above except its for remainingSeconds
    minutes = (remainingSeconds  / 60); 
    seconds = (remainingSeconds - (minutes * 60));

    printf("The time is: %d hours %d minutes and %d seconds", hours, minutes, seconds);
    return 0;
}