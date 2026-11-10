#include <stdio.h>
#include <stdlib.h>
            // Para Funções de Exibição/Leitura é interresante usar const no ponteiro do vetor;
void exibir(const int *vetor , int tamanho){
    for(int i = 0; i < tamanho; i++){

        printf("vetor[%d] = %d; &vetor[%d] = %p\n" , i , vetor[i], i, &vetor[i]);
      // Com a constante qualquer alteração do vetor é barrada (vetor[i]++);

    }
}
void add (int *vetor , int tamanho){
for(int i = 0; i < tamanho; i++){
    scanf("%d", &vetor[i]);
}
}

void desaloca_vetor(int **v){
    free(*v);
    *v = NULL;

}

void soma_vetor_escalar(int vetor[] , int tamanho , int escalar){
for(int i = 0; i < tamanho; i++){
        vetor[i] += escalar;

}
puts("");

}

int main(){
int tamanho = 5;
int *vetor = (int *)malloc(tamanho * sizeof(int));

add(vetor , tamanho);
exibir(vetor , tamanho);
soma_vetor_escalar(vetor , tamanho , 9);
exibir(vetor , tamanho);

puts("==> Antes de desalocar Vetor dinamico");
printf("&vetor = %p , vetor = %p\n" , &vetor , vetor);

desaloca_vetor(&vetor);

puts("==> Depois de desalocar Vetor dinamico");
printf("&vetor = %p , vetor = %p\n" , &vetor , vetor);
return 0;
}
