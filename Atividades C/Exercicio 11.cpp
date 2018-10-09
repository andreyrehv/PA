#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	float CM, M, DM, MM;
	
	printf("Troca de medidas \n");
	puts ("Digite a medida em centimetros");
	scanf("%f",&CM);
	
	MM=CM*10;
	DM=CM/10;
	M=CM/100;
	
	printf("Sua medida em milimetros será: %.2f \n", MM);
	printf("Sua medida em decimetros será: %.2f \n", DM);
	printf("Sua medida em metros será: %.2f \n", M);
	
	system("PAUSE");
	return(0);
	
}
