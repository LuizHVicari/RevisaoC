#include <stdio.h>

void printarMatriz(int num, int matriz[num][num]) {
    //Laço duplo para percorrer a matriz
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++)
            //Imprime o valor na posição i, j
            printf("%d ", matriz[i][j]);

        //Quando acaba a linha da matriz, pula uma linha
        printf("\n");
    }
}

int criarMatriz(int num) {
    //Inicia a matriz
    int matriz[num][num];

    //Laço duplo para percorrer a matriz
    for(int i = 0; i < num; i++)
        for (int j = 0; j< num; j++) {
            //Coloca os valores como foram pedidos no exercício (para ficar mais bonito, substitui o -1 por 2, para ocupar um único espaço)
            if(i == j)
                matriz[i][j] = 0;

            else if (i < j)
                matriz[i][j] = 1;

            else
                matriz[i][j] = 2;
        }

    //Chama a função para imprimir a matriz na tela
    printarMatriz(num, matriz);
}

int main (void) {
    //Inicia a variável para definir o tamanho da matriz
    int num;

    //Valida o tamanho da matriz para ser real maior que 0 
    do {
        //Recebe o tamanho da matriz
        printf("Informe um numero inteiro: ");
        scanf("%d", &num);
    } while (num <= 0);

    //Chama a função para criar a matriz
    criarMatriz(num);

    return 0;
}