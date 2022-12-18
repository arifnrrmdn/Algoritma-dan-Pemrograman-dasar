#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main()
{
    // deklarasi
    int i;

    system("cls");
    
    // proses
    for(i=1;i<=1024;i=i*2){
        printf("%d ",i);
    }

    getch();
    return 0;
}