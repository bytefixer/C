/* 11. Dado a formula media = n1+n2+n3/3 escrever o valor do resultado ao usuário quando ele digitar o valor de n1, n2 e n3. */
#include <stdio.h>
#include <locale.h>
#define qtd_input 4
#define qtd_provas 3

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int notas[qtd_input], loop;
    int somatoria, media;

	printf("--------------------------------\n");
    for(loop = 1; loop < qtd_input; loop++){
        printf("Professor, por favor, digite a nota do seu aluno, obtida na prova %d: ", loop);
        scanf("%d", &notas[loop]);
        printf("--------------------------------\n");
		somatoria = somatoria + notas[loop];
    }

    media = somatoria / qtd_provas;
    
    printf("\nA média do estudante é: %d\n", media);
    
	media >= 6 ? printf("\n\t*** Parabéns! Você foi aprovado. ***") : printf("\n\t*** Infelizmente você está reprovado. ***");

	printf("\n");
	return 0;
}

/*

I'll stop the whole world
	I'll stop the whole world from turning into a monster
		Eating us alive
			Don't you ever wonder how we survive?
				Well, now that you're gone, the world is our

*/
