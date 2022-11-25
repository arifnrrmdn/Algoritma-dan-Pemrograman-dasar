#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    // deklarasi
    int a, b, data, hasil_jml, total;

    system("cls");

    data = 2;
    total = 0;

    // proses
    for(a = 10; a >= data; a -= 2){
        hasil_jml = 0;
        for(b = 10; b>=a; b-=2){
            printf("%d",b);
            hasil_jml += b;
            printf(" + ");
        }
        total += hasil_jml;
        printf(" = %d", hasil_jml);
        printf("\n");
    }

    getch();
    return 0;
}