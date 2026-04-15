#include <stdio.h>
int main()
{
    float m, cm;

    printf("entre com a quantidade em metros:\n");
    scanf("%f", &m);

    cm = m*100;

    printf("a quantidade de mentros em centimetros resulta em:\n%.2f", cm);

    return 0;

}