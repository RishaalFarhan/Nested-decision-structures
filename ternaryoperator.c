#include <stdio.h>

int main() {
    int m, n;
    
    // Taking two integer inputs 
    printf("Enter two integers (m and n): ");
    scanf("%d %d", &m, &n);
    
    // Using ternary operator to print the larger number with a message
    printf("%d is greater than %d\n", (m > n) ? m : n, (m > n) ? n : m);
    
    return 0;
}
