
#include <stdio.h>
#include <stdbool.h>
int busca_ultimo (int v[], int n, int e) {
    int cont = 0;
    for (int i = 0; i < n; i++ ) {
        if (v[i] == e) {
            cont++;
            
        }
        
    }

        return cont;
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

    int s = busca_ultimo(v,n,e);
    printf("elemento encontrado  %d vezes", s);
    
    
    
    return 0;
}
