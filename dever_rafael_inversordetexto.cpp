#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char palavra[100];
    int i, tamanho;

    printf("Digite uma palavra: ");
    scanf(" %[^\n]", palavra); 

    tamanho = strlen(palavra);

    printf("Palavra invertida: ");
    for (i = tamanho - 1; i >= 0; i--) {
        printf("%c", palavra[i]);
    }
    
    printf("\n\n");
    
    system("pause"); 
    return 0;
}
