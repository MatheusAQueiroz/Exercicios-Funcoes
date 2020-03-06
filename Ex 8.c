#include <stdio.h>
#include <math.h>

int checarPrimalidade(int n) {
    int i;
    for (i=n-1;i>=sqrt(n);i--)
        if (n%i == 0) return 0;
    return 1;
}

int main() {
    int n = 149;
	printf(checarPrimalidade(n) == 0 ? "%d -> Nao primo" : "%d -> Primo",n);
    return 0;
}