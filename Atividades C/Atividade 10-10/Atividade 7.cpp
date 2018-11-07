#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	 float alt,ph,pm,s;
	
	 
	puts("digite a sua altura");
	scanf("%f", &alt);
	puts ("Dgite 1 para homem e 2 para mulher");
	scanf("%f", &s );
	
	if (s == 1){
	
	 ph = ((72.7 * alt)-58);
	 printf("peso ideal do homem é %.2f\n",ph);
}
else{
	pm = ((62.1*alt)-44.7);
	printf("peso ideal da mulher é %.2f\n", pm);
}

system("PAUSE");
return(0);
	 	
}
