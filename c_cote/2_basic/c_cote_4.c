#include <stdio.h>
#include <string.h>


int main (void) {

    char string_number_set [] = "12345";

    int acc = 0;

    for (int i = 0; string_number_set[i] != '\0'; ++i) {
        acc+=string_number_set[i] - '0';
    }

    printf("acc : %d\n", acc);



    return 0;

}