// To implement a basic calculator using switch case for +,-,*,/,%.
#include <stdio.h>
int main(){
	char op;
	double n1, n2;
	printf("Enter an operator (+, -, *, /, %%): ");
	scanf("%c", &op);
	printf("enter two numbers: ");
	scanf("%lf %lf", &n1, &n2);
	switch (op) {
		case '+':
			printf("Result: %.2f\n", n1 + n2);
			break;
		case '-':
		    printf("Result: %.2lf\n", n1 - n2);
			break;
		case '*':
		 	printf("Result: %.2lf\n", n1 * n2);
			break;
		case '/':
			if (n2 != 0){
				printf("Result: %.2lf\n", n1 / n2);
				
			}else {
				printf("Error: Division by zero is not allowed");
				
			}
			break;
		case '%':
			if (n2 != 0){
				printf("Result: %d\n", (int)n1 % (int)n2);
				
			}else {
				printf("Error: Division by zero is not allowed.\n");
				
			}
			break;
		default:
			printf("Error: Invalid operator.\n");
			break;
			 	
	}
	return 0;
}
