#include<stdio.h>
#include<locale.h>

int num;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite um número:\n");
	scanf("%d",&num);
	
	if(num>=0){
		printf("\nO %d é um número positivo",num);
		
	}
	
	else{
		printf("\nO número %d é um número negativo",num);
	}
	
	
	return 0;
}
