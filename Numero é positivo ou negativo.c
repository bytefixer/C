/* 8. Dado um n�mero verificar se ele � positivo ou negativo. */
#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int insertNumber;
	
	printf("--------------------------------\n");
	printf("Coloque um numero � sua escolha: ");
	scanf("%d", &insertNumber);
	
	printf("--------------------------------\n");
	insertNumber > 0 ? printf("\n*** O n�mero inserido � positivo! ***") : (insertNumber == 0 ? printf("\n*** O valor inserido � neutro! ***") : printf("\n*** O n�mero inserido � negativo ***"));
	
	printf("\n");
	return 0;
}

/*

You are a brick tied to me that's dragging me down
	Strike a match and I'll burn you to the ground
		We are the jack-o-lanterns in July setting fire to the sky
		Here, here comes this rising tide
			So come on
				Put on your war paint	

*/

