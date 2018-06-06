#include <stdlib.h>
#include <stdio.h>


int main(int argc, char const *argv[])
{
    int it = 0, j, num, input;

    scanf("%i", &input);
    int *output = (int *) malloc(sizeof(int) * input);

    output[it] = 2;
    printf("%i ", output[it]);

    for (it++, num = 3; it < input; num += 2) {
        int is_prime = 1;
        for (j = 3; j < num / 2; j += 2) {
            if (num % j == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime == 1) {
            output[it] = num;
            printf("%i ", output[it]);
            it++;
        }
    }
    printf("\n");

    free(output);
    return 0;
}
