#include <stdio.h>
#include <conio.h>

main()
{
 /*deklarasi*/
 int cm; float m, inchi;

 clrscr();

 /*input data*/
 printf("Masukan nilai cm : "); scanf("%d",&cm);

 /*proses data*/
 m = (float) cm/100;
 inchi = (float) cm/2.54;

 /*output data*/
 printf("\nMaka hasil konversi ke M = %.2f", m);
 printf("\nMaka hasil konversi ke inchi = %.4f", inchi);

 getch();
 return 0;
}