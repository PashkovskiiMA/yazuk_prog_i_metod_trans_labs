#include <stdio.h>

int main() {
    float a, b, c, x;

    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);

    x = (c - b) / a;

    printf("x = %.2f", x);

    return 0;
}
