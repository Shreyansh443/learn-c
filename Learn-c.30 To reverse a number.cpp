// A program to reverse a number
#include <stdio.h>
int main(){
	int n, r=0, rem;
	printf("Enter the number - ");
	scanf("%d", &n);
	while (n!=0){
		rem = n%10;
		r = r*10+rem;
		n = n/10;
		
	}
	printf("The reverse of a given number is %d ", r);
	return 0;
}
