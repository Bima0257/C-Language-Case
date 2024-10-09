#include <stdio.h>
void bin (long n){
    if (n)
    {
        bin(n >> 1);
        printf("%c", (n & 1) ? '1' : '0');
    }
    
}
int main (){
    for (int i = 1; i < 20; i++)
    {
        printf("%2d=0b", i);
        bin(i);
        printf("\n");
    }
    return 0;
}