// A program to check whether a character is upper, lower, digit or a secial character
#include <stdio.h>
#include <ctype.h>
int main(){
	char ch;
	printf("Enter a character - ");
	scanf(" %c", &ch);
	if (isupper(ch)){
		printf("character is upper case\n");
	}else if(islower(ch)){
		printf("character is lower\n");
		
	}else if(isdigit(ch)){
		printf("character is a digit\n");
		
	}else if(isgraph(ch) && !isalnum(ch)){
		printf("character is a special character");
		
	}else {
		printf("character is a whitespace");
	}
	return 0;
}
