#include <stdio.h>
#include <stdlib.h>

int** alocamento(int m,int n){
  int **matriz,i;
  matriz = (int **) malloc(m*sizeof(int));
  for(i=0;i<=n;i++){
     matriz[i] = (int *) malloc(n*sizeof(int));
  }
return matriz;
}





void desalocar(int **matriz){

 free(matriz);

  return;
}




int main(){
  int m,j,n,i,**matriz;

  printf("M:");
  scanf("%i",&m);
  printf("N:");
  scanf("%i",&n);
  
  matriz=alocamento(m,n);

  for(j=0;j<n;j++){
  for(i=0;i<m;i++){
    scanf("%i",&matriz[i][j]);
  }}

  
  desalocar(matriz);

  return 0;
  
} 