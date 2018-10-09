#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#define PI 3.14

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float R, V;
	
	printf("Calcule a esfera \n");
	puts("Digite o raio da esfera");
	scanf("%f", &R);
	
	V=((4*PI)*(R*R*R))/3;
	
	printf("O volume da esfera é: %.2f \n", V);
	system("PAUSE");
	return(0);
}


