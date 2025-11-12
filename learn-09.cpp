// A program to calculate simple and compound interest
#include <stdio.h>
#include <math.h>
int main(){
    float p, r, t;
    float SI, CI, A;
    printf("Enter principal\n");
    scanf("%f", &p);
    printf("Enter rate of interest\n");
    scanf("%f", &r);
    printf("Enter time\n");
    scanf("%f", &t);
    SI = (p*r*t)/100;
    A = p*pow((1 + float(r/100)),t);
    CI = A - p;
    printf("Simple Interest = %f\n", SI);
    printf("Compund Interest = %f\n", CI);
    return 0;
}