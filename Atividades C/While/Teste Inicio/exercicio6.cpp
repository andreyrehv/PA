#include<stdio.h>
#include<stdlib.h>
#include<locale.h>



int main (){
	setlocale(LC_ALL, "Portuguese");
	int p;
	float alt,kg,imc;
	
	
	puts("digite n�1 para calcular ou n�2 ora n�o calcular ");
	scanf("%d",&p);
	
	
	while (p<=8){
		puts("digite a sua altura");
	scanf("%f", &alt);
	puts("digite seu peso");
	scanf("%f", &kg);
	
	imc = kg/(alt*alt);
	
	if (imc<=18 || imc>=18 && imc<25){
		
		if (imc<18){
			
			printf("seu imc � %.2f, magreza",imc);
			}
			
			else {
				printf("seu imc � %.2f, saud�vel", imc);
				}
				
	}
	
	else{
		
		if(imc>25 ){
			printf("seu imc � %.2f, sobrepeso", imc);
			}
			
			else { printf ("seu imc � %.2f, obeso", imc);
		}
			
	}
	p++;
}
	
	
	return(0);
}
