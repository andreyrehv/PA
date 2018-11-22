#include<stdio.h>
#include<stdlib.h>

int main(){
	int c;
	float bst, alt, art;
	puts ("Digite 1 para calculo ");
	scanf("%d",&c);
	
	while(c<=10){
	
	puts("digite a base do triangulo");
	scanf("%f",&bst);
	puts("digite a altura do triangulo");
	scanf("%f",&alt);
		
	art = (bst*alt)/2;
	
	printf("A area do triangulo e %.2f", art);
	c++;
}
	system("PAUSE");
	return (0);
}
