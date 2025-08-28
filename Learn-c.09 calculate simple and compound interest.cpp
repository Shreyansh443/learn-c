// A program to calculate simple and compound interest
#include <stdio.h>
#include <math.h>
int main(){
	int t;
	double prin, r, SI, CI;
	printf("Enter principal, time and rate");
	scanf("%lf \n", &prin);
	scanf("%d \n", &t);
	scanf("%lf", &r);
	printf("simple interest = %lf\n", (prin*r*t)/100);
	printf("compound interest = %lf", (prin*pow((1+r)/100,t))-prin);
	return 0;
}
