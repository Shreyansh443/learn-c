// A program to chech whether a number is positive, negative or zero
#include <stdio.h>
int main(){
	int n;
	printf("Enter the number - ");
	scanf("%d", &n);
	if (n!=0){
		if(n>0){
			printf("The number is positive");
			
		}
		else{
			printf("The number is negative");
			
		}	
	}
	else{
		printf("the number is zero");
	}
	return 0;
} 
