 #include <stdio.h>

 int main() {
	int a, b, c;
	int islem;

	printf("Lütfen Bir İşlem Belirtin  1) Toplama 2) Çıkarma 3) Çarpma 4) Bölme  :");
	scanf("%d",&islem);

	printf("Birinci Sayıyı Giriniz :   ");
	scanf("%d", &a);

	printf("İkinci Sayıyı Giriniz :   ");
	scanf("%d", &b);

	if (islem == 1) {
		c = a + b;
		printf("İşleminizin Sonucu   :  %d", c);
	}

	else if (islem == 2) {
		c = a - b;
		printf("İşleminizin Sonucu   :  %d", c);
	}

	else if (islem == 3) {
		c = a * b;
		printf("İşleminizin Sonucu   :  %d", c);
	}

	else if (islem == 4) {
		c = a / b;
		printf("İşleminizin Sonucu   :  %d", c);
	}

	else
	{
		printf("İşlem Dışı Bir Şey İstediniz");
	}

	return 0;


}
