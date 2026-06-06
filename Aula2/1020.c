#include <stdio.h>

  int main(){
  
  int entrada, ano, mes, dia, aux;
  
  scanf("%d", &entrada);
  
  ano = entrada/365;
  
  aux = entrada%365;
  
  dia = aux%30;
  
  mes = aux/30;
  
  printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);
  
  return 0;
  
  }
