#include <stdio.h>
int main()
    {

        float L1, L2, A;

        printf("Digite o valor da base:\n");
        scanf("%f", &L1);

        printf("Digite o valor da altura:\n");
        scanf("%f", &L2);

        A = L1*L2;

        printf("A area de um retangulo que possui as dimensoes informadas:\n%.3f", A);

        return 0;

    }