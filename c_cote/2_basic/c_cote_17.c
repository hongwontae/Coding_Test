// 꼬리 문자열

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


char* solution(const char* str_list[],
               size_t str_list_len, const char* ex) 
{
    size_t total_length = 0;
    
    for (int i = 0; i < str_list_len; ++i) {
        if (strstr(str_list[i], ex) == NULL) {
            total_length += strlen(str_list[i]);
        } else {
            continue;
        }
    }
    
    // p -> 11 p[10]
    char * p = (char *) malloc (sizeof(char) * (total_length+1));
    
    int index = 0;
    
    for (int i = 0; i < str_list_len; ++i) {
        if (strstr(str_list[i], ex) == NULL) {
            for (int j = 0; str_list[i][j] != '\0'; ++j) {
                p[index] = str_list[i][j];
                ++index;
            }
        } 
    }

    p[total_length] = '\0';
    
    
    return p;
    
    
    
}