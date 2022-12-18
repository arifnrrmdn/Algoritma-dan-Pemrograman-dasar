#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    // 10 20 30 40 50 60 70 80 90 100

    // deklarasi
    int i;

    system("cls");

    // proses
    for(i = 10; i <= 100; i += 10){
        printf("%d ", i);
    }

    getch();
    return 0;
}