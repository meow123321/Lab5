#include <stdio.h>
#include <string.h>

int main() {
    char DaysOfWeek[33] = "SunMonTuesWendesThursFriSaturday";
    char A[4] = "Sun";
    char B[9] = "Saturday";
    char C[5] = "Tues";
    char D[4] = "day";
    char *p;
    int L;


// a)
    strstr(DaysOfWeek, A);
    if(strstr(DaysOfWeek,A)!=0)
        printf("%s", A);
// b)
    strstr(DaysOfWeek, B);
    if(strstr(DaysOfWeek, B)!=0)
        printf("\n%s", strupr(B));
// c)
    strstr(DaysOfWeek, C);
    strstr(DaysOfWeek, D);
    if(strstr(DaysOfWeek, C)!=0 and strstr(DaysOfWeek, D)!=0) {
        strcat(C, D);
        printf("\n%s", C);
    }
// d)
    L=strlen(DaysOfWeek);
    printf("\n%d", L);

     return 0;
}

