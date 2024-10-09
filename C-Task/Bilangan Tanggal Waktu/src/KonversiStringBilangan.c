#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hasil Konversi atoi (): %d\n", atoi("12345"));
    printf("Hasil Konversi atol (): %ld\n", atol("2147483647"));
    printf("Hasil Konversi atoll (): %lld\n", atoll("9223372036854775897"));
    printf("Hasil Konversi atof (): %lf\n", atof("12345.6789"));
    return 0;
}