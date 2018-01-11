#include <stdio.h>
int main() {
    int x[50];
    int i, n;
    int k, ma;

    printf("Dati o valoare lui n: ");
    scanf("%d", &n);
    k=0;
    for(i=0;i<n;i++){
        printf("Introduceti elementul: ");
        scanf("%d", &x[i]);
        }
    for(i=1;i<n;i++) {
        ma=(x[i-1]+x[i+1])/2;
        if (x[i]==ma)
            k++;
        }
    printf("Numarul de elememnte  care sunt media aritmetica a vecinilor este %d", k);
    return 0;
}
