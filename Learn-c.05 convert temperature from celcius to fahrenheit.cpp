// A program to convert temperature from celcius to fahrenheit.
#include <stdio.h>
int main(){
	float cel;
	printf("Enter the temperature in Celius");
	scanf("%f", &cel);
	printf("The Temperature in fahrenheit is - %f", ((9.0/5.0)*cel)+32);
	return 0;
}

