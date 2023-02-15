#include<stdio.h>

int num;  //declaração de variável do tipo inteiro

int main(){
	//comando de entrada
	printf("Digite um numero\n");  //imprimir frase
	scanf("%d",&num);  //recebe o dado do usuário e guarda o dado na RAM
	
	//comando de saída
	printf("\nO numero que o usuario digitou e %d\n",num);
	
	return 0;
}
