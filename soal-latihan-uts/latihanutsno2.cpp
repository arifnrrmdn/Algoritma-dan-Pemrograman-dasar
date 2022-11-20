
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main()
{
    // deklarasi
    int celcius, fahrenheit;
    float reamur;

    system("cls");
    printf("Program Konversi suhu");

    // input
    printf("\n\nMasukkan suhu dalam satuan celcius : ");
    scanf("%d",&celcius);
    
    // proses
    fahrenheit=celcius+273;
    reamur=(float)4/5*celcius+32;

    // output
    printf("\nNilai suhu adalah %d Fahrenheit",fahrenheit);
    printf("\nNilai suhu adalah %.2f Reamur",reamur);
    
    getch(); 
    return 0;
}