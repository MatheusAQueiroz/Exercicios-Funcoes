#include <stdio.h>

int mesTrimestre(int mes) {
    switch (mes){
			case 1:
				printf("Janeiro");
			break;
			case 2:
				printf("Fevereiro");
			break;
			case 3:
				printf("Marco");
			break;
			default:
				printf("Digite um valor válido (1,2 ou 3)!");
			break;
	}
}

int main() {
	int num;
	printf("Digite um numero de 1 a 3: ");
	scanf("%d",&num);
    mesTrimestre(num);
    return 0;
}