#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int kode, harga, diskon, persen_diskon, harga_diskon;
    char jenis;
    system("cls");

    // input
    printf("Kode = "); scanf("%d", &kode); fflush(stdin);
    printf("Jenis = "); jenis = getchar(); fflush(stdin);
    printf("Harga = "); scanf("%d", &harga); fflush(stdin);

    // proses
    switch(jenis){
        case 'A':
            persen_diskon = 10;
            diskon = harga * 10 / 100;
            harga_diskon = harga - diskon;
            break;
        case 'B':
            persen_diskon = 15;
            diskon = harga * 15 / 100;
            harga_diskon = harga - diskon;
            break;
        case 'C':
            persen_diskon = 20;
            diskon = harga * 20 / 100;
            harga_diskon = harga - diskon;
            break;
    }

    // output
    printf("Jenis barang %c mendapat diskon = %d%, Harga setelah diskon = %d", jenis,persen_diskon,harga_diskon);

    getch();
    return 0;
}