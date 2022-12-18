#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    // deklarasi & insialisasi
    int a=2, b=20, n;

    system("cls");
    // proses
    for(a = a; a<=20; a+=2)
    {
        printf("%d ", a);
        if(a<b){
            printf("+ ");
        }
    }

    printf("= ");

    // proses
    n = b / 2;
    n = n * (n + 1);

    // output
    printf("%d", n);


    getch();
    return 0;
}