UM CAO DE EXERCICIO DIFICL DO DIABO


#include <stdio.h>

int main() {

    long long L, N;
    
    scanf("%lld %lld", &L, & N);
    
    long long x = L - N + 1;
    
    long long resposta = x * x + (N - 1);
    
    printf("%lld\n", resposta);
    
    return 0;
}
