#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char palavra1[50] = {"biriri"};
    char palavra2[50] = {"barara"};

    printf("\nAntes:\npalavra 1: %s\npalavra2: %s\n", palavra1, palavra2);

    strcpy(palavra2, palavra1);

    printf("\nDepois:\npalavra 1: %s\npalavra2: %s\n", palavra1, palavra2);

    return 0;
}