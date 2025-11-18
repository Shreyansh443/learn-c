//Program to display day of the week based on number (1-7)
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number for day of a week from (1-7)\n");
    scanf("%d", &n);
    switch (n){
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid number");


    }
    return 0;
}