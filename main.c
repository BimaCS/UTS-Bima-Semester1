#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void main()
{

    int ulang,harga,menu,menu_mkn,menu_mnm,jml,total;
    system("color e");

    start :
    printf("================================================\n");
    printf("|$|     BBBBB       I M       M    AAA       |$|\n");
    printf("|$|     B    B      I MM     MM   A   A      |$|\n");
    printf("|$|     B    B      I M M   M M   A   A      |$|\n");
    printf("|$|     B   B       I M  M M  M  A AAA A     |$|\n");
    printf("|$|     B   BBBBB   I M   M   M  A     A     |$|\n");
    printf("|$|     B        B  I M       M A       A    |$|\n");
    printf("|$|     B        B  I M       M A       A    |$|\n");
    printf("|$|     BBBBBBBBB   I M       M A       A    |$|\n");
    printf("================================================\n\n");

    printf("================================================\n");
    printf("||<<<  Selamat Datang di RESTORAN BIMANIS  >>>||\n");
    printf("||============================================||\n");
    printf("||            >>> Menu Pesanan <<<            ||\n");
    printf("||--------------------------------------------||\n");
    printf("||1. Makanan                                  ||\n");
    printf("||2. Minuman                                  ||\n");
    printf("||Pilih Menu Pesanan : ");
    scanf ("%d",&menu);
     switch(menu)
     {
        case 1:{

            printf("||============================================||\n");
            printf("||<<<<<<<     Daftar Menu Makanan     >>>>>>>>||\n");
            printf("||============================================||\n");
            printf("||                                            ||\n");
            printf("||  1. Nasi Goreng              Rp 12000      ||\n");
            printf("||  2. Nasi Kebuli              Rp 15000      ||\n");
            printf("||  3. Ayam Geprek              Rp 10000      ||\n");
            printf("||  4. Bebek Goreng             Rp 9000       ||\n");
            printf("||  5. Mie Goreng Pedas         Rp 7000       ||\n");
            printf("||                                            ||\n");
            printf("||============================================||\n");
            printf("||Pilih Menu Makanan : ");scanf("%d",&menu_mkn);

                switch(menu_mkn)
                {
                    case 1:
                        {
                            printf("||============================================||\n");
                            printf("||             +_+ NASI GORENG +_+            ||\n");
                            printf("||============================================||\n");
                            printf("||Masukkan Jumlah Pesanan Nasi Goreng : ");
                            scanf("%d",&jml);
                            harga=12000;
                            total=harga*jml;
                            printf("||============================================||\n");
                            printf("||= = = > Total Pembayaran : Rp. %d\n",total);
                            printf("||============================================||\n");
                            printf ("||1. Pesan Lagi \n");
                            printf ("||2. Selesai    \n");
                            printf ("||Pilih :");
                            scanf ("%d",&ulang);
                            system("cls");
                            if (ulang==1)
                            goto start;
                            else {
                                printf ("||==========================================||");
                                printf ("\n||------------------------------------------||");
                                printf ("\n||    >>> Terima Kasih Atas Pesananya <<<   ||");
                                printf ("\n||------------------------------------------||");
                                printf ("\n||==========================================||");
                            }

                            return 0;
                            break;}
                    case 2:
                            {
                            printf("||============================================||\n");
                            printf("||             +_+ NASI KEBULI +_+            ||\n");
                            printf("||============================================||\n");
                            printf("||Masukkan Jumlah Pesanan Nasi Kebuli : ");
                            scanf("%d",&jml);
                            harga=15000;
                            total=harga*jml;
                            printf("||============================================||\n");
                            printf("||= = = > Total Pembayaran : Rp. %d\n",total);
                            printf("||============================================||\n");
                            printf ("||1. Pesan Lagi \n");
                            printf ("||2. Selesai \n");
                            printf ("||Pilih :");
                            scanf ("%d",&ulang);
                            system("cls");
                            if (ulang==1)
                            goto start;
                            else{
                                printf ("||==========================================||");
                                printf ("\n||------------------------------------------||");
                                printf ("\n||    >>> Terima Kasih Atas Pesananya <<<   ||");
                                printf ("\n||------------------------------------------||");
                                printf ("\n||==========================================||");
                                }
                            return 0;
                            break;}
                    case 3:
                        {
                            printf("||============================================||\n");
                            printf("||             +_+ AYAM GEPREK +_+            ||\n");
                            printf("||============================================||\n");
                            printf("||Masukkan Jumlah Pesanan Ayam Geprek : ");
                            scanf("%d",&jml);
                            harga=10000;
                            total=harga*jml;
                            printf("||============================================||\n");
                            printf("||= = = > Total Pembayaran : Rp. %d\n",total);
                            printf("||============================================||\n");
                            printf ("||1. Pesan Lagi \n");
                            printf ("||2. Selesai \n");
                            printf ("||Pilih :");
                            scanf ("%d",&ulang);
                            system("cls");
                            if (ulang==1)
                            goto start;
                            else{
                                printf ("||==========================================||");
                                printf ("\n||------------------------------------------||");
                                printf ("\n||    >>> Terima Kasih Atas Pesananya <<<   ||");
                                printf ("\n||------------------------------------------||");
                                printf ("\n||==========================================||");
                            }
                            return 0;
                            break;}
                    case 4:
                            {
                            printf("||============================================||\n");
                            printf("||            +_+ BEBEK GORENG +_+            ||\n");
                            printf("||============================================||\n");
                            printf("||Masukkan Jumlah Pesanan Bebek Goreng : ");
                            scanf("%d",&jml);
                            harga=9000;
                            total=harga*jml;
                            printf("||============================================||\n");
                            printf("||= = = > Total Pembayaran : Rp. %d\n",total);
                            printf("||============================================||\n");
                            printf ("||1. Pesan Lagi \n");
                            printf ("||2. Selesai \n");
                            printf ("||Pilih :");
                            scanf ("%d",&ulang);
                            system("cls");
                            if (ulang==1)
                            goto start;
                            else{
                                printf ("||==========================================||");
                                printf ("\n||------------------------------------------||");
                                printf ("\n||    >>> Terima Kasih Atas Pesananya <<<   ||");
                                printf ("\n||------------------------------------------||");
                                printf ("\n||==========================================||");
                            }
                            return 0;
                            break;}
                    case 5:
                            {
                            printf("||============================================||\n");
                            printf("||             +_+ MIE GORENG +_+             ||\n");
                            printf("||============================================||\n");
                            printf("||Masukkan Jumlah Pesanan Mie Goreng Pedas : ");
                            scanf("%d",&jml);
                            harga=7000;
                            total=harga*jml;
                            printf("||============================================||\n");
                            printf("||= = = > Total Pembayaran : Rp. %d\n",total);
                            printf("||============================================||\n");
                            printf ("||1. Pesan Kembali \n");
                            printf ("||2. Selesai \n");
                            printf ("||Pilih :");
                            scanf ("%d",&ulang);
                            system("cls");
                            if (ulang==1)
                            goto start;
                            else{
                                printf ("||==========================================||");
                                printf ("\n||------------------------------------------||");
                                printf ("\n||    >>> Terima Kasih Atas Pesananya <<<   ||");
                                printf ("\n||------------------------------------------||");
                                printf ("\n||==========================================||");
                            }
                            return 0;
                            break;}
                    default:
                            {
                            printf ("||===========================================|||");
                            printf ("\n||-------------------------------------------|||");
                            printf ("\n||   !!! Pilihan Pesanan Anda Tidak Ada !!!  |||");
                            printf ("\n||-------------------------------------------|||");
                            printf ("\n||===========================================|||\n");
                            printf ("||1. Pesan Lagi \n");
                            printf ("||2. Selesai \n");
                            printf ("||Pilih :");
                            scanf ("%d",&ulang);
                            system("cls");
                            if (ulang==1)
                            goto start;
                            else{
                                printf ("||==========================================||");
                                printf ("\n||------------------------------------------||");
                                printf ("\n||    >>> Terima Kasih Atas Pesananya <<<   ||");
                                printf ("\n||------------------------------------------||");
                                printf ("\n||==========================================||");
                                }
                            return 0;
                            }

                }
                }
        case 2:{

            printf("||============================================||\n");
            printf("||<<<<<<<     Daftar Menu Minuman     >>>>>>>>||\n");
            printf("||============================================||\n");
            printf("||                                            ||\n");
            printf("||  1. Es Teh                   Rp 4000       ||\n");
            printf("||  2. Teh Hangat               Rp 4000       ||\n");
            printf("||  3. Es Jeruk                 Rp 7000       ||\n");
            printf("||  4. Jeruk Hangat             Rp 7000       ||\n");
            printf("||  5. Jus Buah                 Rp 10000      ||\n");
            printf("||                                            ||\n");
            printf("||============================================||\n");
            printf("||Pilih Menu Minuman : ");scanf("%d",&menu_mnm);

                switch(menu_mnm)
                {
                    case 1:
                            {
                            printf("||============================================||\n");
                            printf("||               +_+ ES TEH +_+               ||\n");
                            printf("||============================================||\n");
                            printf("||Masukkan Jumlah Pesanan Es Teh : ");
                            scanf("%d",&jml);
                            harga=4000;
                            total=harga*jml;
                            printf("||============================================||\n");
                            printf("||= = = > Total Pembayaran : Rp. %d\n",total);
                            printf("||============================================||\n");
                            printf ("||1. Pesan Lagi \n");
                            printf ("||2. Selesai    \n");
                            printf ("||Pilih :");
                            scanf ("%d",&ulang);
                            system("cls");
                            if (ulang==1)
                            goto start;
                            else {
                                printf ("||==========================================||");
                                printf ("\n||------------------------------------------||");
                                printf ("\n||    >>> Terima Kasih Atas Pesananya <<<   ||");
                                printf ("\n||------------------------------------------||");
                                printf ("\n||==========================================||");
                                }
                            return 0;
                            break;}
                    case 2:
                            {
                            printf("||============================================||\n");
                            printf("||             +_+ TEH HANGAT +_+             ||\n");
                            printf("||============================================||\n");
                            printf("||Masukkan Jumlah Pesanan Teh Hangat : ");
                            scanf("%d",&jml);
                            harga=4000;
                            total=harga*jml;
                            printf("||============================================||\n");
                            printf("||= = = > Total Pembayaran : Rp. %d\n",total);
                            printf("||============================================||\n");
                            printf ("||1. Pesan Lagi \n");
                            printf ("||2. Selesai \n");
                            printf ("||Pilih :");
                            scanf ("%d",&ulang);
                            system("cls");
                            if (ulang==1)
                            goto start;
                            else{
                                printf ("||==========================================||");
                                printf ("\n||------------------------------------------||");
                                printf ("\n||    >>> Terima Kasih Atas Pesananya <<<   ||");
                                printf ("\n||------------------------------------------||");
                                printf ("\n||==========================================||");
                                }
                            return 0;
                            break;}
                    case 3:
                            {
                            printf("||============================================||\n");
                            printf("||              +_+ ES JERUK +_+              ||\n");
                            printf("||============================================||\n");
                            printf("||Masukkan Jumlah Pesanan Es Jeruk : ");
                            scanf("%d",&jml);
                            harga=7000;
                            total=harga*jml;
                            printf("||============================================||\n");
                            printf("||= = = > Total Pembayaran : Rp. %d\n",total);
                            printf("||============================================||\n");
                            printf ("||1. Pesan Lagi \n");
                            printf ("||2. Selesai \n");
                            printf ("||Pilih :");
                            scanf ("%d",&ulang);
                            system("cls");
                            if (ulang==1)
                            goto start;
                            else{
                                printf ("||==========================================||");
                                printf ("\n||------------------------------------------||");
                                printf ("\n||    >>> Terima Kasih Atas Pesananya <<<   ||");
                                printf ("\n||------------------------------------------||");
                                printf ("\n||==========================================||");
                                }
                            return 0;
                            break;}
                    case 4:
                            {
                            printf("||============================================||\n");
                            printf("||               +_+ JERUK HANGAT +_+         ||\n");
                            printf("||============================================||\n");
                            printf("||Masukkan Jumlah Pesanan Jeruk Hangat : ");
                            scanf("%d",&jml);
                            harga=7000;
                            total=harga*jml;
                            printf("||============================================||\n");
                            printf("||= = = > Total Pembayaran : Rp. %d\n",total);
                            printf("||============================================||\n");
                            printf ("||1. Pesan Lagi \n");
                            printf ("||2. Selesai \n");
                            printf ("||Pilih :");
                            scanf ("%d",&ulang);
                            system("cls");
                            if (ulang==1)
                            goto start;
                            else{
                                printf ("||==========================================||");
                                printf ("\n||------------------------------------------||");
                                printf ("\n||    >>> Terima Kasih Atas Pesananya <<<   ||");
                                printf ("\n||------------------------------------------||");
                                printf ("\n||==========================================||");
                                }
                            return 0;
                            break;}
                    case 5:
                            {
                            printf("||============================================||\n");
                            printf("||              +_+ JUS BUAH +_+              ||\n");
                            printf("||============================================||\n");
                            printf("||Masukkan Jumlah Pesanan Jus Buah : ");
                            scanf("%d",&jml);
                            harga=10000;
                            total=harga*jml;
                            printf("||============================================||\n");
                            printf("||= = = > Total Pembayaran : Rp. %d\n",total);
                            printf("||============================================||\n");
                            printf ("||1. Pesan Lagi \n");
                            printf ("||2. Selesai \n");
                            printf ("||Pilih :");
                            scanf ("%d",&ulang);
                            system("cls");
                            if (ulang==1)
                            goto start;
                            else{
                                printf ("||==========================================||");
                                printf ("\n||------------------------------------------||");
                                printf ("\n||    >>> Terima Kasih Atas Pesananya <<<   ||");
                                printf ("\n||------------------------------------------||");
                                printf ("\n||==========================================||");
                                }
                            return 0;
                            break;}
                    default:
                            {
                            printf ("||===========================================|||");
                            printf ("\n||-------------------------------------------|||");
                            printf ("\n||   !!! Pilihan Pesanan Anda Tidak Ada !!!  |||");
                            printf ("\n||-------------------------------------------|||");
                            printf ("\n||===========================================|||\n");
                            printf ("||1. Pesan Kembali \n");
                            printf ("||2. Selesai \n");
                            printf ("||Pilih :");
                            scanf ("%d",&ulang);
                            system("cls");
                            if (ulang==1)
                            goto start;
                            else{
                                printf ("||==========================================||");
                                printf ("\n||------------------------------------------||");
                                printf ("\n||    >>> Terima Kasih Atas Pesananya <<<   ||");
                                printf ("\n||------------------------------------------||");
                                printf ("\n||==========================================||");
                                }
                            return 0;
                            }

                        }
                default:
                        {
                        printf ("||===========================================|||");
                        printf ("\n||-------------------------------------------|||");
                        printf ("\n||   !!!! Maaf Pilihan Anda Tidak Ada !!!!   |||");
                        printf ("\n||-------------------------------------------|||");
                        printf ("\n||===========================================|||\n");
                        printf ("||1. Pesan Kembali \n");
                        printf ("||2. Selesai \n");
                        printf ("||Pilih :");
                        scanf ("%d",&ulang);
                        system("cls");
                        if (ulang==1)
                        goto start;
                        else{
                            printf ("||==========================================||");
                            printf ("\n||------------------------------------------||");
                            printf ("\n||    >>> Terima Kasih Atas Pesananya <<<   ||");
                            printf ("\n||------------------------------------------||");
                            printf ("\n||==========================================||");
                            }
                        return 0;
                        }
                }

                return 0;
     }
}
