#include <stdio.h>

int checarVogal(char c) {
    switch (c){
        case 'a':
        case 'e':
        case 'o':
        case 'i':
        case 'u':
            return 1;
        break;
        default:
            return 0;
        break;
    }
}

int main() {
    char c = 'x';
	printf(checarVogal(c) == 0 ? "%c -> Consoante" : "%c -> Vogal",c);
    return 0;
}