#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	
	setlocale(LC_ALL,"Portuguese");
	
	float hr;
	
	
	puts("Digite a entrada na empresa");
	scanf("%f", &hr);
	
	if(hr>5 && hr<=12.59){
		puts("Horario da manhã");
	}if(hr>13 && hr<=20.59){
		puts("Horario da Tarde");
	}if(hr>21 && hr<=23.59 || hr >= 00 && hr<=4.59){
		puts("Horario da Noite");
	}

	
	system("PAUSE");
	return(0);

}
