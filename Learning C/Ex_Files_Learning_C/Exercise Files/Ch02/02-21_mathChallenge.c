#include <stdio.h>
#include <math.h>

int main() {
    float a, b;
    printf("Write the value of a: ");
    scanf("%f", &a);
    printf("Write the value of b: ");
    scanf("%f", &b);

    printf("The sum is %f. \n", a + b);
    printf("The subtraction is %f. \n", a - b);
    printf("The multiplication is %f. \n", a * b);
    printf("The division is %f. \n", a / b);
    printf("%f ^ %f is %f\n", a, b, pow(a, b));
    printf("The square root of a is %f\n", sqrt(a));
    printf("The square root of b is %f\n", sqrt(b));
    return 0;
}
