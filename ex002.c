#include <stdio.h>

int main (void) {
    //Declara as variáveis (num é o número informado pelo usuário, m2 e m3 são as quantidades de múltiplos de 2 e 3 respectivamente e tot é a quantidade de algarismos no número)
    int num, m2 = 0, m3 = 0, tot = 0;

    //Recebe a entrada 
    printf("Informe um numero inteiro qualquer: ");
    scanf("%d", &num);

    //Inicia um laço enquanto num for maior que 0
    while(num > 0) {
        //Verifica se o último digito (correspodente à unidade) em num é múltiplo de 2 ou 3
        if((num % 10) % 2 == 0)
            m2++;
        if((num % 10) % 3 == 0)
            m3++;
        
        //Divide num por 10 e aumenta um na quantidade de algarismos
        num = num / 10;
        tot++;
    }

    printf("O número tem %d algarismos\nQuantidade de algarimos multiplos de 2: %d\nQuantidade de algarismos múltiplos de 3: %d", tot, m2, m3);

    return 0;
}