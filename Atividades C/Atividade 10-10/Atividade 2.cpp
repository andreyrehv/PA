#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int usuarios;
	
	printf("Impar ou Par \n");
	printf("Quantos usuarios est�o na sala? \n");
	scanf("%d", &usuarios);
	
	
	if ((usuarios%2)==0){
		printf("Esse numero � par");
	}
	else{
		printf("Esse numero � impar");
	}
	
	system("PAUSE");
	return(0);
}
