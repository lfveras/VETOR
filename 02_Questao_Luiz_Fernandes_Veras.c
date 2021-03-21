#include<stdio.h>

int main(){
	float validanota (float nota);
	int validaQtdeAlunos (int qtdAlunos);
	
	float nota[50];
	int i, qtdAlunos=0,total=0;
	
	
	printf("Informe a quantidade de alunos: ");
	scanf("%d", &qtdAlunos);
	
	total = validaQtdeAlunos(qtdAlunos);
	
	
	for(i=0;i<total;i++){
		printf("Informe a nota do aluno numero %d : ", i+1);
		scanf("%f",&nota[i]);
				
		nota[i] = validanota(nota[i]);		
	}	
	return 0;
}
	
float validanota (float nota){
	do{			
		if(nota < 0 || nota > 10){
			printf("Erro,nota invalida, informe uma nota de 0 ate 10: ");
			scanf("%f",&nota);							
		}			
	}while(nota < 0 || nota > 10);
return (nota);
}

int validaQtdeAlunos (int qtdAlunos){
	do{			
		if(qtdAlunos <= 0 || qtdAlunos > 50 ){
			printf("Erro,quantidade invalida, informe uma quantidade de alunos maior que 0 e de ate 50 alunos : ");
			scanf("%d",&qtdAlunos);							
		}			
	}while(qtdAlunos <= 0 || qtdAlunos > 50);
return (qtdAlunos);
}
	

