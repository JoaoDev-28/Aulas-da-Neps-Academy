#include <stdio.h>
#include <stdlib.h>
//Vetores eh uma forma de guardar varias variaveis de msm tipo. Ex: int x[6] -> O vetor x guarda 6 variáveis do tipo int
int main(){
    int v[5];
    for(int i = 0; i <5; i++){
        scanf("%d",&v[i]);
        printf("v[1]=%d \n v[2]=%d \n v[3]=%d \n v[4]=%d \n v[5]=%d \n", v[1], v[2], v[3], v[4], v[5]);
    }
}