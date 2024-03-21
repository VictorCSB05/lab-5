#include <stdio.h>

void soA(int va[], int na, int vb[], int nb) {
    int vc[100];
    int cont = 0;
    for (int i = 0; i < na; i++) {
        int igual = 0; 
        for (int j = 0; j < nb; j++) {
            if (va[i] == vb[j]) {
                igual = 1;
                break; 
            }
        }
        if (!igual) { 
            vc[cont++] = va[i];
        }
    }
    for (int i = 0; i < cont; i++) {
        printf("%d ", vc[i]);
    }
}


int main() {
    int na, nb;
    int va[100], vb[100];

    printf("Informe o tamanho do vetor a: ");
    scanf("%d", &na);
    for (int i = 0; i < na; i++) {
        printf("Digite o número %d: ", i);
        scanf("%d", &va[i]);
    }

    printf("Informe o tamanho do vetor b: ");
    scanf("%d", &nb);
    for (int i = 0; i < nb; i++) {
        printf("Digite o número %d: ", i);
        scanf("%d", &vb[i]);
    }

    printf("valores que não estão em b: ");
    soA(va, na, vb, nb);
    printf("\n");

    return 0;
}
