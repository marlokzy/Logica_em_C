#include<stdio.h>
#include<locale.h>

int id;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite sua idade:\n");
	scanf("%d",&id);
	
	if(id>=5 && id<=130){
		if(id>=5&&id<=7){
			printf("\nVoc� pertence a categoria infantil\n");
		}
		
			else if(id>=8 && id<=10){
				printf("\nVoc� pertence a categoria juvenil\n");
			}
		
				else if(id<=15 && id>=11){
					printf("\nVoc� pertence a categoria adolescente\n");
				}
		
					else if(id<=30 && id>=16){
						printf("\nVoc� pertence a categoria adulto\n");
					}
		
						else{
							printf("\nVoc� pertence a categoria s�nior\n");
						}
	}
	
	else{
		printf("\nIdade fora das categorias");
	}
	
	return 0;
}
