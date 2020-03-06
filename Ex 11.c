#include <stdio.h>
#include <stdlib.h> 

void inverter(int vetor[], int tamanho) {
    int i,*vetor_t = malloc(sizeof(int) * tamanho);
    for (i=0;i<tamanho;i++) *(vetor_t+i) = vetor[tamanho-(i+1)];
    for (i=0;i<tamanho;i++) vetor[i] = *(vetor_t+i);
}

int main() {
	int vetor[] = {1,2,3,4};
    int i,tamanho = sizeof(vetor) / sizeof(int);
    inverter(vetor,tamanho);
    for (i=0;i<tamanho;i++) printf("%d ",vetor[i]);
    return 0;
}