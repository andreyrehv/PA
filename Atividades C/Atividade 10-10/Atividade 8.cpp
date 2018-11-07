#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float peixe, peso, multa, ptotal;
	
	puts("Digite quantidade de peixes pescados");
	scanf ("%f", &peixe);
	puts("Digite os peso dos peixes");
	scanf("%f", &peso);
	ptotal = peixe *peso;
	
	
	if (ptotal > 50){
		
		multa = (ptotal - 50)*4;
		printf("foi pescado %.2f kg e sua multa será de %.2f \n",ptotal, multa);
		
		
	}
	else  {
		printf("foi pescado %.2f kg e não terá que pagar multa", ptotal);
		
	}
	 system ("PAUSE");
	 return(0);
}
