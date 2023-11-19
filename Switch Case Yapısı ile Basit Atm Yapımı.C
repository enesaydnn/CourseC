#include <stdio.h>
#include <stdlib.h>

	int main(){
 	
		int yatbakiye;
		int cekbakiye;
		int bakiye=5000;
		int durum;
	do{		
	printf("1)Bakiye Kontrol \n ");
	printf("2)Para Çekme \n ");
	printf("3)Para Yatırma \n");
	printf("4)Çıkış \n ");
	printf("Ne yapmak istiyorsunuz : ");
	scanf("%d",&durum);

	switch(durum){

	case 1:
		printf("Güncel Durum Bakiyeniz : %d ",bakiye);
		break;
	case 2:
		printf("Çekilecek Miktarı Giriniz : ");
		scanf("%d",&cekbakiye);
		bakiye = bakiye - cekbakiye;
		break;
	case 3:
		printf("Yatırılacak Parayı Giriniz : ");
		scanf("%d",&yatbakiye);
		bakiye = bakiye + yatbakiye;
		break;

		default:
		break;

	}


	} while (durum != 4);

	printf("Çıkış Yapılıyor ... ");


	return 0;

	}

