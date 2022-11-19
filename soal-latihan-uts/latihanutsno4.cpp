#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main()
{
    int angka;

    system("cls");
    printf("Masukkan sebuah angka : ");
    scanf("%d",&angka);

    if(angka%2==1){
        printf("\nAngka adalah GANJIL");
    }
    if(angka%2==0){
        printf("\nAngka adalah GENAP");
    }

    getch();
    return 0;
}