#include <stdio.h>

int toplam (int a, int b); // Prototopi Çağırdık


int main (){

int x,y;
int Toplam;
printf("Birinci Sayıyı Giriniz :");
scanf("%d",&x);
printf("İkinci Sayıyı Giriniz :");
scanf("%d",&y);


Toplam = toplam(x,y); // Fonksiyonu Çağıdık
printf("Sayıların Toplamı : %d",Toplam);

return 0;

}

int toplam (int a, int b){	// Fonksiyonu Oluşturduk.

int toplam;
toplam = a+b;
return toplam;
	
}
