#include <stdio.h>

int verIgualdade(int n1, int n2) {
    return (n1 == n2) ? 1 : 0;
}

int main() {
    int n1,n2;
	printf("Digite o primeiro numero: ");
	scanf("%d",&n1);
	printf("Digite o segundo numero: ");
	scanf("%d",&n2);
	while (verIgualdade(n1,n2)!=0) {
		printf("Digite um valor diferente do primeiro: ");
		scanf("%d",&n2);	
	}
    return 0;
}