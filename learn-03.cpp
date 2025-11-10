//to calculate the area and perimeter of ractangle
#include <stdio.h>
int main(){
    int l, b, area, perimeter;
    printf("Enter the length\n");
    scanf("%d", &l);
    printf("Enter the breadth\n");
    scanf("%d", &b);
    area = l*b;
    perimeter = 2*(l+b);
    printf("Area of Rectangle= %d\n", area);
    printf("Perimeter of Rectangle= %d\n", perimeter);
    return 0;

}