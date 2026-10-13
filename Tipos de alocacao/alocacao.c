#include <stdio.h>
#include <stdlib.h>

int main(){

// Memoria estatica (stack)
   int vs[5] = {0 , 10 , 20 , 30 , 40};

   puts("## Vetor Estatico");
   printf("&vs = %p , vs = %p\n " , &vs , vs); // O endereço de memoria do VS é igual ao endereco do primeiro elemento


   for(int i = 0; i < 5; i++){
     printf("&vs[%d] = %p , vs[%d] = %d\n" , i , &vs[i], i , vs[i]);
   }
   puts("\n");

   // alocacao de memoria dinamica malloc (memoria heap)



      puts("## Vetor Dinamico malloc");
    int *vh_mall = (int *) malloc(5 * sizeof(int)); // todos os elementos possuem "lixo" de memoria

    printf("&vh_mall = %p , vh_mall = %p\n " , &vh_mall , vh_mall); // O endereço de memoria do vh_mall é estatico e mora na stack, "conteudo" de vh_mall é o endereco do primeiro elemento

   for(int i = 0; i < 5; i++){
     printf("&vh_mall[%d] = %p , vh_mall[%d] = %d\n" , i , &vh_mall[i], i , vh_mall[i]);
   }
   puts("\n");


         puts("## Vetor Dinamico calloc");
    int *vh_call = (int *) calloc(5 , sizeof(int)); // todos os elementos inicializados com 0

    printf("&vh_call = %p , vh_call = %p\n " , &vh_call , vh_call); // O endereço de memoria do vh_mall é estatico e mora na stack, "conteudo" de vh_mall é o endereco do primeiro elemento

   for(int i = 0; i < 5; i++){
     printf("&vh_call[%d] = %p , vh_call[%d] = %d\n" , i , &vh_call[i], i , vh_call[i]);
   }
   puts("\n");

return 0;
}
