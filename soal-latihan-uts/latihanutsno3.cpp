#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    // deklarasi
    int sisi_alas, sisi_tinggi, sisi_miring;

    system("cls");

    // input sisi_alas dan sisi_tinggi
    printf("masukan alas = "); scanf("%d", &sisi_alas);
    printf("masukan tinggi = "); scanf("%d", &sisi_tinggi);

    // proses
    sisi_miring = ((sisi_alas * sisi_alas) + (sisi_tinggi * sisi_tinggi));

    // output
    printf("sisi miring adalah = %d", sisi_miring);

    getch();
    return 0;
}