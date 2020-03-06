#include <stdio.h>

int checarOrdenacaoDecrescente(int vetor[], int tamanho) {
    int i;
    for (i=1;i<tamanho;i++)
        if (vetor[i-1] < vetor[i]) return 0;
    return 1;
}

int main() {
	int vetor[] = {5,4,3,2,1};
    int tamanho = sizeof(vetor) / sizeof(int);
    printf(checarOrdenacaoDecrescente(vetor,tamanho) == 0 ? "Nao decrescente" : "Decrescente");
    return 0;
}