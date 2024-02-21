#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000

typedef struct{
  int RA;
  char nome[30];
  float notas[3];
  int freq;
} TipoItem;

typedef struct{
  TipoItem itens[MAX];
  int ultimo;
} ListaLinearSE;

int listaVaziaLLSE(ListaLinearSE*);
int listaCheiaLLSE(ListaLinearSE*);
void inicializaLLSE(ListaLinearSE*);
void destroiListaLLSE(ListaLinearSE*);
void imprimeItemLLED(TipoItem);
void imprimeListaLLSE(ListaLinearSE*);
int insereNoFinalLLSE(ListaLinearSE*,TipoItem);
int insereNoInicioLLSE(ListaLinearSE*,TipoItem);
int removeDoFinalLLSE(ListaLinearSE*,TipoItem*);
int removeDoInicioLLSE(ListaLinearSE*,TipoItem*);
void AdicionaNaPosiçãoSE(ListaLinearSE*,TipoItem*);