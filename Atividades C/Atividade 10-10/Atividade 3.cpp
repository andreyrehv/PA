#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	float n1, n2, res;
	
	printf("Soma de dois numeros reais \n");
	printf("Digite o primeiro valor \n");
	scanf("%f", &n1);
	printf("Digite o segundo valor \n");
	scanf("%f", &n2);
	
	res=n1+n2;
	
	if(res>25) {
		printf("A soma dos numeros é maior que 25 \n");
	}
	else{
		printf("A soma dos numeros foi igual ou menor que 25 \n");
	}
	
	system("PAUSE");
	return(0);
}
