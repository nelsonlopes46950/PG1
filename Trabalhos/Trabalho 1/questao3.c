/**
* Autores : Nelson Lopes
* Nº de aluno : A46950
* Turma : LT11N
* 
* Estado : Em progresso
* 
* Programa : Sequência de três ou mais valores inteiros associados a notas obtidas pelos alunos.
* 	
* 
* 
**/	

#include <stdio.h>

int main (){
	
	int notas;
	double contador = 1;
	int soma = 1;
	int erro = 0;
	
	//Introdução do programa
	printf("Bem vindo ao programa Sequência númerica\n*---------------------------------------*\n");
	printf("*---------------------------------------*\n");
	
	//Verificação dos valores introduzidos para a sequência númerica e termina caso não sejam lidos pelo menos 3 valores.
	printf("Introduza uma sequência númerica de três ou mais notas (valores inteiros) e que termine com o valor -1 :\n");
	fflush(stdout);
	
	if (scanf("%d",&notas)!= 1 || notas > 20 || notas < -1){
		printf("Sequência com valores inválidos.\n");
		return 0;
	}else{			
		while (scanf(" %d",&notas) == 1){
			if (notas > 20 || notas < -1){
				printf("Sequência com valores inválidos.\n");
				break;
			}
			if (notas!=-1){
				printf("Notas : %d.\n", notas);
				contador++;
				soma = soma + notas;
			}else{
				if (contador >= 3){
					printf("Sequência terminada com sucesso.\n");
					printf("Contador : %lf.\n", contador);
					printf("Sumatório de notas : %d.\n", soma);
					printf("A média linear das notas é : %lf\n", soma/contador);
					break;
				}else{
					printf("Sequência inválida.\n");
					break;
				}
			}
		}
		return 0;

	}
		
}
