// A program to calculate an electricity bill based on units consumed
#include <stdio.h>
int main(){
	float n, unit1, unit2;
	printf("Enter the number of units consumed - ");
	scanf("%f", &n);
	printf("fair for first 100 units = 5/per unit \n");
	printf("fair for second 100 units = 10/per unit \n");
	printf("fair for unit above 200 = 20/per unit \n");
	unit1 = 100*5;
	unit2 = 100*10;
	if (n<=100){
		printf("Electricity bill = %f", n*5);
	}else if (n<=200){
		printf("Electricity bill = %f", unit1+((n-100)*10));
	}else {
		printf("electricity bill = %f", unit1+unit2+((n-200)*20));
	}
}
