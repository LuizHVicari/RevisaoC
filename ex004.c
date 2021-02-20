#include <stdio.h>

int main (void) {
     //Inicia a variável para definir o tamanho da matriz
    int num;

    //Valida o tamanho da matriz para ser real maior que 0 
    do {
        //Recebe o tamanho da matriz
        printf("Informe um numero inteiro: ");
        scanf("%d", &num);
    } while (num <= 0);

    //Inicia i que vai aumentar para o próximo número ímpar e cont que vai contar quantas vezes isso acontece
    int i = 1, cont = 0;

    //Inicia o laço para calcular a raíz
    while(num > 0) {
        //Subtrai i de num, aumenta i para o próximo número ímpar e aumenta o cont
        num -= i;
        i += 2;
        cont++;
    }

    //If ternário para printar o resultado
    num == 0 ? printf("Raiz quadrada exata = %d", cont) : printf("Raiz quadrada aproximada = %d", cont);

    return 0;
}