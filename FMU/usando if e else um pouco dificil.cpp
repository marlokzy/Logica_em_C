#include<stdio.h>
#include<locale.h>

float qa,q_max,q_min,qm;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite a quantidade atual em estoque:\n");
	scanf("%f",&qa);
	printf("\nDigite a quantidade m�xima em estoque:\n");
	scanf("%f",&q_max);
	printf("\nDigite a quantidade m�nina em estoque:\n");
	scanf("%f",&q_min);
	
	qm=(q_max+q_min)/2;
	
	if(qa>=qm){
		printf("\nN�o efetuar compra\n");
		
	}
	
	else{
		printf("\nEfetuar compra");
	
	}
	
	return 0;
}
