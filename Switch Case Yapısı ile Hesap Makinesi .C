#include <stdio.h>

	int main(){
 	
		int num1,num2;
		char op;

		printf("Bir İşlem Giriniz '+' '-' '*' '/' :  ");
		scanf("%c",&op);

		printf("Birinci Sayıyı Giriniz  :");
		scanf("%d",&num1);

		printf("İkinci Sayıyı Giriniz  :");
		scanf("%d",&num2);

		
		switch(op){

			case '+' :
				printf("Sonuç  : %d ",num1+num2);
			break;

			case '-':
				printf("Sonuç  : %d",num1-num2);
			break;

			case '*':
				printf("Sonuç  : %d",num1*num2);
			break;

			case '/':
				printf("Sonuç  : %d",num1/num2);
			break;
			
			
			default:
			break;



		}
	

	return 0;

	}
