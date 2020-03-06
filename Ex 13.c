#include <stdio.h>

void substituirChars(char string[], char c, int tamanho) {
    int i;
    for (i=0;i<tamanho;i++)
        if (string[i] == c) string[i] = '*';
}

int main() {
	char string[] = "Ola mundo";
    int tamanho = (sizeof(string) / sizeof(char)) - 1;
    substituirChars(string,'o',tamanho);
    printf("%s",string);
    return 0;
}