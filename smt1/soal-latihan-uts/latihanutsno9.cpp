#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main()
{

    // deklarasi
    int i;

    system("cls");

    // proses
    for(i=100;i>=55;i=i-5){
        printf("%d ",i);
    }

    getch();
    return 0;
}