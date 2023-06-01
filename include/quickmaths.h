#include <stdio.h>

double 𝜋 = 3.14159265358979323846264338327950288419716939937510;

int add() {

    float num1;
    float num2;
    float eq;

    printf("First number: ");
    scanf("%f", &num1);
    printf("Input second number: ");
    scanf("%f", &num2);
    eq = num1 + num2;
    printf("%f plus %f is %f", num1, num2, eq);
}