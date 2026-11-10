#include <stdio.h>
#include <stdlib.h>

int main(){


    int a = 10;
    int *p1 = &a;
    int **p2 = &p1; // Ponteiro dos ponteiros tem que ser do mesmo tipo, por exemplo aqui ele é um int pointer que aponta para um int pointer

    printf("&a = %p , a = %d\n" , &a , a);
    printf("&p1 = %p , p1 = %p , *p1 = %d\n", &p1 ,p1 , *p1);
    printf("&p2 = %p , p1 = %p , *p2 = %p , **p2 = %d\n\n", &p2 ,p2 , *p2, **p2);

    **p2 = 99;

    
    printf("&a = %p , a = %d\n" , &a , a);
    printf("&p1 = %p , p1 = %p , *p1 = %d\n", &p1 ,p1 , *p1);
    printf("&p2 = %p , p1 = %p , *p2 = %p , **p2 = %d\n\n", &p2 ,p2 , *p2, **p2);


    return 0;
}