#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000

typedef struct{
  char nome[30];
  int prioridade;
} TipoItem;

struct noh{
  TipoItem item;
  struct noh *prox;
};

typedef struct noh TipoNoh;

typedef struct{
  int n;
  TipoNoh *inicio;
  TipoNoh *fim;
} TipoFila;

void inicializaFila(TipoFila*);
void destroiFila(TipoFila*);
int filaVazia(TipoFila*);
int insereNaFila(TipoFila*,TipoItem);
int retiraDaFila(TipoFila*,TipoItem*);
int imprimeFila(TipoFila*);
void imprimeItem(TipoItem);