// A program to calculate and print area and circumference of a circle
#include <stdio.h>
int main(){
	float pie = 3.14, cir, area;
	int r;
	printf("enter the radius of circle - ");
	scanf("%d", &r);
	printf("area of circle with radius %d is- %f \n ", r, pie*r*r);
	printf("circumference of circle with radius %d is- %f ", r, 2*pie*r);
	return 0;
}
