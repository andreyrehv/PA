#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	
	setlocale(LC_ALL,"Portuguese");
	
	int lanches;
	
	puts("Bem vido ao McDonald's'");
	puts("Por favor insira o numero do lanche desejado");
	puts(" 1- BigMac \n 2- Quarteir�o \n 3- MacChicken \n 4- Cheddar MacMelt \n 5- MacMax");
	scanf("%d", &lanches);
	
	switch(lanches){
		case 1: puts("Voc� selecionou o BigMac");
		break;
		case 2: puts("Voc� selecionou o Quarteir�o");
		break;
		case 3: puts("Voc� selecionou o MacChicken");
		break;
		case 4: puts("Voc� selecionou o Cheddar MacMelt");
		break;
		case 5: puts("Voc� selecionou o MacMax");
		break;
		
		default:
			puts("Comando Inv�lido");
	}
	
	system("PAUSE");
	return(0);
}
