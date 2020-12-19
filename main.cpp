#include <stdio.h>
#include "MyLib/lab6.hpp"

int main() {
    char str1[40];
    InputFirstWord(str1, 40);
    printf("You entered: %s\n", str1);
    char str2[40];
    InputSecondWord(str2, 40);
    printf("You entered: %s\n", str2);
    printf("result = %d\n", Calculate(str1, str2, 5));
    return 0;
}