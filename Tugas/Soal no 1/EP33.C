#include <stdio.h>
#include <conio.h>
#define Tahun 365
#define Bulan 30
void main()
{
 int HK;
 int TAHUN, BULAN;

 clrscr();

 printf("Menghitung Hari, Bulan, dan Tahun sebuah projek");
 printf("\n-----------------------------------------------");
 printf("\nMasukan hari kerja sebuah projek = "); scanf("%d",&HK);

 TAHUN = HK/Tahun;
 BULAN =  HK/Bulan;

 printf("\nHari yang dikerjakan sebuah projek selama = %d ", HK);
 printf("\nBulan yang dikerjakan sebuah projek selama = %d ", BULAN);
 printf("\nTahun yang dikerjakan sebuah projek selama = %d ", TAHUN);

 getch();
}
