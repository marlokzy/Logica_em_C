#include<stdio.h>

int cod;
float valor;

int main(){
//comandos de entrada
printf("Digite o tipo de investimento: 1-Poupanca ou 2-Fundo de renda fixa\n");
scanf("%d",&cod);
if(cod==1 || cod==2){
	printf("Qual o valor do investimento?\n");
	scanf("%f",&valor);
		if(valor>0){
			if(cod==1){
				printf("\nPoupanca com valor corrigido R$ %.2f\n",valor*1.03);
			}
			else{
				printf("\nRenda fixa com valor corrigido R$ %.2f\n",valor*1.04);
		}
	}//if2
	else
		printf("\nValor invalido\n");
}//if1
else
	printf("\nCodigo invalido\n");

return 0;
}
