#include <stdio.h>
int main() {
    int x, y, z;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    printf("Enter third number: ");
    scanf("%d", &z);

    int max_value = (x > y) ? (x > z ? x : z) : (y > z ? y : z);

    printf("The largest number is: %d\n", x, y, z, max_value);

    return 0;
}
