#include <stdio.h>
#include <string.h>
#include <stdlib.h> // Necessário para o system("pause")

int main() {
    char palavra[100];
    int i, tamanho;

    printf("Digite uma palavra: ");
    // O %[^\n] serve para ler tudo o que você digitar, até você apertar Enter
    scanf(" %[^\n]", palavra); 

    tamanho = strlen(palavra);

    printf("Palavra invertida: ");
    for (i = tamanho - 1; i >= 0; i--) {
        printf("%c", palavra[i]);
    }
    
    printf("\n\n");
    
    // Força a janela do prompt a ficar aberta no Windows
    system("pause"); 
    return 0;
}
