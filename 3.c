#include <stdio.h>
#include <stdlib.h>

void verificarLetra() {
    char letra;
    
    printf("Digite uma letra: ");
    scanf(" %c", &letra);
    letra = tolower(letra);
    
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        printf("Vogal\n");
    } else {
        printf("Consoante\n");
    }
}