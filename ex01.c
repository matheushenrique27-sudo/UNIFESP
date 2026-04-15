#include <stdio.h>
int main(){
    int A, B, AUX;

    //atribuições iniciais
    A = 10;
    B = 20;

    //troca de valores
    AUX = A;
    A = B;
    B = AUX;

    //exibição dos resultados
    printf("A = %d\n",A);
    printf("B = %d\n",B);

    return 0;

}
