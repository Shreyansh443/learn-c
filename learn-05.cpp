//A program to convert Temperature from degree to fahrenhiet
#include <stdio.h>
int main(){
    float c, f;
    printf("Enter the tempeature in celsius\n");
    scanf("%f", &c);
    f = (c*9/5) + 32;
    printf("Temperature in fahrenheit = %f\n ", f);
    return 0;
}