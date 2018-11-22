#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	float ALT, B, area;
	int tri = 1, contador = 1;
	
	do{
		puts("Calcule a area do triangulo");
		printf("Digite a altura do triangulo %d \n", tri);
		scanf("%f", &ALT);
		printf("Digite a base do triangulo %d. \n", tri);
		scanf("%f", &B);
		
		area = (B*ALT)/2;
		
		printf("A area do trangulo %d é %.2f m2 \n", tri, area);
		
		tri++;
		contador++;
		
	} while(contador<=8);
	
	system("PAUSE");
	return(0);
}
