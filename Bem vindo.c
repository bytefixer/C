/* 2. Dado a entrada via teclado do nome de usu�rio (seu nome) escrever na tela �Bem-vindo nome de usu�rio� */
#include <stdio.h>
#include <locale.h>
#define tam_user 40

int main(void){
	setlocale(LC_ALL, "Portuguese");

	int loop; 
	char inputUser[tam_user];
	
	printf("--------------------------------");
	printf("\nDigite seu nome, por favor: ");

	while((inputUser[loop] = getchar()) != '\n'){
		loop++;
	}
	
	printf("--------------------------------\n\n");
	printf("\tO nome que voc� inseriu �: %s", inputUser);
	
	return 0;
}

/*
 
 In the end, as you fade into the night
	Who will tell the story of your life?
		And who will remember your last goodbye? 
		
*/
