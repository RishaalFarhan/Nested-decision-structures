#include <stdio.h>

int main() {
    int x, y;
    
    
    printf("Input two numbers(like 6 and 7): ");
    scanf("%d %d", &x, &y);
    
    printf("\nx = %d and y = %d\n", x, y);
    printf("Condition 1: (x > 5) && (y < 10) is %d\n", (x > 5) && (y < 10));
    printf("Condition 2: (x == 10) || (y == 5) is %d\n", (x == 10) || (y == 5));
    printf("Condition 3: !(x == y) is %d\n", !(x == y));
    
    return 0;
}
