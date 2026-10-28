#include <stdio.h>

int main() {
    printf("If, then operator\n");
    double x, y, z, max = 0;

    printf("x: ");
    scanf("%lf", &x);
    printf("y: ");
    scanf("%lf", &y);
    printf("z: ");
    scanf("%lf", &z);

    max = x;
    if (y > max)
        max = y;
     
    if (z > max)
        max = z;

    printf("The largest number is %.5lf.\n", max);

    return 0;
}