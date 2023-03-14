#include<stdio.h>
#include<locale.h>

int num;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite um número:\n");
	scanf("%d",&num);
	
	if(num%2==0){
		printf("\nO número %d é par\n",num);
				
	}
	
	else{
		printf("\nO número %d é impar",num);
		
	}
	return 0;
}
