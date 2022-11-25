#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    // deklarasi
    int bulan,uang;
    float bunga;

    system("cls");

    // insialisasi
    uang = 1000000;
    bulan = 1;

    // proses
    while(bulan <= 10){
        bunga = uang * 0.02;
        uang = uang + bunga;
        bulan++;
    }
    
    bulan = bulan - 1;
    // output
    printf("Setelah %d total uang menjadi %d\n", bulan, uang);

    getch();
    return 0;
}