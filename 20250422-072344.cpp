#include <stdio.h>
#include <string.h>

int main() {
    char palabra1[100], palabra2[100], resultado[1000] = "";
    int N;

    printf("Ingresa la primera palabra: ");
    scanf("%s", palabra1);
    printf("Ingresa la segunda palabra: ");
    scanf("%s", palabra2);

    N = strlen(palabra1);  

    strcat(resultado, palabra1); 
    for (int i = 0; i < N; i++) {
        strcat(resultado, palabra2); 
    }

    printf("Resultado: %s\n", resultado);

    return 0;
}