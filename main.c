#include <stdio.h>
#include <stdlib.h>

int main(){

    int x;
    int y;
    int z;

    printf("X degerini giriniz : ");
    scanf("%d", &x);
    printf("Y degerini giriniz : ");
    scanf("%d", &y);

    int y2 = y&0b011100000000;
    int x2 = x&0b100000000000;
    int x3 = x&0b000011111111;

    z=y2+x2+x3;

    printf("Z = %d\n", z);

    return 0;
}
