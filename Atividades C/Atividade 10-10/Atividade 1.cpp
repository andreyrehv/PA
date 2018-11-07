#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	char nome[10];
	float B1, B2, B3, B4, media;
	
	printf("Media do aluno \n");
	printf("Nome do Aluno \n");
	gets(nome);
	puts("Digite a nota B1");
	scanf("%f", &B1);
	puts("Digite a nota B2");
	scanf("%f", &B2);
	puts("Digite a nota B3");
	scanf("%f", &B3);
	puts("Digite a nota B4");
	scanf("%f", &B4);
	
	media= (B1+B2+B3+B4)/4;
	
	if (media>= 5) {
		printf("A media do aluno %s é %.2f \n", nome, media);
		printf("APROVADO \n");
	}
	else{ 
		printf("A media do aluno %s é %.2f \n", nome, media);
		printf("REPROVADO \n");
	}
	system ("PAUSE");
	return(0);
}
