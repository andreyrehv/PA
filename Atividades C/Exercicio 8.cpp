#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int AN,AA,IDA,IDA2050;
	
	AA=2018;
	puts("Digite o ano em que voc� nasceu");
	scanf("%d",&AN);
	
	IDA=AA-AN;
	IDA2050= 2050-AN;
	
	printf("Sua idade atual �: %d \n", IDA);
	printf("Sua idade em 2050 ser� de: %d \n", IDA2050);
	system("PAUSE");
	return(0);
}
