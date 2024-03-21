
#include <stdio.h>
#include <stdbool.h>
int unicos (int v[], int n) {
    int cont = 0;
    for (int i = 0; i < n; i++ ) {
        for (int j = 0; j < n; j++ )
        if (i != j && v[i] == v[j]) {
            cont++;
            
        }
        
    }

        return n - cont;
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

    int s = unicos(v,n);
    printf(" foram encontrados %d elementos só uma vez", s);
    
    
    
    return 0;
}
