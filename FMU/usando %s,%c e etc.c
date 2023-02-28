#include<stdio.h>
#include<locale.h>

int id;
float peso;
char genero, nome[40], apelido[20];

int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\nDigite o seu nome:\n");
	scanf(" %[^\n]",&nome);
	printf("\nDigite o seu apelido:\n");
	scanf("%s",&apelido);
	printf("\nDigite seu genêro:\n");
	scanf(" %c",&genero);
	printf("\nDigite sua idade:\n");
	scanf("%d",&id);
	printf("\nDigite seu peso:\n");
	scanf("%f",&peso);
	
	printf("\nO seu nome é: %s\nO seu apelido é: %s\nO seu genêro: %c\nA sua idade é: %d\nO seu peso é: %.2f", nome, apelido, genero, id, peso);
	
	return 0;
}
