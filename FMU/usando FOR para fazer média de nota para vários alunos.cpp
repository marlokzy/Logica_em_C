#include <stdio.h>
#include <locale.h>

int i;
float n1,n2,med;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	for(i=1;i<=3;i++){
		
	printf("\nEscreva a nota 1 do aluno %d\n",i);
	scanf("%f",&n1);
	
	printf("\nEscreva a nota 2 do aluno %d\n",i);
	scanf("%f",&n2);
	printf("-------------------------------------------");
	
	med=(n1+n2)/2;
	
	printf("\nA média do aluno %d é de: %2.f\n",i,med);
	printf("-------------------------------------------\n");
}
	return 0;
}

