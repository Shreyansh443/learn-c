// A program to input a year and check whether it is a leap year or not 
#include <stdio.h>
int main(){
	int y;
	printf("Enter year - ");
	scanf("%d", &y);
	if (y%4==0 && y%100!=0){
		printf("the year is a leap year");
		
	}else{
		printf("the year is not a leap year");
		
	}
	return 0;
}
