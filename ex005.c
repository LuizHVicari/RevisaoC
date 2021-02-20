#define MAX_SIZE 50
#include <stdio.h>
#include <string.h>

int main (void) {
    //Inicia a string
    char frase[MAX_SIZE];
    /*Define os contadores (por simplicidade, aqui só farei para as letras de a até g, no caso de escrever
    todos os carctéres, há duas possíveis soluções: fazer uma variável para cada carácter ou uma matriz com
    linhas e colocar embaixo dela cada caracter usado, como é um exercício apenas de revisão, resolvi ser mais
    simples)*/
    int ca = 0, cb = 0, cc = 0, cd = 0, ce = 0, cf = 0, cg = 0;

    //Recebe a frase escrita pelo usuário
    printf("Digite uma frase: ");
    gets(frase);

    /*Verifica se cada caracter na string corresponde a um dos números digitados, no caso de utilizar a ideia
    da matriz, uma solução seria trabalhar com os valores ASCII de cada uma e colocá-los no ponto da matriz
    registrando na outra linha qual caracter ela representa, note que para isso, seria necessário percorrer
    antes essa linha para colocar todos os valors, podendo acarretar em maior custo computacional)*/ 
    for(int i = 0; frase[i] != '\0'; i++) {
        if(frase[i] == 'A' || frase[i] == 'a')
            ca++;
        else if (frase[i] == 'B' || frase[i] == 'b')
            cb++;
        else if (frase[i] == 'C' || frase[i] == 'c')
            cc++;
        else if (frase[i] == 'D' || frase[i] == 'd')
            cd++;
        else if (frase[i] == 'E' || frase[i] == 'e')
            ce++;
        else if (frase[i] == 'F' || frase[i] == 'f')
            cf++;
        else if (frase[i] == 'G' || frase[i] == 'g')
            cg++;
    }

    //Imprime os valores nos contadores
    printf("A aparece %d vezes\n", ca);
    printf("B aparece %d vezes\n", cb);
    printf("C aparece %d vezes\n", cc);
    printf("D aparece %d vezes\n", cd);
    printf("E aparece %d vezes\n", ce);
    printf("F aparece %d vezes\n", cf);
    printf("G aparece %d vezes\n", cg);

    return 0;
}