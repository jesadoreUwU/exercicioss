#include <stdio.h>

  int main(){
  
    int largura, comprimento, tipo1, tipo2;
    
    scanf("%d%d", &largura,&comprimento);
    
    tipo1 = (largura*comprimento) + ((largura-1)*(comprimento-1));
    
    tipo2 = ((largura-1)*2 + (comprimento-1)*2);
    
    printf("%d\n%d\n", tipo1, tipo2);

return 0;
}
