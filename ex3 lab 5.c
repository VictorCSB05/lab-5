
#include <stdio.h>
#include <stdbool.h>
bool achar (int v[], int n, int e) {
    for (int i = 0; i < n; i++ ) {
        if (v[i] == e) {
            return true;
        }
        
    }
    return false;
    
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

    bool s = achar(v,n,e);
    if (s == true) {
        printf("elemento encontrado");
    }
    else{
        printf("o elemento não esta na lista");
    }
    
    return 0;
}
