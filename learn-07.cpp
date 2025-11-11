//A program to find and display the sum of n natural numbers
#include <stdio.h>
int main(){
    int n, sum = 0;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for (int i = 1;i <= n;i++){
        sum = sum + i;
    }
    printf("The sum of n Natural numbers = %d\n", sum);
    return 0;    

}