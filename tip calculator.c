#include <stdio.h>


int main(void) {
    
    int bill = 0;
    float tip = 0;
    float tipAmount = 0;
    int people = 0;
    int totalBill = 0;
    float payment = 0;

    printf("Enter the bill amount: ");
    scanf("%d", &bill);

    printf("Enter the tip percentage: ");
    scanf("%f", &tip);

    while (tip > 1) { // checks if percentage > 1, if so, user must input a new one that isnt greater than 1
        printf("Invalid percentage, please use a valid one!\n");
        
        printf("Enter the tip percentage: ");
        scanf("%f", &tip);
    }

    printf("Enter the amount of people paying: ");
    scanf("%d", &people);

    tipAmount = (bill * tip); 
    totalBill = (bill + tipAmount);
    payment = (float)totalBill / people; // typecast totalBIll to output payment without error

    printf("The total bill is: %d\n", totalBill);
    
    printf("The amount that people should pay: %.2f", payment);

    return 0;
}