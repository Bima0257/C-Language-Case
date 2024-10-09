#include <stdio.h>
int main()
{
    int decimal[] = {10, 11, 12, 13, 14, 15};
    for (int i = 0; i < 6; i++)
    {
        printf("%x", decimal[i]);
    }

    return 0;
}
