/* 9. Dados dois n�meros diferentes dividir o maior pelo menor valor. */
#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int firstNumber, secondNumber, quotient;
	
	printf("--------------------------------\n");
	printf("Insira o 1� n�mero: ");
	scanf("%d", &firstNumber);
	
	printf("----------------\n");
	printf("Agora digite o 2� n�mero: ");
	scanf("%d", &secondNumber);
	
	if(secondNumber == 0){
		printf("--------------------------------\n");
		printf("\nN�o � poss�vel dividir por zero. Insira um n�mero diferente do mesmo.");
		
	} else if(firstNumber > secondNumber){
		quotient = firstNumber / secondNumber;
		printf("--------------------------------\n");
		printf("\nO valor da divis�o de %d por %d �: %d", firstNumber, secondNumber, quotient);
		
	} else if(secondNumber > firstNumber){
		quotient = secondNumber / firstNumber;
		printf("--------------------------------\n");
		printf("\n\tO valor da divis�o de %d por %d �: %d", secondNumber, firstNumber, quotient);
		
	} else {
		printf("--------------------------------\n");
		printf("\nOs dois n�meros s�o iguais e n�o � poss�vel realizar a divis�o. Rode o programa novamente!");
		
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
