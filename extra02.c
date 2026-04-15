#include <stdio.h>
#include <math.h>
int main()
{
    int n1;

    printf("escreva o numero que deseja saber:\n");
    scanf("%d", &n1);

    if(n1%2 == 0)
    {
        printf("o numero digitado e par\n");
    }
    else
    {
        printf("o numero digitado e impar\n");
    }

    return 0;
}