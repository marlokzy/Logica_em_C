#include<stdio.h>
#include<locale.h>

float salario,nsala;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite seu sal�rio:\n");
	scanf("%f",&salario);
	
	nsala=salario+(salario*0.25);
	
	printf("\nO seu sal�rio com aumento ficou: R$ %.2f\n",nsala);
	
	return 0;
}
