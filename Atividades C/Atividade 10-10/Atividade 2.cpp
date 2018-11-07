#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int usuarios;
	
	printf("Impar ou Par \n");
	printf("Quantos usuarios estão na sala? \n");
	scanf("%d", &usuarios);
	
	
	if ((usuarios%2)==0){
		printf("Esse numero é par");
	}
	else{
		printf("Esse numero é impar");
	}
	
	system("PAUSE");
	return(0);
}
