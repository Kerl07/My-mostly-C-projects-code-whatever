#include <stdio.h>

int main(void) {

    float earthWeight = 0;
    float marsWeight = 0;
    float moonWeight = 0;
    float jupiterWeight = 0;

    printf("Enter Earth Weight (in kg): ");
    scanf("%f", &earthWeight);

    marsWeight = earthWeight * 0.38;
    moonWeight = earthWeight * 0.165;
    jupiterWeight = earthWeight * 2.34;

    printf("Weight in Mars: %.2f\n", marsWeight);
    printf("Weight in Moon: %.2f\n", moonWeight);
    printf("Weight in Jupiter: %.2f\n", jupiterWeight);

    return 0;
}