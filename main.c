#include <stdio.h>
#include <stdlib.h>

void primeFactors(unsigned int n) {
    unsigned int i = 2;

    while(n > 1) {
        if(n % i) {
            i++;
        }
        else {
            printf("%u ", i);
            n /= i;
        }
    }
}

int main() {
    unsigned int n;

    printf("Enter a number: ");
    scanf("%u", &n);
    primeFactors(n);
    printf("\n");

    system("PAUSE");
	return 0;
}