#include <stdio.h>

int main () {
 	
	int a,b,c,d;

	printf("İlk notunuzu giriniz :	");
	scanf("%d",&a);

	printf("İkinci notunuzu giriniz :   ");
	scanf("%d",&b);

	printf("Üçüncü notunuzu giriniz :   ");
	scanf("%d",&c);

	d = (a+b+c)/3;
	
	if(d>100){
		printf("Yanlış Değer Girdiniz Not 100'den Büyük Olamaz");
	}
	
	if(d>85){

		printf("Harf notunuz AA Ortalamanız :   %d",d);
	}
	else if(d>=60 && d<=85){

		printf("Harf Notunuz BB Ortalamanız : %d",d);	
	}

	else if(d>=50 && d<60){

		printf("Harf Notunuz CC Ortalamanız : %d",d);
	}
	else{

		printf("Harf Notunuz FF Kaldınız Ortalamanız : %d",d);
	}


	return 0;

}	
