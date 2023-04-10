/* 17. Escreva um programa que imprime todos os números primos positivos a partir do zero até um número digitado. */
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");

	int input, loop, valor;
	bool primo = true;

	do{
		printf("-------------------------------\n");
		printf("\nUsuário, por favor, insira um número para identificar se é primo ou não: ");
		scanf("%d", &input);
		
	} while(input <= 1);

	for(valor = 2; valor <= input; valor++) {
	    primo = true;
	    for(loop = 2; loop < valor; loop++) {
	        if(valor % loop == 0) {
	            primo = false;
	        }
	    }

	    if(primo){
	    	
	    	printf("\n------------");
	    	printf("\n*** O número %d é considerado primo. ***", valor);
		}
	}
	
	printf("\n");
	return 0;
}

/*

They say the bad guys wear black
	We're tagged and can't turn back

*/
