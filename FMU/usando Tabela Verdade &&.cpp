#include<stdio.h>
#include<locale.h>

int num;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite o n�mero e verifique se ele est� entre 0 e 100:\n");
	scanf("%d",&num);
	
	if(num>=5 && num<=100){
		printf("\nSim, o n�mero %d est� contido entre 5 e 100.",num);
		
	}
		
	else{
		printf("\nN�o, o n�mero %d n�o est� contido entre 5 e 100.",num);
		
	}	
	
	return 0;
}
