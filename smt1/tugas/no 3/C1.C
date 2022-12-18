#include <stdio.h>
#include <conio.h>
#define HBB 1000
#define HML 2000
void main()
{
 /*deklarasi*/
 int JBB, JML;
 float Bayar,Total;

 clrscr();
 printf("==========================");
 printf("\3 \3 \3 WARUNG CEU MUMUN \3 \3 \3");
 printf("==========================");

 printf("Menjual Bala bala dan Molen");

 /* input data */
 printf("\nJumlah beli bala bala = "); scanf("%d",&JBB);
 printf("Jumlah beli molen = "); scanf("%d",&JML);

 /* proses data */
 Bayar = JBB*HBB + JML*HML;
 Total = (float) Bayar/15500;

 /* output data */
 printf("Jumlah uang yang harus dibayar %.2f Dollar",Total);

 getch();

}
