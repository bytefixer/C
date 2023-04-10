/* 15. Escreva um programa que imprima na tela o fatorial de um programa recebido. */
#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");

	unsigned long long int userNumber, calculandinho, result = 1;
	
	printf("-----------------------------\n");
	printf("Por favor, digite um número para calcular o seu fatorial: ");
	scanf("%llu", &userNumber);

	for(calculandinho = 1; calculandinho <= userNumber; calculandinho++){
		result = result * calculandinho;
	}
	
	printf("\n\t*** O fatorial de %llu! é: %llu ***", userNumber, result);
	
	printf("\n");
	return 0;
}

/*

I'm like a satellite
	Transmitting different eras
		I am the voice of the next generation
			Completely digital
				Create synthetic auras
				
*/
