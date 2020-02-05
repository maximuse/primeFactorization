#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned int n,
                 i = 2;

    printf("Enter a number: ");
    scanf("%u", &n);
    printf("\n");

    while (n > 1) {
        if (n % i) {
            i++;
        }
        else {
            printf("%u ", i);
            n /= i;
        }
    }

    printf("\n\n");

    system("PAUSE");
	return 0;
}