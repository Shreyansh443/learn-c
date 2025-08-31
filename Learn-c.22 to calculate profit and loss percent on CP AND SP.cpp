// To determine profit or loss percentage given its cost price and selling price
#include <stdio.h>
int main(){
	float CP, SP, profit, loss;
	printf("Enter Cost price - ");
	scanf("%f", &CP);
	printf("Enter Selling price - ");
	scanf("%f", &SP);
	if (SP>CP){
		profit= SP-CP;
		printf("profit %% = %f", (profit/CP)*100);
		
	}else {
		loss= CP-SP;
		printf("loss %% = %f", (loss/CP)*100);
		
	}
	return 0;
}
