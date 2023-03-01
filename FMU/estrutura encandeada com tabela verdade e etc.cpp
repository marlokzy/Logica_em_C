#include<stdio.h>
#include<locale.h>

float n1,n2,med;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite sua 1° nota:\n");
	scanf("%f",&n1);
	printf("\nDigite sua 2° nota:\n");
	scanf("%f",&n2);
	
	med=(n1+n2)/2;
	
	if((n1>=0 && n1<=10)&&(n2>=0 && n2<=10)){
		if(med>=7&&med<=10){
			printf("\nSua média foi %.2f, você foi aprovado!",med);
		}
		
		else if(med>=3&&med<7){
			printf("\nSua média foi %.2f, você está de recuperação!",med);
		}
		
		else{
			printf("\nSua média foi %.2f, você foi reprovado!",med);
		}
	}
	
	else{
		printf("\nNota inválida, tente novamente!");
	}
	
	return 0;
}
