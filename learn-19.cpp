//Program to classify Triangle based on its sides length
#include <stdio.h>
int main(){
    int a, b, c;
    printf("Enter the sides of the triangle\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a==b && b==c){
        printf("Triangle is Equilateral Triangle");

    }else if ((a==b && b!=c) || (a!=b && b==c) || (a==c && c!=b)){
        printf("Triangle is Iscoceles Triangle");

    }else {
        printf("Triangle is scalene Triangle");
    }
    return 0;
}