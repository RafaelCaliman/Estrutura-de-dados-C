#include <stdio.h>
#include <stdlib.h>
void exibir(int *vetor , int tamanho){
    for(int i = 0; i < tamanho; i++){

        printf("vetor[%d] = %d; &vetor[%d] = %p\n" , i , vetor[i], i, &vetor[i]);

    }
}
void add (int *vetor , int tamanho){
for(int i = 0; i < tamanho; i++){
    scanf("%d", &vetor[i]);
}
}

int main(){
int tamanho = 5;
int *vetor = (int *)malloc(tamanho * sizeof(int));

add(vetor , tamanho);
exibir(vetor , tamanho);


free(vetor);

return 0;
}
