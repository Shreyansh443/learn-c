//A program to calculate area and cicumference of a circle
#include <stdio.h>
int main(){
    int r;
    float cir, area, pie = 3.14;
    printf("Enter the radius of Circle\n");
    scanf("%d", &r);
    area = pie*r*r;
    cir = 2*pie*r;
    printf("Area of Circle = %f\n", area);
    printf("Circumference of Circle = %f\n", cir);
    return 0;
}