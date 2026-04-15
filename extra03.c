#include <stdio.h>
int main()
{
    float n1, n2;

    printf("digite um numero:\n");
    scanf("%f", &n1);

    printf("digite outro numero:\n");
    scanf("%f", &n2);

    if(n1>n2)
    {
        printf("o primeiro numero digita e maior\n");
    }
    else
    {
        printf("o segundo numero digitado e maior");
    }
    return 0;
}