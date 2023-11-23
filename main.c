#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int filas, columnas;
    printf("Ingrese el número de filas: ");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas: ");
    scanf("%d", &columnas);
    int matriz[filas][columnas];
    srand(time(NULL));
    // aqui se llena los numeros aleatorios de 0 a 100
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 101;
        }
    }
    // aqui se imprime la matriz original
    printf("Matriz original:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}