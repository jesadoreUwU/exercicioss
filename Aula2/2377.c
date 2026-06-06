#include <stdio.h>

int main() {
  
  int L, D, K, P;
  
scanf("%d%d%d%d", &L, &D, &K, &P);

int custototal = L * K + (L / D) * P;

printf("%d\n", custototal);

  return 0;
  
  
  }
