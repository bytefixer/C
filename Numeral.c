/* 3. Dado de entrada um numeral escrever na tela “O número digitado foi: numeral” */
#include <stdio.h>
#include <locale.h>
#define inputNumber 1

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int loop, input[inputNumber];
	
	printf("Por favor, digite um número: ");
	
	for(loop = 0; loop < inputNumber; loop++){
		scanf("%d", &input[loop]);
	}
	
	printf("\n");
	
	printf("*** O número que você digitou é: ");
	
	for(loop = 0; loop < inputNumber; loop++){
		printf("%d ", input[loop]);
	}
	
	printf("***");
	printf("\n");
	
	return 0;
}

/*

What would you say
	If the whole world could hear it?
		What would you do
			If you knew they would believe it?
			
*/
