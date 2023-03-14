#include<stdio.h>
#include<locale.h>

int qdm;
float preco;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite a quantidade de maçãs que você deseja comprar:\n");
	scanf("%d",&qdm);
	
	if(qdm<12){
		preco=1.30*qdm;
		
	}
	
	else{
		preco=1.00*qdm;
		
	}
	
	printf("\nO valor da compra ficou R$ %.2f\n",preco);
	
	return 0;
}
