#include<stdio.h>
#include<locale.h>

float n1, n2;
char op;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite o número 1\n");
	scanf("%f",&n1);
	printf("\nDigite o operador: + - * /\n");
	scanf(" %c",&op);
	printf("\nDigite o número 2\n");
	scanf("%f",&n2);
	
	switch(op){
				case '+':
			printf("\nO resultado da soma é %.2f\n",n1+n2);
		break;
				case '-':
			printf("\nO resultado da subtração é %.2f\n",n1-n2);
		break;
				case '*':
			printf("\nO resultado da multiplicação é %.2f\n",n1*n2);
		break;
				case '/':
					if(n2!=0)
			printf("\nO resultado da divisão é %.2f\n",n1/n2);
					else
						printf("\nNão existe divisão por 0\n");		
		break;
		
		default:
			printf("\nOperador inválido\n");
	}//switch
	
	return 0;
}
