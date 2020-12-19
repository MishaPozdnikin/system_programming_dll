#include "lab6.hpp"

#include <stdio.h>

void InputFirstWord(char *dest, const int size) {
    printf("Enter first word: ");
    fgets(dest, size, stdin);
}

void InputSecondWord(char *dest, const int size) {
    printf("Enter second word: ");
    fgets(dest, size, stdin);
}

int Calculate(const char *first_word, const char *second_word, const int length) {
    int count = 0;
    for(size_t i = 0; i < length; ++i) {
        if(first_word[i] == second_word[i]) {
            ++count;
        }
    }
    return count;
}