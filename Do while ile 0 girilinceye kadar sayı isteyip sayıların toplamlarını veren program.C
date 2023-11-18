#include <stdio.h>

	int main(){
 	
	int number,sum = 0;

	do{
	//Burayada Yapılacak işlemler yazılıyor.
		
		printf("Bir Sayı Giriniz  : ");
		scanf("%d",&number);
		sum = number+sum;
		

	} while(number != 0); //Koşul Belirtiyorsun.
		
	printf("Toplam Sayı  :  %d",sum);

	return 0;


	}
