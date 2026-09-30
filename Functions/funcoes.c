#include <stdio.h>

int soma(int x, int y){

    int z = x + y;
 
    printf("-------------------------\n");
    printf("Endereço de X: %p\n" , &x);
    printf("Endereço de y: %p\n" , &y);

    return z;

}


int main(){

   int a = 10;
   int b = 20;

   int c;
   c = soma(a,b);

   printf("Endereço de A: %p\n" , &a);
   printf("Endereço de B: %p\n" , &b);

    return 0;
}
