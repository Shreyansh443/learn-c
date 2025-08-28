//A prgram to find and display the sum of n natural numbers
#include <stdio.h>
int main(){
	int n, sum;
	printf("Enter n");
	scanf("%d", &n);
	for (int i=1; i<=n; i++){
		sum= i+sum;
	}
	printf("the sum of n natural numbers is - %d ", sum);
	
}
