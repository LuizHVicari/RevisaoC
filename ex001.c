#include <stdio.h>

//Função para calcular o fatorial (usado no cálculo do número de Euler) por recursividade
float fat(float num) {
    //Caso base para representar quando o número fornecido for menor que 0
    if(num < 0) {
        return -1;
    }

    //Caso base, como o fatorial de 0 e 1 são iguais à 1 (também evita mais uma chamada recursiva quando num = 1)
    else if(num == 0 || num == 1) {
        return 1;
    }

    //Chama a função recursivamente, diminuindo num em 1 e multiplicando ela pelo valor anterior de num 
    else {
        return num * fat(num -1);
    }
}

//Função para calcular o numero de Euler
float nep(float quant) {
    //Evita  que o valor de quantidade seja 0 (returnando um erro no lugar)
    if(quant == 0) 
        return -1;

    //Se a quantidade for negativa, corrige o valor da quantidade para ser um número positivo
    if(quant < 0)
        quant = quant * -1;

    //Inicia a variável e com 0
    float e = 0;

    //Executa um laço enquanto i for menor que a quantidade informada para a aproximação
    for(float i = 0; i <= quant; i++)
        //Faz o que a série que resulta em e indica
        e += 1 / fat(i);

    return e;
}

int main () {
    
    //Imprime o valor do número de Euler aproximado 
    printf("%f", nep(15));

    return 0;
}

//Para uma aproximação melhor, é recomendado usar números mais altos e trocas os índices floats por double