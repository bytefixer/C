/* 10. Dado a formula Y = X + 5 escrever o valor de Y quando dado uma entrada de X. */
#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int x, y;
	
	do{
		printf("--------------------------------\n");
		printf("Coloque aqui o valor que é o seu X: ");
		scanf("%d", &x);
		
		y = (x >= 0) ? x + 5 : x;
		
		printf("----------------\n");
		
		printf("\n\tO valor de Y somado X + 5 é de: %d", y);
		
	} while(x <= -1);
	
	printf("\n");
	return 0;
}

/*

Dragged ya down below
	Down to the devil's show
		To be his guest forever (peace of mind is less than never)
			Hate to twist your mind
				But God ain't on your side
	
*/
