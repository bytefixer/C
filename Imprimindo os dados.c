/* 20. Escreva um programa que imprime os seguintes dados na tela
1-1 1-2 1-3 1-4 1-5
2-1 2-2 2-3 2-4 2-5
3-1 3-2 3-3 3-4 3-5
4-1 4-2 4-3 4-4 4-5
5-1 5-2 5-3 5-4 5-5
 */
 
#include <stdio.h>
#define vetor_max 5

int main(void){
	
	int loop, valor;
	int firstVector[vetor_max] = {1, 2, 3, 4, 5};
	int secondVector[vetor_max] = {1, 2, 3, 4, 5};
	
	printf("\n");
	
	for(loop = 0; loop < vetor_max; loop++){
		for(valor = 0; valor < vetor_max; valor++){
			printf("%d-", firstVector[loop]);
			printf("%d ", secondVector[valor]);
		}
		
		printf("\n");
		return 0;
	}
}

/*

Now I know
	There’s no one I can trust
		I used to think there was
			Tell me that I’m cut throat
				I think you got your eyes closed
					Feel the fear
						And swallow back the tears
							Let weakness disappear
								There’s nobody but me here
									The killer in the mirror

*/
