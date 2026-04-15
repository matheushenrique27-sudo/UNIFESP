#include <stdio.h>
int main()
{
    float e, b, n, v, pb, pn, pv;

    printf("qual quantidade de eleitores?\n");
    scanf("%f", &e);

    printf("quantos votaram em branco?\n");
    scanf("%f", &b);

    printf("quantos anularam o voto?\n");
    scanf("%f", &n);

    v = e-b-n;
    pb = (100*b)/e;
    pn = (100*n)/e;
    pv = (100*v)/e;

    printf("a porcentagem de distribuicao de votos na cidade  %.2f%% em branco, %.2f%% anulados e %.2f%% de votos validos.\n", pb, pn, pv);

    return 0;

}

