#include <stdio.h>

int main() {
    int x, y, z;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    if (x >= y) {
        if (x >= z) {
            printf("Largest number: %d\n", x);
        } else {
            printf("Largest number: %d\n", z);
        }
    } else {
        if (y >= z) {
            printf("Largest number: %d\n", y);
        } else {
            printf("Largest number: %d\n", z);
        }
    }

    return 0;
}
nt
