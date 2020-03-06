#include <stdio.h>

int checarIgualdades(float vetor[], int tamanho) {
    int i,j;
    for (i=0;i<tamanho;i++)
        for (j=1+i;j<tamanho;j++)
            if (vetor[i] == vetor[j]) return 1;
    return 0;
}

int main() {
	float vetor[] = {0,1.5,2,3,4,5,6,7,8.3,9,1.49,1.51};
    int tamanho = sizeof(vetor) / sizeof(float);
    printf(checarIgualdades(vetor,tamanho) == 0 ? "Nao existem igualdades" : "Existem igualdades");
    return 0;
}