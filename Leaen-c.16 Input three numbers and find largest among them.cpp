// A program to input three numbers and find largest among them
#include <stdio.h>
int main(){
	int a, b, c;
	printf("enter three numbers ");
	scanf("%d\n", &a);
	scanf("%d\n", &b);
	scanf("%d", &c);
	if (a>b){
		if (a>c){
			printf("%d is the largest ", a);
		}else{
			printf("%d is the largest ", c);
		}
	}
	if (b>a){
		if (b>c){
			printf("%d is the largest ", b);
			
		}else{
			printf("%d is the largest ", c);
			
		}
		
	}
	if (c>b){
		if (c>a){
			printf("%d is the largest ", c);
		}else{
			printf("%d is the largest ", a);
			
		}
		
	}
	return 0;
	
	
	
}
