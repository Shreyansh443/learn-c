//A program to enter a character and check whether it is vowel or consonant
#include <stdio.h>
int main(){
	char c;
	printf("Enter a character");
	scanf("%d", &c);
	if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
		printf("the character is a vowel");
		
	}else{
		printf("the charcter is consonant");
		
	}
	return 0;
}
