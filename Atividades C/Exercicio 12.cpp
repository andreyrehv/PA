#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float seg, h, min;
	
	printf("Recorde mundial \n");
	puts("Digite qual é o recorde mundial de atletismo");
	scanf("%f",&seg);
	
	h=seg/3600;
	min=seg/60;
	
	printf("Recorde mundial em minutos é %f ou em %f horas \n", h, min);
	system("PAUSE");
	return(0);
}
