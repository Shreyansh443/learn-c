// A program to assign grades 
#include <stdio.h>
int main(){
    int p;
    printf("Enter the approx percentage of a candidate\n");
    scanf("%d", &p);
    if (p>=90){
        printf("Grade : A");
    }else if (p>=80 && p<90){
        printf("Grade : B");
    }else if (p>=70 && p<80){
        printf("Grades : C");
    }else if (p>=60 && p<70){
        printf("Grades : D");
    }else {
        printf("Grade : F");
    }
    return 0;
}