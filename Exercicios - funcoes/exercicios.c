#include <stdio.h>
#include <stdlib.h>

void troca(int *x , int *y){
    int aux = *x;
    *x = *y;
    *y = aux;


}

void calculo(int a, int b, int *soma , int *mult){

     *soma = a + b;
     *mult = a * b;


}

void exercicio(int *px , int *py){

    *px = *py;
    *py = (*py) * (*px);
    *px = *px + 2;

}

int main(){

int a = 10;
int b = 20;

troca(&a , &b);

int n1, n2;

scanf("%d" , &n1);
scanf("%d" , &n2);

printf("Valor de n1 = %d; Valor de n2 = %d\n" , n1 , n2);

exercicio(&n1 , &n2);

printf("Valor de n1 = %d; Valor de n2 = %d" , n1 , n2);


// Exercicio 4

    int x , z , soma , mult;
    scanf("%d" , &x);
    scanf("%d" , &z);

    calculo(x , z , &soma , &mult);

    printf("Soma = %d , Multiplicacao = %d" , soma, mult);



return 0;
}
