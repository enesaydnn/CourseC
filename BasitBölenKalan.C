#include <stdio.h>

int main (){
    
    int deger;
    int bolen;
    int bolunen;
    int kalan;
    
    printf("Lütfen Sayı Girişi Yapın : ");
    scanf("%d",&deger);
    
    printf("Lütfen Sayı Girişi Yapın : ");
    scanf("%d",&bolen);
    
    bolunen = deger/bolen;
    kalan = deger%bolen;
    
    printf (" Bölünen Sayı  : %d \n",bolunen);
    printf ("Kalan Sayı  : %d",kalan);
    
    return 0;
    
    
}