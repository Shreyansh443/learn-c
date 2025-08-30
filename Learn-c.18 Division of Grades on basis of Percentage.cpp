// A program to assign grades based on percentage inputs
#include <stdio.h>
int main(){
	int percentage;
	printf("Enter percentage of student - ");
	scanf("%d", &percentage);
	if (percentage >= 90){
		printf("Grade=A+");
	}else if (percentage >= 80 && percentage < 90){
		printf("Grade=A");
		
	}else if (percentage >= 75 && percentage < 80){
		printf("Grade=B+");
		
	}else if (percentage >= 70 && percentage < 75){
		printf("Grade=B");
		
	}else if (percentage >= 65 && percentage < 70){
		printf("Grade=C");
		
	}else if (percentage >= 60 && percentage < 65){
		printf("Grade=D");
		
	}else if (percentage < 60 && percentage >= 33){
		printf("Grade=E");
		
	}else {
		printf("FAIL");
	}
	return 0;

}
