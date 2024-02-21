 #include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ListaLinearSE.h"

void imprimeMenu();
void leDadosAluno(TipoItem*);

int main(){
  ListaLinearSE listaAlunosAED;
  TipoItem item;
  int n, i, op = 0;

  inicializaLLSE(&listaAlunosAED);

  while(op != 5){
    imprimeMenu();
    printf("Opção: ");
    scanf("%i",&op);
    switch(op){
      case 1:
        leDadosAluno(&item);
        if(insereNoFinalLLSE(&listaAlunosAED,item)){
          printf("\nAluno inserido com sucesso.\n");
        }
        break;
      case 2:
        break;
      case 3:
        imprimeListaLLSE(&listaAlunosAED);
        break;
      case 4:
        break;
      case 5:
        break;
      default:
        printf("\nOpcao incorreta!\n");
        break;
    }
  }
  
  return 0;
}

void imprimeMenu(){
  printf("\nMenu:\n");
  printf("1 - Inserir aluno.\n");
  printf("2 - Retirar aluno.\n");
  printf("3 - Listar alunos.\n");
  printf("4 - Buscar pelo RA.\n");
  printf("5 - Sair.\n");
}

void leDadosAluno(TipoItem *item){
  int i;
  printf("\nRA: ");
  scanf("%i",&item->RA);
  getchar();
  printf("Nome: ");
  fgets(item->nome,sizeof(item->nome),stdin);
  item->nome[strlen(item->nome)-1] = '\0';
  for(i=0;i<3;i++){
    printf("Nota %i: ",i+1);
    scanf("%f",&item->notas[i]);
  }
  printf("Frequencia: ");
  scanf("%i",&item->freq);
}