#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
int dia;
int mes;
int ano;
}data;

typedef struct {
char nome[30];
int RA;
data dataNasc;
float notas[4];
int frequencia;
}aluno;


//tirar todos os alunos da lista antes que o programa comece.
void zerar(aluno AED[]){
 int i;
  
 for(i=0;i<=100;i++){
  AED[i].RA=-1;
}
  
}

//função1- cadastrar aluno.
void inserir(aluno AED[]){
  int i,n,o;

  do{

  for(i=0;i<=0 || i>100;){
  printf("insira a posição na lista(1-100):");
  scanf("%i",&i);
  if(i<1 || i>100)
  printf("posição na lista não existe!\n");}

  getchar();
  printf("insira o nome:");
  fgets(AED[i].nome,30,stdin);
  
  printf("insira o RA:");
  scanf("%i",&AED[i].RA);

  
  printf("insira a Data de Nascimento dd/mm/aaaa:");
scanf("%i/%i/%i",&AED[i].dataNasc.dia,&AED[i].dataNasc.mes,&AED[i].dataNasc.ano);
  
  for(n=1;n<4;n++){
  printf("insira a nota P%i:",n);
  scanf("%f",&AED[i].notas[n]);}

  printf("insira a frequencia:");
  scanf("%i",&AED[i].frequencia);


  printf("Aluno cadastrado com sucesso!\n\n");
    
  printf("deseja:\n");
  printf("1-cadastrar mais alunos\n0-voltar ao menu\n");
  scanf("%i",&o);
  printf("\n");
  }while(o>0);

  return;
}




//função2- visualizar lista total.
void listagem(aluno AED[]){
 int i,n,c;
    c=0;
    for(i=1;i<=100;i++){
        n=AED[i].RA;
        if(n>-1){
        c++;
        printf("Aluno[%i]-",i);
        puts(AED[i].nome);
        printf("RA:%i\n",AED[i].RA);
        printf("Nascimento: %i/%i/%i\n",AED[i].dataNasc.dia,AED[i].dataNasc.mes,AED[i].dataNasc.ano);
        printf("Notas: P1=%.2f | P2=%.2f | P3=%.2f \n",AED[i].notas[1],AED[i].notas[2],AED[i].notas[3]);
        printf("Frequência:%i%\n\n",AED[i].frequencia);  
        }}
        if(c==0){
        printf("lista vazia!\n\n");}

  return;
}



//função3- procurar aluno pelo RA.
int procurar(aluno AED[]){
int i=1,RAprocurar;

  
 printf("digite o RA:");
 scanf("%i",&RAprocurar);
  
 while(i<=101){
  
   if(RAprocurar==AED[i].RA){
   printf("Aluno[%i]-",i);
        puts(AED[i].nome);
        printf("RA:%i\n",AED[i].RA);
        printf("Nascimento: %i/%i/%i\n",AED[i].dataNasc.dia,AED[i].dataNasc.mes,AED[i].dataNasc.ano);
        printf("Notas: P1=%.2f | P2=%.2f | P3=%.2f \n",AED[i].notas[1],AED[i].notas[2],AED[i].notas[3]);
        printf("Frequência:%i%\n\n",AED[i].frequencia);  
   break;
   return RAprocurar;}
   else if(i==101){
   printf("RA do Aluno não encontrado!");
   return -1;}
   
   else
   i++;}
   
  
    return RAprocurar;}







//função4- Excluir aluno pelo RA.
void excluir(aluno AED[]){
int i,RAprocurar,c;

  RAprocurar=procurar(AED);
  if(RAprocurar==-1){
    return;
  }
  else if(RAprocurar>-1){
  printf("deseja realmente apagar?\n");
  printf("1-sim\n");
  printf("0-não/voltar para menu\n");
  scanf("%i",&c);
  if(c==0){
  return;
  }
  if(c==1){
 for(i=1;i<=101;i++){
  
   if(RAprocurar==AED[i].RA){
   AED[i].RA=-1;
   printf("aluno excluido com sucesso!\n\n");
   ;}
  }}}
  

return;}






int main() {
  int i;
  aluno AED[101];


  zerar(AED);

  do{
  //impressão do menu.
  printf("menu:\n1-Inserir aluno\n");
  printf("2-Visualizar lista\n");
  printf("3-Procurar aluno pelo RA\n");
  printf("4-excluir aluno pelo RA\n");
  printf("0-sair\n");


  //escolha do indice.
    
    scanf("%i",&i);
    printf("\n");
    if(i==1){
      inserir(AED);
      }

    else if(i==2){
      listagem(AED);
      }

    else if(i==3){
      procurar(AED);
      }

    else if(i==4){
      excluir(AED);
      }

    else if(i<0 || i>=5){
      printf("indice não existe!\n");}

      
  }while(i>0 || i<0);
  if(i==0){
    printf("tchau!");
  }
  
  
  return 0;
}