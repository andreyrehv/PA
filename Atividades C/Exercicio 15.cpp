#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define PI 3.14

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float R, H, A;
	
	printf("Calcule a Area do Cilindro \n");
	puts("Digite o raio do cilindro");
	scanf("%f", &R);
	puts("Digite a altura do cilindro");
	scanf("%f", &H);
	
	A= (2*PI*R)*(R+H);
	
	printf("A area do cilindro é: %.2f m2. \n", A);
	system("PAUSE");
	return(0);
}


