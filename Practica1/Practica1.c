#include <stdio.h>
#include <stdlib.h>
void burbuja(int arreglo[], int longitud);
void principal();
int main(){
    principal();
    return 0;
}

void principal(){
    int arreglo[] = {30, 28, 11, 96, 21, 18, 12, 22, 30, 97,-10,-3,-6,30,40,55,66,99,33,41,69,70};
    int longitud = sizeof arreglo / sizeof arreglo[0];
    printf("Imprimiendo arreglo antes de ordenar...\n");
    for (int x = 0; x < longitud; x++) {
        printf("%d ", arreglo[x]);
        }
    printf("\n\n");

    burbuja(arreglo,longitud);
    printf("Imprimiendo arreglo despues de ordenar...\n");
    for (int x = 0; x < longitud; x++){
        printf("%d ", arreglo[x]);
    }
    printf("\n\n");
}

void burbuja(int arreglo[], int longitud){
    int aux;
    for(int i=0; i < longitud; i++){
        for(int j=0; j < longitud - 1; j++){
            if(arreglo[j] > arreglo[j+1]){
                aux = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = aux;
            }
        }
    }

}
