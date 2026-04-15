#include <stdio.h>
int main ()

    {

        int aa, mm, dd, pp, m2, a2, x;
        printf("que ano voce nasceu?\n");
        scanf("%d", &aa);

        printf("em qual mes?\n");
        scanf("%d", &mm);

        printf("em qual dia?\n");
        scanf("%d", &dd);

        printf("que dia e hoje?\n");
        scanf("%d", &pp);

        printf("de que mes?\n");
        scanf("%d", &m2);

        printf("de que ano?\n");
        scanf("%d", &a2);

        x = (a2 - aa) * 365 + (m2 - mm) * 30 + (pp - dd);

        printf("voce viveu um total de %d dias", x);

        return 0;
    }