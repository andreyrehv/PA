#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float n1,n2,n3,n4,md;
	
	puts("ETEC Zona Leste");
	puts("Digite a primeira nota ");
	scanf("%f", &n1);
	puts("Digite a segunda nota ");
	scanf("%f", &n2);
	puts("Digite a terceira nota ");
	scanf("%f", &n3);
	puts("Digite a quarta nota ");
	scanf("%f", &n4);
	
	md=(n1+n2+n3+n4)/4;
	
	if(md >= 9){
		printf("Aluno aprovado na Categoria A %.2f", md);
	} 
	else{ if (md >= 7 && md < 9){
		printf("Aluno aprovado na Categoria B %.2f", md);}
	
	else {
	 if (md >= 5 && md <7){
		printf("Aluno aprovado na Categoria C %.2f", md);}
	
	else { if (md >= 2,5 && md < 5){
		printf("Aluno reprovado na Categoria D %.2f", md);}
	
	else { if (md < 2,5){
		printf("Aluno reprovado na Categoria E %.2f", md);}
}
}
}
}
	system("PAUSE");
	return(0);
}
