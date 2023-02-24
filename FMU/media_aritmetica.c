#include<stdio.h>

float n1,n2,med;  //declaracao de 3 variaveis do tipo float

int main(){
//comandos de entrada
printf("Digite a nota 1\n");
scanf("%f",&n1);
printf("Digite a nota 2\n");
scanf("%f",&n2);

//operacao aritmetica
med=(n1+n2)/2;  //calculo da media aritmetica

//comando de saida
printf("\nA media e %.2f\n",med);

return 0;
}
