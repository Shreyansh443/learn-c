// A program to print numbers from 1 to n
#include <stdio.h>
int main(){
	int n;
	printf("Enter a number : ");
	scanf("%d", &n);
	printf("Numbers form 1 to %d are : \n", n);
	if (n<=0){
		printf("Please Enter a positive number");
	}
	else{
		for (int i=1; i<=n; i++){
			printf("%d\n", i);
		}
	}

	
	return 0;
}

