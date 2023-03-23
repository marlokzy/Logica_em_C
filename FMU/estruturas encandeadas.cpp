#include<stdio.h>

float a,b,c;

int main(){
	
	printf("Digite o lado a\n");
	scanf("%f",&a);
	printf("Digite o lado b\n");
	scanf("%f",&b);
	printf("Digite o lado c\n");
	scanf("%f",&c);
	
	if(a>0 && b>0 && c>0){
		
		if(a==b && b==c){
		
			printf("Triangulo Equilatero\n");
	
			}
	
			else if(a==b || b==c || a==c){
		
				printf("\nTriangulo Isoceles\n");
		
				}
	
				else{
		
					printf("\nTriangulo Escaleno\n");
			
						}
	
							}//if
	else{
		
	printf("\nTente novamente\n");
	
			}
	
	return 0;
	}
