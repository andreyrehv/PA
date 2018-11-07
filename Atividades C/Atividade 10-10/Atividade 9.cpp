#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>


int main (){
	
	setlocale( LC_ALL, "Portuguese");
	
	char senha [5];
	
	int res;
	
	puts("digite a senha");
	gets(senha);
	
	res = strcmp(senha,"asdfg");
	
	if(res==0){
		
		printf("senha válida \n");
	}
	else {
		
		printf("senha invalida \n");
	}
	system("PAUSE");
	return(0);
	
}
