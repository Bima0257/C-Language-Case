#include <stdio.h>
#include <time.h>

int main()
{
    time_t t;
    struct tm now;
    t = time(NULL);
    now = *localtime(&t);
    printf("Tanggal dan Waktu saat ini\n");
    printf("Tanggal :\n%d\n", now.tm_mday);
    printf("Bulan :\n%d\n", now.tm_mon + 1);
    printf("Tahun :\n%d\n", now.tm_year + 1900);
    printf("Jam :\n%d\n", now.tm_hour);
    printf("Menit :\n%d\n", now.tm_min);
    printf("Detik :\n%d\n", now.tm_sec);
    return 0;
}