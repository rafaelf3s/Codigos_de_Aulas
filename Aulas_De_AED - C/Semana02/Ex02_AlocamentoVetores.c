#include <stdio.h>
#include <stdlib.h>



int* alocamento(int n){
  int *vetor;
  vetor = (int *) malloc(n*sizeof(int));
  return vetor;
}



void imprime(int n, int *vetor){
 int i;
  
  printf("Os números são:\n");
  for(i=0;i<n;i++){
  printf("%i\t",vetor[i]);
  
}}


void desalocar(int *vetor){

 free(vetor);

  return;
}



int main(){
 int n,i,*vetor;

  printf("N:");
  scanf("%i",&n);
  
  vetor=alocamento(n);

  for(i=0;i<n;i++){
    scanf("%i",&vetor[i]);
  }

  imprime(n,vetor);
  desalocar(vetor);

  return 0;

}