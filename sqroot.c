#include <stdio.h>
#include <math.h>

int main() {
    double num;
    
    printf("Enter number: ");
    scanf("%lf", &num);
    
    // Checking if number is valid for square root
    if (num >= 0) {
        printf("The square root of %.2lf is %.2lf\n", num, sqrt(num));
    } else {
        printf("Square root not possible\n");
    }
    
    return 0;
}
