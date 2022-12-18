#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int jam_masuk,jam_keluar,lama;
    char ulang;

    do{
        system("cls");
        printf("Jam masuk = "); scanf("%d",&jam_masuk);
        printf("Jam keluar = "); scanf("%d",&jam_keluar);

        if(jam_keluar >= jam_masuk){
            lama = jam_keluar - jam_masuk;
        }else{
            lama = (12 - jam_masuk) + jam_keluar;
        }

        printf("Lama bekerja %d jam", lama);

        printf("\nTambah data lagi? y/n = "); scanf("%s",&ulang); fflush(stdin);

    }while (ulang == 'y' || ulang == 'Y');
    
}