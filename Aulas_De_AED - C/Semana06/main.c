 TipoPilha pilha1, pilha2;
  TipoItem item;
  int i,n1,n2,r;

  pilha1 = inicializaPilha(pilha1);
  pilha2 = inicializaPilha(pilha2);
  
  for(i=0;i<strlen(expressao);i++){
    item.caracter = expressao[i];
    pilha1 = empilha(pilha1,item);
  }

/*
"123*+"

Pilha1  Pilha2
+
*
3
2
1

Pilha1 Pilha2
*      +
3
2
1

Pilha1 Pilha2
3      *
2      +
1

Pilha1 Pilha2
1      + 

r = 6

Pilha1 Pilha2
6      +
1

Pilha1 Pilha2

r = 7

*/
  
  while(!pilhaVazia(pilha1)){
    pilha1 = desempilha(pilha1,&item);
    if(item.caracter=='+'||item.caracter=='-'||item.caracter=='*'||item.caracter=='/'){
      pilha2 = empilha(pilha2,item);
    }
    else{
      n1 = item.caracter;
      pilha1 = desempilha(pilha1,&item);
      n2 = item.caracter;
      pilha2 = desempilha(pilha2,&item);
      switch(item.caracter){
        case '+':
          r = n1+n2;
          break;
        case '-':
          r = n1-n2;
          break;
        case '*':
          r = n1*n2;
          break;
        case '/':
          r = n1/n2;
          break;
      }
      item.caracter = r + '0';
      if(pilhaVazia(pilha1)){
        break;
      }
      else{
        pilha1 = empilha(pilha1,item);
      }
    }
    printf("\nPilha 1:\n");
    imprimePilha(pilha1);
    printf("\nPilha 2:\n");
    imprimePilha(pilha2);
  }
  
  pilha1 = destroiPilha(pilha1);
  pilha2 = destroiPilha(pilha2);
  return r;