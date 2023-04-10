/* 12. Dado a formula A/5 = B/(A+2) calcular o valor de B dado uma entrada de A. */
#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");

	int num1, num2;
	
	do{
		printf("--------------------------------\n");
		printf("Insira um numero para A: ");
		scanf("%d", &num1);
		
		num2 = (num1 / 5) * (num1 + 2);
		printf("--------------------------------\n");
		printf("\n\tO valor total de B será de: %d", num2);
		
	} while(num1 <= 0);
	
	printf("\n");
	return 0;
}

/*

This is not the end, this is not the beginning
	Just a voice like a riot rocking every revision
		But you listen to the tone and the violent rhythm and
			Though the words sound steady, something empty's within 'em

*/
