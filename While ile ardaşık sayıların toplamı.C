#include <stdio.h>

	int main(){
 	
	int number,consec = 0;

	printf("Bir'e kadar olan ardaşık sayıların toplamı için sayı giriniz :  ");
	scanf("%d",&number);

	while(number > 0){

	consec=number+consec;
	number--;

	}

	printf("Sonuç :  %d",consec);
	return 0;

	}
