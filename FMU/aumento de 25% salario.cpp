#include<stdio.h>
#include<locale.h>

float salario,nsala;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite seu salário:\n");
	scanf("%f",&salario);
	
	nsala=salario+(salario*0.25);
	
	printf("\nO seu salário com aumento ficou: R$ %.2f\n",nsala);
	
	return 0;
}
