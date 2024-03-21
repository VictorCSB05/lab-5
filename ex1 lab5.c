
#include <stdio.h>
#include <stdbool.h>
bool crescente (int v[], int n) {
    for (int i = 0; i < n-1; i++ ) {
        if (v[i] > v[i+1]) {
            return false;
        }
    }
    return true;
    
}


int main()
{
    int n;
    int v[100];
    printf("informe o tamnho do array");
    scanf("%d", &n);
    for (int i = 0; i < n; i++ ) {
       printf("digite o número %d: ", i );
       scanf("%d", &v[i]);
    }
    bool s = crescente(v,n);
    if (s == true) {
        printf("true");
    }
    else{
        printf("false");
    }
    return 0;
}
