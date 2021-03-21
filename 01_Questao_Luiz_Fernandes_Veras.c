#include<stdio.h>

int main(){
	float validanota (float nota);
	
	float nota[30];
	int i;
	
	for(i=0;i<30;i++){
		printf("Informe a nota do aluno numero %d : ", i+1);
		scanf("%f",&nota[i]);
		
		nota[i] = validanota(nota[i]);		
	}	
	return 0;
}
	
	float validanota (float nota){
		do{			
			if(nota > 10){
				printf("Erro,nota invalida, informe uma nota <= 10: ");
				scanf("%f",&nota);				
			}			
		}while(nota>10);
	return (nota);
	}
	

