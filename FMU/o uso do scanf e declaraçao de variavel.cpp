#include<stdio.h>

int num;  //declara��o de vari�vel do tipo inteiro

int main(){
	//comando de entrada
	printf("Digite um numero\n");  //imprimir frase
	scanf("%d",&num);  //recebe o dado do usu�rio e guarda o dado na RAM
	
	//comando de sa�da
	printf("\nO numero que o usuario digitou e %d\n",num);
	
	return 0;
}
