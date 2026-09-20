#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *pointer_string[] = {"ksK", "oSSSo", "SKsKs"};

    size_t length = sizeof(pointer_string) / sizeof(pointer_string[0]);

    printf("length : %zu\n", length);

    char **pp = malloc(sizeof(char *) * length);

    for (size_t i = 0; i < length; ++i) {

        size_t one_length = strlen(pointer_string[i]);

        pp[i] = malloc(one_length + 1);

        strcpy(pp[i], pointer_string[i]);

        for (size_t j = 0; j < one_length; ++j) {

            if (i % 2 == 0) {
                // 짝수 인덱스 → 소문자
                pp[i][j] = tolower(pp[i][j]);
            }
            else {
                // 홀수 인덱스 → 대문자
                pp[i][j] = toupper(pp[i][j]);
            }
        }
    }

    for (size_t i = 0; i < length; ++i) {
        printf("%s\n", pp[i]);
    }

    return 0;
}