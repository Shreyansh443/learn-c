//A program to swap two numbers without using a third variable
#include <stdio.h>
int main(){
	int a=5, b=6;
	a= a+b;
	b= a-b;
	a= a-b;
	printf("a= %d \n",a);
	printf("b= %d",b);
	return 0;
}
