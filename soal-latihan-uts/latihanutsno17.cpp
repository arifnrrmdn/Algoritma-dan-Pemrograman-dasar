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

    // puts("1                 = 1");
    // puts("12                = 3");
    // puts("123               = 6");
    // puts("1234              = 10");
    // puts("12345             = 15");
    // puts("123456            = 21");
    // puts("1234567           = 28");
    // puts("12345678          = 36");
    // puts("123456789         = 45");
    // puts("12345678910       = 55");
    // puts("Total             = 220");

    getch();
    return 0;
}