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
}

int main() {
    float num1, num2;
    int opcion;

    while (1) {
        printf("\tCalculadora\n");
        printf("1- + Suma\n");
        printf("2- - Resta\n");
        printf("3- * Multiplicación\n");
        printf("4- / División\n");
        printf("5- Salir\n");
        printf("Elige una opción: ");
        scanf("%d", &opcion);

        if (opcion == 5) {
            break;
        }

        printf("\nIntroduce el primer número: ");
        scanf("%f", &num1);
        printf("Introduce el segundo número: ");
        scanf("%f", &num2);

        switch (opcion) {
            case 1:
                suma(num1, num2);
                printf("\n");
                break;
            case 2:
                resta(num1, num2);
                printf("\n");
                break;
            case 3:
                multiplicacion(num1, num2);
                printf("\n");
                break;
            case 4:
                division(num1, num2);
                printf("\n");
                break;
            default:
                printf("Opción no válida.\n");
        }
    }

    return 0;
}
