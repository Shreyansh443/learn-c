//A program to check whether a character is consonant or vowel
#include <stdio.h>
int main(){
    char c;
    printf("Enter a Character\n");
    scanf("%c", &c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
        printf("%c is a consonant", c);
    }else {
        printf("%c is a vowel", c);
    }
    return 0;
}