#include <stdio.h>
#include <stdlib.h>
int soma_sub(int x, int y , int *z){
    int soma = x + y;
    *z = x - y;
    return soma;

}
int main(){

int a = 40;
int b = 15;
int c;

int resultado = soma_sub(a,b,&c);


printf("%d\n" , a);
printf("%d\n" , b);
printf("Subrtracao , %d\n" , c);
printf("%d" , resultado);

return 0;
}
