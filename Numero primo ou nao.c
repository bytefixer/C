/* 16. Escreva um programa que dado um n�mero, ele diz se � um n�mero primo ou n�o. */
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");

	int insertNumb, contador;
	bool primo = true;
	
	printf("-------------------------------\n");
	printf("Por favor, insira um numero para saber se � primo ou n�o: ");
	scanf("%d", &insertNumb);

	if(insertNumb == 1 || insertNumb == 0){
		primo = false;
	}

	for(contador = 2; contador <= insertNumb / 2; contador++){
		if(insertNumb % contador == 1){
			primo = true;
		} else {
			primo = false;
		}
	}

	printf("-------------------------------\n");
	primo ? printf("\n\t*** O n�mero que voc� digitou foi %d e ele � um n�mero primo! ***", insertNumb) : printf("\n\t*** O n�mero que voc� digitou foi %d e ele n�o � um n�mero primo! ***", insertNumb);
	
	printf("\n");
	return 0;
}

/*

Waiting for the end to come
	Wishing I had strength to stand
		This is not what I had planned
			It's out of my control
				Flying at the speed of light
					Thoughts were spinning in my head
						So many things were left unsaid
							It's hard to let you go

*/
