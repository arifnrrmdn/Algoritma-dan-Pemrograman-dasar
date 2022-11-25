#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    // deklarasi
    int a, b, data, hasil_jml, total;

    system("cls");

    // input
    printf("input data = "); scanf("%d", &data);

    total = 0;

    // proses
    for(a = 1; a <= data; a++){
        hasil_jml = 0;
        for(b = 1; b<=a; b++){
            hasil_jml += b;
            printf("%d",b);
        }
        total += hasil_jml;
        printf(" = %d", hasil_jml);
        printf("\n");
    }

    // output
    printf("Total = %d", total);

    getch();
    return 0;
}