#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float a,b;
	
	printf("Valores reais \n");
	printf("Digite o primeiro valor");
	scanf("%f", &a);
	printf("Digite o segundo valor");
	scanf("%f", &b);
	
	if(a > b){
		printf("O maior valor � %f e o menor valor � %f \n", a, b);
	}
	else if(a==b){
		printf("N�o h� diferen�as entre os valores \n");
	}
	else{
		printf("O maior valor � %f e o menor valor � %f \n", b, a);
	}
	system("PAUSE");
	return(0);
}
