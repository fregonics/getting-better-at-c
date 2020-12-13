#include <stdio.h>
#include </usr/include/math.h>

int main(int argc, char *argv[]) {
    double input, result;

    printf("\n");
    scanf("%lf", &input);

    result = tan(input);
    printf("in %lf result = %lf\n", input, result);

    return 0;
}