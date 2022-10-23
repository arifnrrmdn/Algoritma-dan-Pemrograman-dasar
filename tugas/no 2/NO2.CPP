#include <stdio.h>
#include <conio.h>
main()
{
 /*deklarasi*/
 int panjang, lebar, luas;

 clrscr();

 /*input data*/
 printf("Masukan panjang : "); scanf("%d", &panjang);
 printf("Masukan lebar : "); scanf("%d", &lebar);

 /*proses data*/
 luas = panjang * lebar;

 /*output data*/
 printf("\nLuas persegi panjang adalah %d\n", luas);

 getch();
 return 0;
}