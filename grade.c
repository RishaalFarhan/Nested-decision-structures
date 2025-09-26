#include <stdio.h>
int main() {
    int Number;
    char grade;
	
    printf("Enter a course number (1, 2, 3): ");
    scanf("%d", &Number);
    printf("Enter a letter grade (A, B, C, D, F): ");
    scanf(" %c", &grade);


    switch(Number) {
        case 1:
            printf("Course 1: ");
            switch(grade) {
                case 'A': 
				printf("Excellent\n"); 
				break;
                case 'B': 
			    printf("Good\n"); 
				break;
                case 'C': 
				printf("Above average\n"); 
				break;
                case 'D': 
				printf("Below performance.\n"); 
				break;
                case 'F': 
				printf("Bad\n"); 
				break;
                default: 
				printf("Invalid grade\n");
            }
            break;
        case 2:
            printf("Course 2: ");
            switch(grade) {
                case 'A': 
				printf("Marvellous/n"); 
				break;
                case 'B': 
				printf("Above average work.\n"); 
				break;
                case 'C': 
				printf("Average work.\n"); 
				break;
                case 'D': 
				printf("Below average work.\n"); 
				break;
                case 'F': 
				printf("Failed.\n"); 
				break;
                default: 
				printf("Invalid grade entered.\n");
            }
            break;
        case 3:
            printf("Course 3: ");
            switch(grade) {
                case 'A': 
				printf("Superb\n"); 
				break;
                case 'B': 
				printf("Good achievement.\n"); 
				break;
                case 'C': 
				printf("Satisfactory achievement.\n"); 
				break;
                case 'D': 
				printf("Low achievement.\n"); 
				break;
                case 'F': 
				printf("Not pass.\n"); 
				break;
                default: 
				printf("Invalid grade entered.\n");
            }
            break;
        default:
            printf("Invalid number\n");
    }

    return 0;
}
