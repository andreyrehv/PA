#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>


int main (){
	
	setlocale( LC_ALL, "Portuguese");
	
	char senha [5];
	
	int res,s;
	
	puts("Digite 1 para digitar a senha ");
	scanf("%d",&s);
	while(s<=3){
	
	puts("digite a senha");
	gets(senha);
	
	res = strcmp(senha,"asdfg");
	
	if(res==0){
		
		printf("senha válida \n");
	}
	else {
		
		printf("senha invalida \n");
	}
	s++;
}
	system("PAUSE");
	return(0);
	
}
