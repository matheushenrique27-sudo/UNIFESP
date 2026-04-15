#include <stdio.h>
int main()
{
    float n1;
    printf("digite um numero:\n");
    scanf("%f", &n1);
    printf("a tabuada desse numero ate 10 e:\n");
    for (int i=1; i<=10; i++)
    {
        printf("%.2f\n", n1*i);
    }

return 0;

}