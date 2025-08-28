// Program to input time in seconds and convert it into hours:minutes:seconds format
#include <stdio.h>
int main(){
	int n, hours, min, sec;
	printf("Enter time in seconds");
	scanf("%d",&n);
	hours= n/3600;
	min= (n%3600)/60;
	sec= n%60;
	printf("Time in hours:min:sec format is - %d,%d,%d", hours,min,sec);
	return 0;
	
}
