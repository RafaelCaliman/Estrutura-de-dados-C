#include <stdio.h>
#include <stdlib.h>
void preencher(int *v , int tamanho){
for(int i = 0; i < tamanho; i++){
    printf("Preencha o Vetor: ");
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
int tamanho = 4;
int *vh = (int*)calloc(tamanho,sizeof(int));

if(vh == NULL){
    return 1;
}

preencher(vh , tamanho);
ler_arr(vh , tamanho);

puts("Valores antes da desalocaçao");
printf("&vh = %p , vh = %p\n" , &vh , vh);

desalocar(&vh);

puts("Valores depois da desalocaçao");
printf("&vh = %p , vh = %p\n" , &vh , vh);





return 0;
}
