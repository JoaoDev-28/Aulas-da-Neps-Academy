#include <stdio.h>

 int soma(int a,int b){
    int s=a+b;
    return s;
 }

 int main(){
    int x=soma(2,3);
    printf("%d\n",x);
 }
//A int soma precisa de 2 ints pra funcionar.
//Na main, o x recebe o valor do 'return s;', ou seja, 5
