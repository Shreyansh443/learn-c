// A program to print the product of even numbers from 1 to n
#include <stdio.h>
int main(){
	int n, p=1;
	printf("Enter a positive number - ");
	scanf("%d", &n);
	for (int i=1; i<=n; i++){
		if (i%2==0){
			p=p*i;
			
		}
	}
    printf("Products of even numbers from 1 to n are - %d", p);
}
