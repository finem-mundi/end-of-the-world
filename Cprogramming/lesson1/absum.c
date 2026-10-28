#include <stdio.h>
int main() {
    printf("Program to find A + B\n");
    int a, b;
    printf("Enter integer a: ");
    scanf("%d", &a);
    printf("Enter integer b: ");
    scanf("%d", &b);

    printf("%d + %d = %d", a, b, a+b);
    return 0;
}