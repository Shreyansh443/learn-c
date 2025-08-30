// A program to find the roots of quadratic equation and categories them
#include <stdio.h>
#include <math.h>
int main(){
	float a, b, c;
	float root1, root2;
	printf("Enter a, b, c, - ");
	scanf("%f\n %f\n %f", &a, &b, &c);
	root1= ((-b + sqrt((b*b)- 4*a*c))/2*a);
	root2= ((-b - sqrt((b*b)- 4*a*c))/2*a);
	printf("positive root =  %f \n" ,root1);
	printf("Negative root =  %f \n",root2);
	int D;
	D= b*b - (4*a*c);
	if (D>0){
		printf("the equation has two distinct real roots");
		
	}
    else if (D==0){
		printf("The equation has one real root");
		
	}
	else {
		("The euation has two complex (imaginary) roots");
		
	}
	return 0;
}
