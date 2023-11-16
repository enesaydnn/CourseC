#include <stdio.h>

	int main(){

	int baslangıc,bitis,toplam;
	printf("Başlangıç Değeri Giriniz : ");
	scanf("%d",&baslangıc);

	printf("Bitiş Değeri Giriniz : ");
	scanf("%d",&bitis);


	for(int i=baslangıc; i<=bitis; i++ ){
	
		toplam +=i;
		
	}
		
		printf("Ardaşık Sayıların Toplamı : %d ",toplam);	
		return 0;

	}


