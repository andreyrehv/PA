#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float P, H, IMC;
	
	puts("Digite o seu peso");
	scanf("%f", &P);
	
	puts("Digite a sua altura");
	scanf("%f", &H);
	
	IMC= P/(H*H);
	
	if(IMC < 18){
		puts("Muito magra, procure um médico");
	}if(IMC >= 18 && IMC <= 24.9){
		puts("Perfeito, Top");
	}if(IMC >= 25 && IMC <= 29.9){
		puts("Cuidado, fique alerta com o peso");
	}if (IMC >= 30){
		puts("Muito acima do peso, procure um médico");
	}
	
	system("Pause");
	return(0);
}
