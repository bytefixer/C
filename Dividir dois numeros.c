/* 9. Dados dois números diferentes dividir o maior pelo menor valor. */
#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int firstNumber, secondNumber, quotient;
	
	printf("--------------------------------\n");
	printf("Insira o 1º número: ");
	scanf("%d", &firstNumber);
	
	printf("----------------\n");
	printf("Agora digite o 2º número: ");
	scanf("%d", &secondNumber);
	
	if(secondNumber == 0){
		printf("--------------------------------\n");
		printf("\nNão é possível dividir por zero. Insira um número diferente do mesmo.");
		
	} else if(firstNumber > secondNumber){
		quotient = firstNumber / secondNumber;
		printf("--------------------------------\n");
		printf("\nO valor da divisão de %d por %d é: %d", firstNumber, secondNumber, quotient);
		
	} else if(secondNumber > firstNumber){
		quotient = secondNumber / firstNumber;
		printf("--------------------------------\n");
		printf("\n\tO valor da divisão de %d por %d é: %d", secondNumber, firstNumber, quotient);
		
	} else {
		printf("--------------------------------\n");
		printf("\nOs dois números são iguais e não é possível realizar a divisão. Rode o programa novamente!");
		
	}
	
	printf("\n");
	return 0;
}

/*
	It's time to face your fear
		'Cause when your time has come and gone
			I'll be the one to carry on (carry on)
				And you can throw me to the wolves (throw me to the wolves)
					'Cause I am undefeatable
*/
