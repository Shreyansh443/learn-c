// A program to find largest among three numbers
#include <stdio.h>
int main(){
    int a, b, c;
    printf("Enter value of a\n");
    scanf("%d", &a);
    printf("Enter value of b\n");
    scanf("%d", &b);
    printf("Enter value of c\n");
    scanf("%d", &c);
    if (a>b){
        if (a>c){
            printf("%d is the greatest", a);
        }else {
            printf("%d is the greatest", c);
        }
    }if (b>a){
        if (b>c){
            printf("%d is the greatest", b);
        }else {
            printf("%d is the greatest", c);
        }
    }
    return 0;
}