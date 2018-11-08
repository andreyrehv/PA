#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float A, B, C;
	
	puts("Triângulos");
	puts("Digite o valor A");
	scanf("%f", &A);
	puts("Digite o valor B");
	scanf("%f", &B);
	puts("Digite o valor C");
	scanf("%f", &C);
	
	if(((B-C) < A < (B + C)) && ((A-C) < B < (A + C)) && ((A-B) < C < (A + B))){
		printf("É um triângulo verdadeiro \n");
	}else { printf("Não é um triângulo");
	}
	if(A==B && A==C){
		printf("Triângulo equilátero, que tem todos os lados iguais A= %f, B= %f, C= %f", A, B, C);
	}else {if(A != B && A != C){
		printf("Triângulo isósceles, que tem a base diferente A= %f, B= %f, C= %f", A, B, C);
	}else {if(A != B && A != C && B != C ){
		printf("Triângulo escaleno, que tem todos os lados diferente A= %f, B= %f, C= %f", A, B, C);
	}
	}
	}
	
	return(0);
}
