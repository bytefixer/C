/* 19. Escreva um programa que imprima a seguinte matriz:
10 11 12 13 14
15 16 17 18 19
20 21 22 23 24
25 26 27 28 29
30 31 32 33 34
 */
 
#include <stdio.h> 
#define cinco_por_cinco 5

int main(void){
	
	int linha, coluna;
	int matriz[cinco_por_cinco][cinco_por_cinco] = {{10, 11, 12, 13, 14},
	{15, 16, 17, 18, 19},
	{20, 21, 22, 23, 24},
	{25, 26, 27, 28, 29},
	{30, 31, 32, 33, 34}};
	
	for(linha = 0; linha < 5; linha++){
		printf("\n");
		for(coluna = 0; coluna < 5; coluna++){
			printf("%d ", matriz[linha][coluna]);
		}
	}
	
	printf("\n");
	return 0;
}

/*

Burn the bridge down
	I never will cross that bridge again
		I cannot trust you easily
			Or think that I'm the only one
				I never let people in
					And I have you to remind me why
						So baby, burn the bridge down
							I never will cross that bridge again
								I'd rather drown

*/

