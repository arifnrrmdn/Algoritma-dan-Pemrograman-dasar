#include <stdio.h>
#include <conio.h>
main()
{
 /*deklarasi*/
 int pilih, sum1=0, sum2=0, sum3=0, sum4=0, sum5=0, total;

 clrscr();

 /*input data*/
 printf("\n DAFTAR MENU MAKANAN \n");
 printf("==========================");
 printf("\nPilih no menu di bawah ini \n");
 printf("1. Ayam Bakar \n");
 printf("2. Ayam Serundeng \n");
 printf("3. Ikan Bakar \n");
 printf("4. Pecel Lele \n");
 printf("5. Nasi \n");
 printf("0. Selesai dan bayar\n\n");
 do
 {
  printf("Pilih : "); scanf("%i",&pilih);
  if (pilih==1)
  {
   printf("Harga Ayam Bakar Rp. 13.000,- \n");
     sum1 =+ 13000;
  }
  else if (pilih==2)
  {
   printf("Harga Ayam Serundeng Rp. 13.000,- \n");
     sum2 =+ 13000;
  }
  else if (pilih==3)
  {
   printf("Harga Ikan Bakar Rp. 10.000,- \n");
     sum3 =+ 10000;
  }
  else if (pilih==4)
  {
   printf("Harga Pecel Lele Rp. 7.000,- \n");
     sum4 =+ 7000;
  }
  else if (pilih==5)
  {
   printf("Harga Nasi Rp. 4.000,- \n");
     sum5 =+ 4000;
  }
  else if (pilih==0)
  {
   continue;
  }
}
  while (pilih!= 0);
  printf("Selesai \n");

 /*proses data*/
 total = sum1+sum2+sum3+sum4+sum5;

 /*output data*/
 printf("Total bayar = Rp. %d", total);

 getch();
 return 0;
}
