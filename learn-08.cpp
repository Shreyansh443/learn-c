//A program to swap two numbers using a third variable
#include <stdio.h>
int main(){
    int a = 5;
    int b = 6;
    printf("Variables before swapping : \n a = %d\n b = %d\n", a, b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("Variables after swapping : \n a = %d\n b = %d\n", a, b);
    return 0;
}