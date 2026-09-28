#include <stdio.h>


int main(void) {
    
    int totalPayable = 0;
    int paymentReceived = 0;
    int change = 0;
    int count = 0;
    int i = 0;

    printf("Enter the total amount payable: ");
    scanf("%d", &totalPayable);

    printf("Enter the total payment Received: ");
    scanf("%d", &paymentReceived);

    change = paymentReceived - totalPayable; // calculates the change

    printf("Total change: %d\n", change);


    int bills[] = {1000, 500, 200, 100, 50, 20, 10, 5, 1}; // array for the bills
    for (i = 0; i < 9; i++) { // loop for displaying the number of bills/coins

        count = change / bills[i];
        change = change - (count * bills[i]);
          if (bills[i] <= 10) { // checks whether to output bills or coins based on the change 
            printf("Number of %d coins: %d\n", bills[i], count);
          }
          else
          {
            printf("Number of %d bills: %d\n", bills[i], count);
          }
    }

 return 0;

} 