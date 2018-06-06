#include <stdio.h>


int main(int argc, char const *argv[])
{
    int i, j, input;

    scanf("%i", &input);
    int *output = (int *) malloc(sizeof(int) * input);

    for(i = 0; i < input; ++i) {
        output[i] = 1;
        for(j = 0; j < i; ++j) {
            output[i] *= output[j];
        }
        output[i]++;
        printf("%i ", output[i]);
    }
    printf("\n");

    free(output);
    return 0;
}
