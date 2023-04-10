/* 8. Dado um número verificar se ele é positivo ou negativo. */
#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int insertNumber;
	
	printf("--------------------------------\n");
	printf("Coloque um numero à sua escolha: ");
	scanf("%d", &insertNumber);
	
	printf("--------------------------------\n");
	insertNumber > 0 ? printf("\n*** O número inserido é positivo! ***") : (insertNumber == 0 ? printf("\n*** O valor inserido é neutro! ***") : printf("\n*** O número inserido é negativo ***"));
	
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

