#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float a, b, c, del, x1, x2, sqr;
	
	printf("Valores do x1 e x2 \n");
	puts("Digite o valor de A");
	scanf("%f", &a);
	puts("Digite o valor de B");
	scanf("%f", &b);
	puts("Digite o valor de C");
	scanf("%f", &c);
	
	del= pow(b, 2)-4*a*c;
	
	if (del>=0) {
	x1= -b + (sqrt(del)) / (2*a);
	x2= -b - (sqrt(del)) / (2*a);
	
	printf("Resultado de x1 e x2 é: %f %f \n", x1, x2);}
	
	else{
		printf("ERROR \n");
		
	}
	
	system("PAUSE");
	return(0);
	
}
