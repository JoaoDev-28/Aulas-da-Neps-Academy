#include <stdio.h>
/*
int main (){
    int x = 5;
    int*p;//ponteiro
    p = &x;
    printf("%d\n",*p);//imprime o valor de x
    x = 7;//autualiza o x e o *p acompanha pq ele aponta p o x
    printf("%d\n",*p);//imprime o update, ou sej, o novo valor de x
    *p = 1;
    printf("%d\n",x);//imprime o novo valor de '*p = 1;' pq '*p = x;'
}*/


//Exemplo de ERRO E BUG:  printf("%d\n",p); faltou o '*' antes do 'p'



//EXEMPLO sizeof LOGO ABAIXO
//*
int main(){
    printf("int = %x bytes\n", sizeof(int)); //%x eh usado para imprimir a memoria ocupada
    printf("float = %x bytes\n", sizeof(float));
    printf("double = %x bytes\n", sizeof(double));
    printf("char = %x bytes\n", sizeof(char));
    p = &x;
   // printf("%x\n",p);//%x eh usado para imprimir a memoria ocupada
   // printf("%x",p+1);
   // printf("%x\n",p+2);
   // printf("%x\n",p+3);
}
//*/
