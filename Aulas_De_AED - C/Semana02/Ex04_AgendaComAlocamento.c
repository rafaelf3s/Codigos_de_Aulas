#include <stdio.h>
#include <stdlib.h>

typedef struct{
int dia;
int mes;
int ano;
}Data;


typedef struct{
char nome[30];
Data nasc;
char CPF[11];
} INFO;

void ler(INFO *pessoa){



 printf("nome:");
 fgets(pessoa->nome,sizeof(pessoa->nome),stdin);
 printf("Nascimento:");
 scanf("%i/%i/%i",&pessoa->nasc.dia,&pessoa->nasc.mes,&pessoa->nasc.ano);
 printf("CPF:");
 scanf("%s",&pessoa->CPF);
  return;
}


void imprimir(INFO pessoa2){
  printf("nome: %s",&pessoa2.nome);
  printf("data de nascimento: %i/%i/%i\n",pessoa2.nasc.dia,pessoa2.nasc.mes,pessoa2.nasc.ano);
  printf("CPF: %s",&pessoa2.CPF);

  return;
}


int main(){
INFO pessoa2;
INFO *pessoa;
pessoa=&pessoa2;
ler(pessoa);
imprimir(pessoa2);

  
}