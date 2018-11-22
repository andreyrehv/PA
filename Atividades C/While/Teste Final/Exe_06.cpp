#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int lanches, contador = 1;
	float VT, bigmac = 25.50, quart = 18, MecFrango = 15, CheMacMelt = 21, MacMax = 35; 
	
	do{
		puts("Bem vindo ao McDonalds");
		puts(" 1- BigMac \n 2- Quarteirão \n 3- MacChicken \n 4- Cheddar MacMelt \n 5- MacMax");
		puts("Por favor insira o numero do lanche desejado");
		
		scanf("%d", &lanches);
			
			
		switch(lanches){
		case 1: puts("Você selecionou o BigMac");
		VT += bigmac;
		break;
		case 2: puts("Você selecionou o Quarteirão");
		VT += quart;
		break;
		case 3: puts("Você selecionou o MacChicken");
		VT += MecFrango;
		break;
		case 4: puts("Você selecionou o Cheddar MacMelt");
		VT += CheMacMelt;
		break;
		case 5: puts("Você selecionou o MacMax");
		VT += MacMax;
		break;
		
		default:
			puts("Comando Inválido");
	}
		printf("O valor da sua compra deu %.2f \n", VT);
		puts("Deseja algo a mais? Se Sim digite 1, senão digite 2");
		scanf("%d",&contador);
	}while(contador == 1);
	
	system("PAUSE");
	return(0);
}
