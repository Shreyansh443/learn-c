//To calculate library fine based on late days
#include <stdio.h>
int main(){
	int n, fine1 = 0, fine2=0, fine3=0;
	printf("Enter number of days an item is late - ");
	scanf("%d", &n);
	fine1 = 5*20;
	fine2 = 10*40;
	if (n<=5) {
	    printf("Fine = %d", n*20);
	}else if (n<=15){
		printf("Fine = %d", fine1+((n-5)*40));
		
	}else {
		printf("Fine = %d", fine1+fine2+((n-15)*100));
				
	}
	return 0;
}
