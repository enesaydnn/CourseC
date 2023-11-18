#include <stdio.h>

	int main(){
 	
	int number,fackt = 1;

	printf("Faktöriyeli Hesaplanacak Sayıyı Giriniz  : ");
	scanf("%d",&number);

	while(number > 0 ){

		fackt = number * fackt;
		number --;

	}
	
	printf("Faktöriyelin Sonucu : %d",fackt);


		return 0;

	}
