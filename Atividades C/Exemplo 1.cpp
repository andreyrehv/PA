#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float a,b,res;
	
	puts("Digite o primeiro valor: ");
	scanf("%f",&a);
	
	puts("Digite o segundo valor: ");
	scanf("%f",&b);
	
	res=a*b;
	printf("A soma dos valores é %.2f:", res);
	system("PAUSE");
	
	return(0);
	
}

