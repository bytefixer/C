/* 4. Dado de entrada um valor l�gico escrever na tela �O valor oposto �: valor l�gico�. */
#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int boolean, negacao;
	
	printf("Digite um valor l�gico(0 ou 1): ");
	boolean = getchar() - '0';
	
	if(boolean == 0 || boolean == 1){
		negacao = (boolean == 0) ? 1 : 0;
		printf("\nO valor digitado foi: %d.\n\n\t*** O seu valor oposto �: %d! ***", boolean, negacao);
	} else{
		printf("\nValor l�gico inv�lido.\n\tN�o existe isso.\n\t\t Rode o programa novamente.");
	}
	
	printf("\n");
	return 0;
}

/*

You think you're better than me?
	You don't like what you see?
		I think it's best we agree to disagree
			I'm doing fine by myself
				I never asked for your help
					I think it's best we agree to disagree
					
*/

