
#include <stdio.h>
#include <stdbool.h>
void trocar (int v[5], int n) {
    int v_invertido[5];
    for (int i = 0; i < n; i++ ) {
        v_invertido[n - 1 - i] = v[i];
        }
    printf("invertido:");
    for (int i = 0; i < n; i++ ) {
        printf("%d", v_invertido[i]);
    }
    
}


int main()
{
    int n;
    int v[5];
    printf("informe o tamanho do vetor: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++ ) {
       printf("digite o número %d: ", i );
       scanf("%d", &v[i]);
    }
    trocar(v,n);
    
    return 0;
}
