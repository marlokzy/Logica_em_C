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
	printf("\nDigite seu gen�ro:\n");
	scanf(" %c",&genero);
	printf("\nDigite sua idade:\n");
	scanf("%d",&id);
	printf("\nDigite seu peso:\n");
	scanf("%f",&peso);
	
	printf("\nO seu nome �: %s\nO seu apelido �: %s\nO seu gen�ro: %c\nA sua idade �: %d\nO seu peso �: %.2f", nome, apelido, genero, id, peso);
	
	return 0;
}
