#include <stdio.h>
#include <stdlib.h>
void preenche(int *vetor , int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("Digite os valores: ");
        scanf("%d" , &vetor[i]);


    }
    printf("Vetor Cheio !\n");

}

void exibir_vetor(const int *vetor ,int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("v[%d] = %d,&v[%d] = %p\n" , i ,vetor[i], i , &vetor[i]);
    }

}

void desalocar(int *vetor){
    free(vetor);
   // *vetor = NULL;
}

int main(){
int tamanho = 5;
int *vh = (int * )calloc(tamanho , sizeof(int));

preenche(vh , tamanho);

puts("\n--- Antes de Desalocar o Vetor ! ---");

exibir_vetor(vh , tamanho);

printf("&vh = %p , vh = %p\n", &vh , vh);

puts("\n-- Depois de Desalocar o Vetor ! --");

desalocar(vh);

printf("&vh = %p , vh = %p", &vh , vh);


return 0;
}
