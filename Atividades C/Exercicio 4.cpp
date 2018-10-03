#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");
	
	float N1,N2,N3,N4, MD;
	char Nome[10];
	
	puts("Digite o nome do Aluno");
	scanf("%s",&Nome);
	puts("Digite a primeira nota");
	scanf("%f",&N1);
	puts("Digite a segunda nota");
	scanf("%f",&N2);
	puts("Digite a terceira nota");
	scanf("%f", &N3);
	puts("Digite a quarta nota");
	scanf("%f", &N4);
	
	MD= (N1+N2+N3+N4)/4;
	
	printf("A média aritmética do aluno %s é: %.2f",Nome,MD);
	system("PAUSE");
	return(0);
	
	
}
