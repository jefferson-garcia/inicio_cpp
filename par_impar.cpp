#include "stdio.h"

int main(){
    printf("Holiiiiss, táparo\n");

    int numero; 

    printf("Digite un numerito: ");
    scanf("%d", &numero);
    
    if (numero % 2 == 0) {
        printf("Taparín, el número es par\n");
        return 0;
    }
    printf("El número es impar\n");
    return 0;
}