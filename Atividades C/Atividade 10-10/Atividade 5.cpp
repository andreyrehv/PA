#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int a, b;
	
	printf("Valores inteiros \n");
	puts("Digite o primeiro valor");
	scanf("%d", &a);
	puts("Digite o segundo valor");
	scanf("%d", &b);
	
	if (a > b){
		printf("O maior numero é %d e o menor numero %d é \n", a, b);
	}
	else if(a==0){
		printf("Não há diferença entre os numeros \n");
	}
	else {
		printf("O maior numero é %d e o menor numero %d é \n", b, a);
	}
	system("PAUSE");
	return(0);
}
