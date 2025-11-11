#include <stdio.h>
#include <stdlib.h>

// Altera o tipo de retorno para long long int
long long int fatorial(int n){
    if(n == 0){
        return 1;
    }
    return n * fatorial(n - 1);
}

int main(){
    int n;
    // Altera o tipo da variável para armazenar o resultado
    long long int fat;
    scanf("%d",&n);
    fat = fatorial(n);
    // Usa %lld (long long decimal) para imprimir o resultado
    printf("O fatorial de %d e %lld\n", n, fat);

    return 0;
}



