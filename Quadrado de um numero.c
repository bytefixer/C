/* 13. Escreva um programa que dados 15 números, imprima seus quadrados. */
#include <stdio.h>
#include <locale.h>
#define qtd_num 15

int main(void){
	setlocale(LC_ALL, "Portuguese");

	int quad, loop, calculandinho;
	
	for(loop = 0; loop <= qtd_num; loop++){
		printf("--------------------------------\n");
		printf("\nInsira um numero para calcular o seu quadrado: ");
		scanf("%d", &quad);
	
		calculandinho = quad * quad;
		printf("\n--------------------------------\n");
		printf("\n\t*** O quadrado de %d é: %d. ***\n\n", quad, calculandinho);
	}
	
	printf("\n");
	return 0;
}

/*

As you're tongue-tied, did you believe it?
	False pride never existed
		Now I am cutting ties clean off
			And I can breathe at last
				So we all stand enthralled by this bland curtain call
					And the truth we pursue as we all, we all beg you to

*/
