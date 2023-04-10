/* 7. Dado um número verificar se ele é maior que 10. */
#include <stdio.h>
#include <locale.h>
#define quantidade 10

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int inputNumber;

	do{
		printf("--------------------------------\n");
		printf("Usuário, por favor, insira um número: ");
		scanf("%d", &inputNumber);
		
		if(inputNumber == quantidade){
			printf("--------------------------------\n");
			printf("\n*** Os números são iguais. ***");
		}
		else if(inputNumber > quantidade){
			printf("--------------------------------\n");
			printf("\n*** O número inserido é maior que 10 ***");
		}
		else if(inputNumber < quantidade){
			printf("--------------------------------\n");
			printf("\n*** O número digitado é menor que 10 ***");
		}
		
		break;
		
	} while(inputNumber != -1);
	
	printf("\n");
	return 0;
}

/* My heart's an artifice, a decoy soul
	I lift you up and then I let you go */
