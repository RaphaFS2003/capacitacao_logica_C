/*
    DESAFIO:

    Crie um código que solicite um número N ao usuário
    e calcule a some dos N primeiros números naturais.

    exemplo: se o usuário digitar 5, o programa deve calcular 1 + 2 + 3 + 4 + 5 = 15
    Não utilize recursão, apenas loops.
*/
#include <stdio.h>

int main(){
    int N,i=1,soma;

    printf("Digite um numero inteiro: ");
    scanf("%d", &N);

    if(N == 0){
        printf("%d", N);
        return 0;
    }

    printf("%d",i);
    soma = i;

    for(i++; i<=N; i++){
        printf(" + %d",i);
        soma += i;
    }

    printf(" = %d", soma);

    return 0;
}