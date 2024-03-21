
#include <stdio.h>
#include <stdbool.h>
int busca_primeiro (int v[], int n, int e) {
    for (int i = 0; i < n; i++ ) {
        if (v[i] == e) {
            return i;
        }
        
    }
    return -1;
    
}


int main()
{
    int n;
    int v[100];
    int e;
    printf("informe o tamanho do vetor: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++ ) {
       printf("digite o número %d: ", i );
       scanf("%d", &v[i]);
    }
    printf("digite o valor do elemento: ");
    scanf("%d", &e);

    int s = busca_primeiro(v,n,e);
    printf("elemento encontrado na posiçao %d", s);
    
    
    
    return 0;
}
