#include<stdio.h>
#include<locale.h>

float n1, n2;
char op;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite o n�mero 1\n");
	scanf("%f",&n1);
	printf("\nDigite o operador: + - * /\n");
	scanf(" %c",&op);
	printf("\nDigite o n�mero 2\n");
	scanf("%f",&n2);
	
	switch(op){
				case '+':
			printf("\nO resultado da soma � %.2f\n",n1+n2);
		break;
				case '-':
			printf("\nO resultado da subtra��o � %.2f\n",n1-n2);
		break;
				case '*':
			printf("\nO resultado da multiplica��o � %.2f\n",n1*n2);
		break;
				case '/':
					if(n2!=0)
			printf("\nO resultado da divis�o � %.2f\n",n1/n2);
					else
						printf("\nN�o existe divis�o por 0\n");		
		break;
		
		default:
			printf("\nOperador inv�lido\n");
	}//switch
	
	return 0;
}
