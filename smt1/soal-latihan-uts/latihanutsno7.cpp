#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    // deklarasi
    int jam_masuk, jam_keluar, lama, biaya;

    system("cls");

    // input jam_masuk & jam keluar
    printf("jam masuk = "); scanf("%d", &jam_masuk);
    printf("jam keluar = "); scanf("%d", &jam_keluar);

    // proses
    if(jam_keluar >= jam_masuk){
        lama = jam_keluar - jam_masuk;
    }else{
        lama = (12-jam_masuk) + jam_keluar;
    }

    // proses
    if(lama > 2){
        biaya = 2000 + (lama - 2) * 500;
    }else{
        biaya = 2000;
    }

    // output
    printf("\nLama %d Jam\n", lama);
    printf("Biaya = %d", biaya);

    getch();
    return 0;
}