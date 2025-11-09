// A program to input two numbers and display their sum, difference, quotient and product.
#include <stdio.h>
int main(){
    int a, b, sum, quo, diff, product;
    printf("Enter the value of a");
    scanf("%d", &a);
    printf("Enter the value of b");
    scanf("%d", &b);
    sum = a+b;
    diff = a-b;
    quo = a/b;
    product = a*b;
    printf("sum of numbers = %d\n", sum);
    printf("Difference of two numbers =%d\n", diff);
    printf("Quotient of Numbers = %d\n", quo);
    printf("Product of two numbers = %d\n", product);
    return 0;
}