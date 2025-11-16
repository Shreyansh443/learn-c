// Program to find roots of a quadratic equation
#include <stdio.h>
#include <math.h>
int main(){
    int a, b, c, D, r1, r2;
    printf("Enter coffecient a, b, c\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    D = (b*b) - 4*a*c;
    r1 = (-b + sqrt(D)) / (2*a);
    r2 = (-b - sqrt(D)) / (2*a);
    if (D > 0){
        printf("Two real and distict roots %d, %d", r1, r2 );
    }
    else if (D = 0){
        printf("Two real and equal roots %d, %d", r1, r2);
    }
    else{
        printf("Two complex and conjugate roots ");
    }
}