#include<stdio.h>
#include<locale.h>

int num;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite o número e verifique se ele está entre 0 e 100:\n");
	scanf("%d",&num);
	
	if(num>=5 && num<=100){
		printf("\nSim, o número %d está contido entre 5 e 100.",num);
		
	}
		
	else{
		printf("\nNão, o número %d não está contido entre 5 e 100.",num);
		
	}	
	
	return 0;
}
