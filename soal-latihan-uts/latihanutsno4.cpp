#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main()
{
    // deklarasi
    int angka;

    system("cls");
    printf("Program mengecek angka ganjil/genap");

    // input data
    printf("\nMasukkan sebuah angka : ");
    scanf("%d",&angka);

    // proses & output
    // menggunakan if
    if(angka%2==1){
        printf("\nAngka adalah GANJIL");
    }
    if(angka%2==0){
        printf("\nAngka adalah GENAP");
    }

    // menggunakan switch
    switch(angka%2){
        case 1:
            printf("\nAngka adalah GANJIL");
        case 0:
            printf("\nAngka adalah GENAP");
    }


    getch();
    return 0;
}