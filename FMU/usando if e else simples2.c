#include<stdio.h>
#include<locale.h>

int num;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite um n�mero:\n");
	scanf("%d",&num);
	
	if(num>=0){
		printf("\nO %d � um n�mero positivo",num);
		
	}
	
	else{
		printf("\nO n�mero %d � um n�mero negativo",num);
	}
	
	
	return 0;
}
