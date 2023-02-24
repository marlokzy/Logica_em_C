#include<stdio.h>

float n1,n2; //declaracao de 2 variaveis do tipo float

int main(){
//comandos de entrada
printf("Digite o numero 1\n");
scanf("%f",&n1);
printf("Digite o numero 2\n");
scanf("%f",&n2);

printf("\nO resultado da soma e %.2f\n",n1+n2);
printf("\nO resultado da subtracao e %.2f\n",n1-n2);
printf("\nO resultado da multiplicacao e %.2f\n",n1*n2);
printf("\nO resultado da divisao e %.2f\n",n1/n2);

return 0;
}
