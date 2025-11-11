//Program to swap two numbers using third variable
#include <stdio.h>
int main(){
    int a = 5;
    int b = 6;
    printf("Variables before swapping :\n a = %d \n b = %d\n", a, b);
    int c;
    c = a;
    a = b;
    b = c;
    printf("Variables after swapping :\n a = %d \n b = %d", a, b);
    return 0;
}