#include <stdio.h>

// a)
int countNegatives(int numArray[10]){
    int count;
    int i;

    i=0;
    count=0;
    while(i<10) {
        if(numArray[i]<0)
        count++;
        i++;
        }
    return count;
     }

// b) Este incorect deoarece in cazul in care
//nu exista elemente mai mici ca 0 in sir atunci
//va returna indezul primului element

int findFirstNegative(int numArray[10]) {
    int index;

    index=0;
    while (numArray[index]>=0)
        index++;

    return index;
     }

int main() {
    int a[10]={1,-2,-23,4,45,67,7,98,-100};
    int i;
    int n;
    int N, M;


    N=countNegatives(a);
    M=findFirstNegative(a);

    printf("Numarul de numere negative este %d", N);
    printf("\nIndexul primului numar negativ este %d", M);
    return 0;
}
