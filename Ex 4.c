#include <stdio.h>

int maiorEntre(int n1, int n2) {
    return (n1 > n2) ? n1 : n2;
}

int main() {
    printf("%d",maiorEntre(42,6));
    return 0;
}