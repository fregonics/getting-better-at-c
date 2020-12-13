#include <stdio.h>
#include "functions.h"

int main(int argc, char *argv[]) {
    int number, result;
    
    printf("Type an integer number:\n");
    scanf("%d", &number);

    result = multiply_by_3(number);
    
    printf("Result is %d", result);
    return 0;
}