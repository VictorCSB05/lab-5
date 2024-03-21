#include <stdio.h>

void inter(int va[], int na, int vb[], int nb) {
    int vc[100];
    int cont = 0;
    for (int i = 0; i < na; i++) {
        for (int j = 0; j < nb; j++) {
            if (va[i] == vb[j]) {
                vc[cont++] = va[i];
                break;
            }
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

    printf("Interseção: ");
    inter(va, na, vb, nb);
    printf("\n");

    return 0;
}
