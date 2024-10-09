#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, magicNumber;
    srand(time(NULL));
    magicNumber = rand() % 10; /*rentang 0..9*/
    for (;;)
    {
        printf("Tebak Angka (0..9):");
        scanf("%d,&n");
        if (n > magicNumber)
        {
            printf("Tebakan Anda Masih Lebih besar.\n\n");
        }
        else if (n < magicNumber)
        {
            printf("Tebakan Anda Masih Lebih Kecil.\n\n");
        }
        else
        {
            break;
        }
    }
    printf("Selamat!Tebakan Anda Benar.");
    return 0;
}