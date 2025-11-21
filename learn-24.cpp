//A program to calculate electricity bill
#include <stdio.h>
int main(){
    float n, bill;
    printf("Enter the number of units \n");
    scanf("%f", &n);
    if (n < 100){
        bill = (n*5);
        printf("Bill = %f", bill);
    }else if((n > 100) && (n < 200)){
        bill = (n*7);
        printf("Bill = %f", bill);
    }else if ((n > 200) && (n < 300)){
        bill = (n*10);
        printf("Bill = %f", bill);
    }else{
        bill = (n*12);
        printf("Bill = %f", bill);
    } 
    return 0;
}