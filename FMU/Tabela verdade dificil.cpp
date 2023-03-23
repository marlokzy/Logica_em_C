#include<stdio.h>
#include<locale.h>

int id,tt;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite sua idade:\n");
	scanf("%d",&id);
	printf("\nDigite seu tempo de trabalho na empresa:\n");
	scanf("%d",&tt);
	
	if((id>=65)||(tt>=30)||(id>=60 && tt>=25)){
		printf("\nSua idade: %d\nSeu tempo de trabalho: %d\n------------------------------\nRequer aposentadoria!",id,tt);
		
	}
	
	else{
		printf("\nSua idade: %d\nSeu tempo de trabalho: %d\n------------------------------\nNão requer aposentadoria!",id,tt);
		
	}
	
	return 0;
}
