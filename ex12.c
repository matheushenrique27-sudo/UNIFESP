#include <stdio.h>
int main ()
{
    float s, a, na, ns;

    printf("qual seu salario?\n");
    scanf("%f", &s);

    printf("de quantos %% sera o ajuste?\n");
    scanf("%f", &a);

    na = (a/100)*s;
    ns = s+na;

    printf("seu novo salario sera de\n %.2f", ns);

    return 0;
}