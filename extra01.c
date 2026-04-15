#include <stdio.h>
int main(){

    int A, B, aux, aa, ss;
    char resposta, operacao;
    
    printf("Digite o valor de A: ");
    scanf(" %d",&A);
    printf("Digite o valor de B: ");
    scanf(" %d",&B);
    printf("Deseja alterar a ordem dos valores?\nResponda com S ou N: ");
    scanf(" %c",&resposta);
    printf("Deseja fazer a operacao de adicao ou de subtracao entre os valores?\nDigite a para adicao e s para subtracao: ");
    scanf(" %c",&operacao);
    if(resposta == 'S'){
        A = aux;
        B = A;
        aux = B;
    }
        else if(resposta == 'N'){
        A = A;
        B = B;
        }   
    if(operacao == 'a'){
        aa = A+B;
        printf("O valor obtido com a soma foi %d",aa);
    }
        else if(operacao == 's'){
            ss = A-B;
            printf("O valor obtido foi %d",ss);
            }
    

    return 0;
    
}