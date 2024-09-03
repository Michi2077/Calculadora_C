#include <stdio.h>

void suma(float a, float b) {
    printf("Resultado: %.2f\n", a + b);
}

void resta(float a, float b) {
    printf("Resultado: %.2f\n", a - b);
}

float division(float a, float b){
    if(b != 0){
         printf("Resultado: %.2f\n", a/b);
    }else{
        printf("ERROR!! DIVISION POR CERO NO PERMITIDA\n");
    }
    return 0;
}
