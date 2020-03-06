#include <stdio.h>

int fatorial(int n) {
    int fatorial = 1, i;
    if (n<0) return -1;
    else   
        for (i=n;i>1;i--)
            fatorial *= i;
    return fatorial;
}

int main() {
	printf("%d",fatorial(6));
    return 0;
}