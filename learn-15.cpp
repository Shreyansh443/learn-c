// To check a Character
#include <stdio.h>
#include <ctype.h>
int main(){
    char ch;
    printf("Enter a Character\n");
    scanf("%c", &ch);
    if (isupper(ch)){
        printf("%c is  Upper case Letter", ch);
    }else if (islower(ch)){
        printf("%c is Lower case Letter", ch);
    }else if (isdigit(ch)){
        printf("%c is digit", ch);
    }else {
        printf("%c is Special Character", ch);
    }
    return 0;
}