/* 5. Dado de entrada dois valores num�ricos fazer a subtra��o e apresentar ao usu�rio. */
#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int fstInput, sndInput, result;
		
	do{
		
		printf("\nInsira o seu 1� n�mero: ");
		scanf("%d", &fstInput);
		
		printf("________________________________ \n\n");
		
		printf("Insira o seu 2� n�mero: ");
		scanf("%d", &sndInput);
		
	} while(fstInput == sndInput && fstInput < sndInput && fstInput > sndInput);
	
	result = fstInput - sndInput;
	
	printf("________________________________ \n");
	
	printf("\n\t*** O resultado da sua subtra��o de %d por %d �: %d ***", fstInput, sndInput, result);
	
	printf("\n");
	return 0;
}

/* So could you
	Tell me how you're sleeping easy
		How you're only thinking of yourself
			Show me how you justify
				Telling all your lies like second nature */

