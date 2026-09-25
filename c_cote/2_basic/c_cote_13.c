// 부분 문자열인지 확인하기
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


int solution(const char* my_string, const char* target) {
    
    char * result = strstr(my_string, target);
    
    return result == NULL ? 0 : 1;
    
}