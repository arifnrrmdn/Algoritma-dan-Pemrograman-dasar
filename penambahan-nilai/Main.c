#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int tipe_mobil,harga_perhari, lama_rental, harga_rental,uang_makan,perjam;
    char jasa_sopir, overtime,lama;
    system("cls");

    puts("RENTAL MOBIL EXCELLENT");
    puts("Tipe Mobil   Harga per 12 Jam");
    puts("1.Minibus     Rp.350.000");
    puts("2.Sedan       Rp.400.000");
    puts("3.MPV         Rp.450.000");
    puts("4.SUV         Rp.550.000");

    uang_makan = 0;

    printf("\nMasukan tipe mobil : "); scanf("%d",&tipe_mobil); fflush(stdin);
    if(tipe_mobil == 1){
        prinf("per12jam atau perhari (j/p) : "); scanf("%c",&lama);
        switch(lama){
            case 'j':
                    if(perjam <= 12){
                        harga_rental = (harga_rental)

        }
                printf("Jasa sopir y/n : "); jasa_sopir = getchar(); fflush(stdin);


        }
        



        // harga_perhari = 350000 * 2;
        // printf("Lama rental (hari) : "); scanf("%d", &lama_rental); fflush(stdin);
        // printf("Jasa sopir y/n : "); jasa_sopir = getchar(); fflush(stdin);
        // if(jasa_sopir == 'y'){
        //     uang_makan = 50000;
        // }

        // harga_rental = (harga_perhari + uang_makan) * lama_rental; 

        // printf("Total = %d", harga_rental);

    }else if(tipe_mobil == 2){

    }else if(tipe_mobil == 3){

    }else if (tipe_mobil == 4){

    }else{
        printf("Input yang anda masukan salah!");
    }

    getch();
    return 0;
}