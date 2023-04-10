/* 1. Escreva um programa para escrever quando inicializado “Olá aluno hoje é sexta-feira”. */
#include <stdio.h>
#include <locale.h>
#define elementoX 15

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int loop, count;
	char student[elementoX][elementoX] = {{"Olá aluno, hoje"}, {" é sexta feira!"}};
	
	printf("\n");
	
	for(loop = 0; loop < elementoX; loop++){
		for(count = 0; count < elementoX; count++){
			printf("%c", student[loop][count]);
		}
	}
	
	printf("\n");
	return 0;
}

/*

System failure
	Life is encrypted, you are modified
		Like a virus in a lullaby

*/
