#include<stdio.h>

int n;

int main(){
	
printf("Digite um numero\n");
scanf("%d",&n);

//condicional composta (if/else)
if(n>10){
	printf("\nO numero %d e maior do que 10\n",n);

}

else{
	printf("\nO numero %d e menor ou igual a 10\n",n);

}

return 0;
}
