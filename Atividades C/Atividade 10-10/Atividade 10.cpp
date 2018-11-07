#include<stdio.h>
#include<stdlib.h>

int main (){
	
	int atual ,nasc,idade, maior;
	
	puts ("Digite o ano atual");
	scanf("%d", &atual);
	puts ("Digite seu ano de nascimento");
	scanf("%d", &nasc);
	idade = atual - nasc;
	
	if (idade >= 18){
		
		scanf("sua e %d e voce e maior de idade", idade);
	}
	else {
		
		scanf ("sua idade e %f e voce e menor de idade", idade);
		
	}
	system ("PAUSE");
	return(0);
	
}
