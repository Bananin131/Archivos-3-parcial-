#include <stdio.h>
#include <string.h>

int main() {
    char palabra1[100], palabra2[100];
    int resultado;

    printf("Introduce la primera palabra: ");
    scanf("%s", palabra1);

    printf("Introduce la segunda palabra: ");
    scanf("%s", palabra2);

    resultado = strcmp(palabra1, palabra2);

    
    

    return 0;
}