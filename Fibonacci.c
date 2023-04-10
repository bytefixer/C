/* 18. Escreva um programa que imprima o seguinte vetor:
1   1   2   3   5   8   13   21   34   55   86   144   233   300   533 
*/

#include <stdio.h>
#define fibonacci 10
#define pseudo_fibonacci 5

int main(void){
	
	int count, loop;
	
	int sequencia_fib[fibonacci] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};
	int sequencia[pseudo_fibonacci] = {86, 144, 233, 300, 533};

	printf("--------------------------------\n\n");
	for(count = 0; count < fibonacci; count++){
		printf("%d ", sequencia_fib[count]);
	}
	for(loop = 0; loop < pseudo_fibonacci; loop++){
		printf("%d ", sequencia[loop]);
	}
		
	printf("\n");
	return 0;
}

/*

I’d sacrifice my life to find you  
	Angel of the flame  
		Kingslayer  
			Come and collect us from the night

*/
