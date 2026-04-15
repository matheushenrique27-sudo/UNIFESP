#include <stdio.h>
int main ()
{
    float h, d, s;

    printf("quanto voce ganha por hora?\n");
    scanf("%f", &d);

    printf("quantas horas voce trabalha por mes?\n");
    scanf("%f", &h);

    s = h*d;
    printf("voce ganha %.2f por mes\n", s);

    return 0;
}