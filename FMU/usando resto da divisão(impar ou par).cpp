#include<stdio.h>
#include<locale.h>

int num;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite um n�mero:\n");
	scanf("%d",&num);
	
	if(num%2==0){
		printf("\nO n�mero %d � par\n",num);
				
	}
	
	else{
		printf("\nO n�mero %d � impar",num);
		
	}
	return 0;
}
