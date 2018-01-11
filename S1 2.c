#include <stdio.h>
int main() {
    int x[20];
    int i, n;
    int k, ma;
    int r;
    printf("Numarul de elemente ale sirului: ");
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        printf("Intorduceti elementul: ");
        scanf("%d", &x[i]);
        }
    k=0;
    for(i=1;i<n;i++) {
        ma=(x[i-1]+x[i+1])/2;
        if(x[i]==ma){
            k++;
       r=x[i+1]-x[i];
       }
        }
    if(k=n-2) {

        printf("Sirul este o progresie aritmetica cu ratia %d", r);
    }
    else
        printf("Sirul nu este o progresie aritmetica");
    return 0;
}
