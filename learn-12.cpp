// A program to check whether a number is positive, negative or zero
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number to check\n");
    scanf("%d", &n) ;
    if (n > 0){
        printf("%d is positive number\n", n);
    }
    if (n < 0){
        printf("%d is negative number\n", n);
    }
    if (n == 0){
        printf("%d is zero",n);
    }
    return 0;
}