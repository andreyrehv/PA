#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float x,n,res;
	
	puts("Digite o valor de X");
	scanf("%f",&x);
	puts("Digite o valor de N");
	scanf("%f",&n);
	
	res=pow((x*n), 2);
	
	printf("O resultado do calculo de (X*N)² é: %.2f", res);
	system("PAUSE");
	return(0);
	
}
