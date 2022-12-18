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
 printf("1. Nasi Goreng Ati Ampela \n");
 printf("2. Nasi Goreng Maut \n");
 printf("3. Nasi Goreng Pete \n");
 printf("4. Nasi Goreng Bakso \n");
 printf("5. Nasi Goreng Sosis \n");
 printf("0. Selesai dan bayar\n\n");

 do
 {
  printf("Pilih : "); scanf("%i",&pilih);
  if (pilih==1)
  {
   printf("Harga Nasi Goreng Ati Ampela Rp. 16.000,- \n");
     sum1 =+ 16000;
  }
  else if (pilih==2)
  {
   printf("Harga Nasi Goreng Maut Rp. 16.000,- \n");
     sum2 =+ 16000;
  }
  else if (pilih==3)
  {
   printf("Harga Nasi Goreng Pete Rp. 18.000,- \n");
     sum3 =+ 18000;
  }
  else if (pilih==4)
  {
   printf("Harga Nasi Goreng Bakso Rp. 15.000,- \n");
     sum4 =+ 15000;
  }
  else if (pilih==5)
  {
   printf("Harga Nasi Goreng Rp. 15.000,- \n");
     sum5 =+ 15000;
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
