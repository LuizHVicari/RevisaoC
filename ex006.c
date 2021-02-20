#define MAX_SIZE 50
#include <stdio.h>

int compStr(char str1[], char str2[]) {
    //Declara o i fora do for pois ele será usado para uma comparação posterior
    int i;

    //Laço para percorrer duas strings simultaneamente até que chegue ao fim de uma delas
    for(i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
        //Se encontrar um caracter diferente, imprime isso e retorna 0 para sair da função
        if(str1[i] != str2[i]) {
            printf("As strings sao diferentes");
            return 0;
        }
    }

    //Faz uma comparação final para ver se uma está apenas contida dentro da outra
    if((str1[i] == '\0' && str2[i] != '\0') || str1[i] != '\0' && str2[i] == '\0') {
        printf("As strings sao diferentes");
        return 0;
    }

    //Se passsar em todos os teste, ambas as strings são iguais
    printf("As strings sao iguais");
    return 1;
}

int main (void) {
    //Declara as strings
    char str1[MAX_SIZE], str2[MAX_SIZE];

    //Recebe as frases do usuário
    printf("Digite uma frase: ");
    gets(str1);
    printf("Digite outra frase: ");
    gets(str2);

    //Chama a função para comparar as strings
    compStr(str1, str2);

    return 0;
}