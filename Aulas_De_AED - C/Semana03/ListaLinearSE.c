#include "ListaLinearSE.h"

int listaVaziaLLSE(ListaLinearSE *lista){
  return lista->ultimo==0;
}

int listaCheiaLLSE(ListaLinearSE *lista){
  return lista->ultimo==MAX;
}

void inicializaLLSE(ListaLinearSE *lista){
  lista->ultimo = 0;
}

void destroiListaLLSE(ListaLinearSE *lista){
  lista->ultimo = 0;
}

void imprimeItemLLED(TipoItem item){
  printf("%i %s %.1f %.1f %.1f %i\n",item.RA,item.nome,item.notas[0],item.notas[1],item.notas[2],item.freq);
}

void imprimeListaLLSE(ListaLinearSE *lista){
  int i;

  for(i=0;i<lista->ultimo;i++){
    imprimeItemLLED(lista->itens[i]);
  }
}


int insereNoFinalLLSE(ListaLinearSE *lista, TipoItem novoItem){
  int pos = lista->ultimo;

  if(!listaCheiaLLSE(lista)){
    lista->itens[pos] = novoItem;
    lista->ultimo++;
    return 1;
  }
  else
    return 0;
}

int insereNoInicioLLSE(ListaLinearSE *lista, TipoItem novoItem){
  int pos = lista->ultimo;
  int i;

  if(!listaCheiaLLSE(lista)){
    for(i=pos;i>0;i--)
      lista->itens[i] = lista->itens[i-1];
    lista->itens[0] = novoItem;
    lista->ultimo++;
    return 1;
  }
  else
    return 0;
}

int removeDoFinalLLSE(ListaLinearSE *lista,TipoItem *item){
  int pos = lista->ultimo;

  if(!listaVaziaLLSE(lista)){
    *item = lista->itens[pos-1];
    lista->ultimo--;
    return 1;
  }
  else
    return 0;
}

int removeDoInicioLLSE(ListaLinearSE *lista,TipoItem *item){
  int pos = lista->ultimo;
  int i;
  
  if(!listaVaziaLLSE(lista)){
    *item = lista->itens[0];
    for(i=1;i<pos;i++){
      lista->itens[i-1] = lista->itens[i];
    }
    lista->ultimo--;
    return 1;
  }
  else
    return 0;
}


 int AdicionaNaPosicaoSE(ListaLinearSE *lista,TipoItem novoItem, int indice){
   int pos = lista->ultimo;
  int i;

    if(!listaCheiaLLSE(lista)){
    for(i=pos;i>indice;i--)
      lista->itens[i] = lista->itens[i-1];
    lista->itens[indice] = novoItem;
    lista->ultimo++;
    return 1;
  }
  else
    return 0;
   
   

}