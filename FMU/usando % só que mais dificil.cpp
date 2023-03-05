#include<stdio.h>
#include<locale.h>

float c_fab,c_venda;

int main(){
	setlocale(LC_ALL,"portuguese");
	
printf("Digite o custo de fábrica do carro:\n");
scanf("%f",&c_fab);

c_venda=c_fab+(c_fab*0.45)+(c_fab*0.28);
printf("\nO preço de venda do carro é de R$ %.2f\n",c_venda);

return 0;
}
