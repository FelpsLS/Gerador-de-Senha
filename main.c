#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX 64 //tamanho máximo da senha

void geradorSenhas(int tamanho){
    char caracter[] = {"abcdefghijklmnopqrstuvwxzABCDEFGHIJKLMNOPQRSTUVWXZ123456789!@#$_"};
    char senha[MAX];

    srand(time(NULL)); //seed para geração de números aleatórios

    for(int i = 0; i < tamanho; i++){
        int indice = rand() % (sizeof(caracter) - 1); //seleciona um índice aleatório
        senha[i] = caracter[indice];
    }
    senha[tamanho] = '\0'; //finaliza a string
    printf("Senha gerada: %s\n", senha);
}

int main(){
    int tamanho, choice;
    printf("Digite o tamanho da senha (limite: %d): ", MAX);
    scanf("%d", &tamanho);


    if(tamanho > 0 && tamanho <= MAX){
        geradorSenhas(tamanho);
    }else{
        printf("Tamanho não permitido\n");
    }
    return 0;
}