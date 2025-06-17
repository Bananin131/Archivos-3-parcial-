#include <stdio.h>
#include <string.h>

int main() {
    char palabra1[100], palabra2[100], despues[100];
    
    printf("Ingresa la primera palabra: ");
    scanf("%s", palabra1);

    printf("Ingresa la segunda palabra: ");
    scanf("%s", palabra2);
    
    
    strcpy(despues, palabra1);
    strcpy(palabra1, palabra2);
    strcpy(palabra2, despues);

    printf("Palabra_1 = '%s'\n", palabra1);
    printf("Palabra_2 = '%s'\n", palabra2);

    return 0;
}