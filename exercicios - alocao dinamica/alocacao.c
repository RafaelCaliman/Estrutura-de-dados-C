#include <stdio.h>
#include <stdlib.h>

int main(){

int n;
int *notas;
int soma = 0;

printf("Digite quantas notas vai registar: ");
scanf("%d" , &n);

notas = malloc(n * sizeof(int));

for(int i = 0; i < n; i++){
     printf("Digite as notas: ");
     scanf("%d" , &notas[i]);

}

for(int j = 0; j < n; j++){
    soma += notas[j];
}
printf("%d" , soma);


free(notas);
return 0;
}
