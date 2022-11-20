#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main()
{
    // deklarasi
    int panjang,lebar,luas,keliling;

    system("cls");
    printf("Menghitung panjang dan lebar persegi panjang");

    // input
    printf("\npanjang persegi panjang : ");
    scanf("%d",&panjang);
    printf("lebar persegi panjang : ");
    scanf("%d",&lebar);

    // proses
    luas = panjang*lebar;
    // keliling = 2*panjang + 2*lebar;
    keliling = 2 * (panjang + lebar);

    // output
    printf("\nLuas persegi panjang = %d",luas);
    printf("\nKeliling persegi panjang = %d",keliling);

    getch(); 
    return 0;
}