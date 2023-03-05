#include<stdio.h>
#include<locale.h>

int num_t,vb,vn,vv;
float pb,pn,pv;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite o número total de eleitores:\n");
	scanf("%d",&num_t);
	printf("\nDigite o número totaL de votos brancos:\n");
	scanf("%d",&vb);
	printf("\nDigite o número totaL de votos nulos:\n");
	scanf("%d",&vn);
	printf("\nDigite o número totaL de votos válidos:\n");
	scanf("%d",&vv);
	
	pb=(vb*100)/num_t;
	pn=(vn*100)/num_t;
	pv=(vv*100)/num_t;
	
	printf("\nO número total de eleitores foi: %d\nA %% de votos brancos foi: %.2f\nA %% de votos nulos foi: %.2f\nA %% de votos válidos foi: %.2f",num_t,pb,pn,pv);
	
	return 0;
}
