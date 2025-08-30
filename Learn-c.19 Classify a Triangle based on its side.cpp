// A program to classify a Triangle based on its side length
#include <stdio.h>
int main(){
	int a, b, c;
	printf("Enter the sides of a triangle a, b, c\n");
	scanf("%d\n", &a);
	scanf("%d\n", &b);
	scanf("%d", &c);
	if (a==b && b==c){
		printf("The traingle is Equilateral Triangle");
		
	}else if ((a==b && a!=c) || (a==c && a!=b) || (b==c && b!=a)){
		printf("The Traingle is Isoceles Triangle");
		
	}else {
		printf("The Triangle is Scanlene Triangle");
	}
	return 0;
	
}

