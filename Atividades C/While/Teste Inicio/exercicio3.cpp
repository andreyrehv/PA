#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main (){
	
	
	setlocale (LC_ALL, "Portuguese");
	
	int a;
	
	float n1,n2,n3,n4, md;
	 puts ("digite 1 para calcular nota");
	 scanf ("%d",&a);
	 
	 while(a<=7){
	 	
	
	puts ("Digite sua 1� nota");
	scanf("%f",&n1);
	puts ("Digite sua 2� nota");
	scanf("%f",&n2);
	puts ("Digite sua 3� nota");
	scanf("%f",&n3);
	puts ("Digite sua 4� nota");
	
	scanf("%f",&n4);
	
	md = (n1+n2+n3+n4)/4;
	
	if (md>=9 || md>=7 && md<9 || md>= 5 && md>7){
		
		if(md>=9){
			
			printf("sua nota � %f, voc� tirou A",md);
		}
		
		else {
			if (md>=7 && md<9){
				
				printf ("sua nota � %f, voc� tirou B", md);
			}
			else {
				printf("sua nota � %f, voc� tirou C",md);
			}
			
		}
	}
	else {
		if ( md>=2.5 && md<5 ){
			printf("sua nota � %f, voc� tirou D",md);
		}
		else {
			printf("sua nota � %f, voc� tirou E",md);
		}
	
} a++;

	}
	return(0);

}
