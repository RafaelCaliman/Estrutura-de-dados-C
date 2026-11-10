#include <stdio.h>
#include <stdlib.h>
void Exibir_vetor(int *vetor , int tamanho){

for(int i = 0; i < tamanho; i++){
   printf("%d\n" , vetor[i]);
}
}

void Vetor_Colchetes(int vetor[] , int tamanho){
    for(int i = 0; i < tamanho; i++){
      printf("Via Colchetes: %d\n" , vetor[i]);
    }
}


int main(){
int vetor[5] = {10,20,80,25,50};
int tamanho = sizeof(vetor) / sizeof(vetor[0]);

Exibir_vetor(vetor , tamanho);
Vetor_Colchetes(vetor , tamanho);





return 0;
}
