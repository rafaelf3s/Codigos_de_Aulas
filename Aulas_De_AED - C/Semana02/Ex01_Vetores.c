#include <stdio.h>
#include <stdlib.h>





void ler_Vetor(int *v, int n){
  int i;

  
  for(i=0;i<n;i++){
    scanf("%i",&v[i]);
  }}




int main(){
  int *vetor, n, i;

  printf("N: ");
  scanf("%i",&n);

  vetor = (int *) malloc(n*sizeof(int));

  ler_Vetor(vetor,n);

  
  printf("Os números são:\n");
  for(i=0;i<n;i++){
    printf("%i\t",vetor[i]);
  }

  free(vetor);

  return 0;
}
