//A program to swap two numbers using third variable
#include <stdio.h>
int main(){
	int a= 7, b=6 ,c;
	c=a;
	a=b;
	b=c;
	printf("The swapped variables are %d,%d",a, b);
	return 0;
}
