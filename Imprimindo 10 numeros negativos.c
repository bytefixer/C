/* 6. Escreva um programa que imprima os 10 primeiros números negativos. */
#include <stdio.h>
#include <locale.h>
#define vetor 10

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int loop;
	char sequencia[vetor] = {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10};
	
	printf("*** Imprimindo os 10 primeiros números negativos: ***\n\n");
	
	for(loop = 0; loop < vetor; loop++){
		printf("* %d *\n", sequencia[loop]);
		
	}
	
	printf("\n");
	return 0;
}

/*

Don't wanna hear your sad songs
	I don't wanna feel your pain
		When you swear it's all my fault
			'Cause you know we're not the same

*/

