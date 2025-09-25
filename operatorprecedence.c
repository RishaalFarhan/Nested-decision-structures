#include <stdio.h>

int main() {
    int a, b;
    
    // Request input from the user 
    printf("Please provide two integer values (a and b): ");
    scanf("%d %d", &a, &b);
    
   
    int result = a + b * (a - b) / 2;
    
    // Presenting the outcome and explaining operator precedence
    printf("\nGiven a = %d and b = %d,\n", a, b);
    printf("The expression a + b * (a - b) / 2 has been evaluated.\n");
    printf("The result of the computation is: %d\n", result);
    
    printf("\nThe order:\n");
    printf("1. Parentheses (a - b) was evaluated first.\n");
    printf("2. Multiplication and division were then performed in left-to-right order.\n");
    printf("3. Addition was executed to obtain the result.\n");
    
    return 0;
}
