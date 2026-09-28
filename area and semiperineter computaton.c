#include <stdio.h>
#include <math.h> // to make the keyword "sqrt" work 

int main(void) {
    int perimeter = 0;
    float area = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int s = 0;

    printf("Input 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) { // checks if the sides of the triangle is valid, otherwise display an error message
    perimeter = (a + b + c);
    s = perimeter / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c)); 

        printf("Perimeter : %d m\n", perimeter);
        printf("Area: %.2f sq.m", area);
     } else {
        printf("Invalid triangle sides\n");

     }
  return 0;

}