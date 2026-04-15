#include <stdio.h>
int main ()
{
    float l, a;

    printf("qual o lado desse quadrado?\n");
    scanf("%f", &l);

    a = l*l;

    printf("a area desse quadrado resulta em:\n%.2f", a);

    return 0;
}