// 길이에 따른 연산

// 정수가 담긴 리스트 num_list가 주어질 때,
// 리스트의 길이가 11 이상이면 리스트에 있는 모든 원소의 합을 10 이하이면 모든 원소의 곱을 return하도록 solution 함수를 완성해주세요.


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int num_list[], size_t num_list_len) {
    
    unsigned int result = 0;
    
    if (num_list_len >= 11) {
        for (int i = 0; i < num_list_len; ++i) {
            result += num_list[i];
        }
    } else {
        result = 1;
        for (int i = 0; i < num_list_len; ++i) {
            result *= num_list[i];
        }
    }
    
    return result;
}