/* 7. Dado um n�mero verificar se ele � maior que 10. */
#include <stdio.h>
#include <locale.h>
#define quantidade 10

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int inputNumber;

	do{
		printf("--------------------------------\n");
		printf("Usu�rio, por favor, insira um n�mero: ");
		scanf("%d", &inputNumber);
		
		if(inputNumber == quantidade){
			printf("--------------------------------\n");
			printf("\n*** Os n�meros s�o iguais. ***");
		}
		else if(inputNumber > quantidade){
			printf("--------------------------------\n");
			printf("\n*** O n�mero inserido � maior que 10 ***");
		}
		else if(inputNumber < quantidade){
			printf("--------------------------------\n");
			printf("\n*** O n�mero digitado � menor que 10 ***");
		}
		
		break;
		
	} while(inputNumber != -1);
	
	printf("\n");
	return 0;
}

/* My heart's an artifice, a decoy soul
	I lift you up and then I let you go */
