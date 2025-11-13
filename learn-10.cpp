//to convert time in seconds to standard format
#include <stdio.h>
int main(){
    int n, hours, min, sec;
    printf("Enter time in seconds\n");
    scanf("%d", &n);
    hours = n/3600;
    min = (n % 3600) / 60;
    sec = n % 60;
    printf("Time in standard format :\n %d::%d::%d", hours, min, sec);
    return 0;
}