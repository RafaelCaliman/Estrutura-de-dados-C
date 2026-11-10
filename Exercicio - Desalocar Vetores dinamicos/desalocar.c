#include <stdio.h>
#include <stdlib.h>
void preencher(int *v , int tamanho){
for(int i = 0; i < tamanho; i++){
    printf("Prencha o Vetor: ");
    scanf("%d", &v[i]);
}
}
void ler_arr(const int *v , int tamanho){
for(int i = 0; i < tamanho; i++){
    printf("Valores do Array: %d\n" , v[i]);
}
}

void desalocar(int **v){
    free(*v);
    *v = NULL;

}


int main(){
int *vh = (int*)calloc(4,sizeof(int));
int tamanho = 4;

preencher(vh , tamanho);
ler_arr(vh , tamanho);

puts("Valores antes da desalocaçao");
printf("&vh = %p , vh = %p" , &vh , vh);

desalocar(&vh);

puts("\nValores depois da desalocaçao");
printf("&vh = %p , vh = %p" , &vh , vh);





return 0;
}
