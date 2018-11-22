#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>


int main(){
	
	
	setlocale(LC_ALL, "Portuguese");
	
	
	float dp,s1,s2,s3;
	int i = 1;
	dp = 500;
	
	printf("O deposito é de: %f \n", dp);
	while(i<=3){
	
	dp = dp+((dp/100)*1);
i++;	
}
	printf("O saldo após o terceiro mês é %.4f \n", dp);
	
	
	system("PAUSE");
	return(0);

	
}
