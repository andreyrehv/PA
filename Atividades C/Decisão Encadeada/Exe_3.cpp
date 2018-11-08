#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	
	setlocale(LC_ALL,"Portuguese");
	
	int lanches;
	
	puts("Bem vido ao McDonald's'");
	puts("Por favor insira o numero do lanche desejado");
	puts(" 1- BigMac \n 2- Quarteirão \n 3- MacChicken \n 4- Cheddar MacMelt \n 5- MacMax");
	scanf("%d", &lanches);
	
	switch(lanches){
		case 1: puts("Você selecionou o BigMac");
		break;
		case 2: puts("Você selecionou o Quarteirão");
		break;
		case 3: puts("Você selecionou o MacChicken");
		break;
		case 4: puts("Você selecionou o Cheddar MacMelt");
		break;
		case 5: puts("Você selecionou o MacMax");
		break;
		
		default:
			puts("Comando Inválido");
	}
	
	system("PAUSE");
	return(0);
}
