#include <stdio.h>
#include <string.h>

int main() {
    char palabra1[100], palabra2[100];
    int resultado;

    
    printf("primera palabra: ");
    scanf("%s", palabra1);

    printf(" segunda palabra: ");
    scanf("%s", palabra2);

    
    resultado = strcmp(palabra1, palabra2);

    
    if (resultado == 0) {
       printf("son iguales.\n");
    } else if (resultado > 0) {
      printf("palabra mayor es: %s\n", palabra1);
      printf("palabra menor es: %s\n", palabra2);
    } else {
       printf("palabra mayor es: %s\n", palabr6p1);
      printf("palabra menor es: %s\n", palabra2
      );
    }

    
    printf("su comparación es: %d\n", resultado);

    return 0;
}