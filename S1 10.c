#include <stdio.h>
#include <strings.h>

int main() {
    char Nume[25];
    char PNume[25];
    int i, j;
    char ID[10];
    char HELP[10];

    printf("Intorduceti numele: ");
    gets(Nume);
    printf("Intorduceti prenumle: ");
    gets(PNume);

    ID[0]=Nume[0];
    j=0;
    for(i=0; i<8; i++) {
         HELP[j]=PNume[i];
        j++;
    }
    strcat(ID, HELP);

    printf("%s", strlwr(ID));

    return 0;
}
