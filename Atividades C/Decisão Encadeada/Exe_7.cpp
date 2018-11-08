#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int dia1, mes1, ano1, dia2, mes2, ano2;
	
	puts("Comparação de datas");
	puts("Digite o primeiro dia");
	scanf("%d", &dia1);
	puts("Digite o primeiro mes");
	scanf("%d", &mes1);
	puts("Digite o primeiro ano");
	scanf("%d", &ano1);
	puts("Digite o segundo dia");
	scanf("%d", &dia2);
	puts("Digite o segundo mes");
	scanf("%d", &mes2);
	puts("Digite o segundo ano");
	scanf("%d", &ano2);
	
	
	if(ano1<ano2){
		printf("%d/%d/%d e %d/%d/%d", dia1, mes1, ano1, dia2, mes2, ano2);		
	}else {if (ano2<ano1){
		printf("%d/%d/%d e %d/%d/%d", dia2,mes2,ano2, dia1,mes1,ano1);
	}else {if (mes1<mes2){
		printf("%d/%d/%d e %d/%d/%d",dia1, mes1, ano1, dia2, mes2, ano2);
	}else {if (mes2<mes1){
	  	printf("%d/%d/%d e %d/%d/%d", dia2,mes2,ano2, dia1,mes1,ano1);
	}else {if (dia1<dia2){
		printf("%d/%d/%d e %d/%d/%d", dia1, mes1, ano1, dia2, mes2, ano2);
	}else {if (dia2<dia1){
		printf("%d/%d/%d e %d/%d/%d", dia2,mes2,ano2, dia1, mes1, ano1);
	}else { puts("Data invalida");
	}
	}
	}
	}
	}
    }
	
	
	
	return(0);
	
	
	
	
	
	
}
