//A program to check for a leap year
#include <stdio.h>
int main(){
    int y;
    printf("Enter the Year\n");
    scanf("%d", &y);
    if ((y % 4) == 0){
        if ((y % 100) == 0){
            if ((y % 400) == 0){
                printf("%d is a leap year", y);
            }else {
                printf("%d is not a leap Year", y);
            }
        }else {
            printf("%d is a leap Year", y);
        }
    }else {
        printf("%d is not a leap Year", y);
    }
}