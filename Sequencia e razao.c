/* 14. Escreva um programa que dado o primeiro número e a razão de uma sequência, imprima seus dez primeiros termos. */
#include <stdio.h>
#include <locale.h>
#define tamanho 10

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int input, razao, termos, loop;
	
	printf("--------------------------------\n");
	printf("Insira um número, por favor: ");
	scanf("%d", &input);
	
	printf("----------------\n");
	
	printf("Digite a razão desejada: ");
	scanf("%d", &razao);
	
	printf("--------------------------------\n");
	printf("\n *** Os 10 primeiros termos são: *** \n\n");
	
	termos = input;
	for(loop = 1; loop <= tamanho; loop++){
		printf("%d, ", termos);
	
	termos = termos + razao;
	
	}
	
	printf("\n");
	return 0;
}

/*

Kill the lights, kill the actor, kill the actress
	I'm afraid that the spotlight dried you up
		Don't even think about it
			Don't even think about it, no
				We're begging you
					To kill the lights, kill the actor, kill the actress

*/
