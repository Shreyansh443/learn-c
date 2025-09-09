// A program to check whether a number is armstrong number or not
#include <stdio.h>
#include <math.h>

int main(){
	int num, z, remainder, n=0;
	double r = 0.0;
	printf("Enter an integer: ");
	scanf("%d", &num);
	z = num;
	while (z != 0){
		z /= 10;
		++n;
	}
	z = num;
	while (z != 0){
		remainder = z % 10;
		r += pow(remainder, n);
		z /= 10;
	}
	if ((int)r == num){
		printf("%d is an Armstrong number. \n", num);
		
	}else {
		printf("%d is not an Armstrong number. \n", num);
		
	}
	return 0;
}
