#include <stdio.h>
int main ()
{
    float cf, t, i, vt;

    printf ("Qual o custo de producao do veiculo?\n");
    scanf ("%f", &cf);

    t = 0.28*cf;
    i = 0.45*cf;
    vt = t + i + cf;

    printf ("O preco desse carro no mercado e de %.2f", vt);

return 0;
}