#include <stdio.h>
#include <stdlib.h>

void banner()
{
    int pilih;
    printf(" $--------------------------------------------$\n");
    printf(" |       	SELAMAT DATANG                |\n");
    printf(" | 		      DI    	              |\n");
    printf(" | 	  ATM BANK ADRIANA NUSANTARA          |\n");
    printf(" $--------------------------------------------$\n");
    printf(" |                   WELCOME                  |\n");
    printf(" | 		       TO    	              |\n");
    printf(" |        ATM BANK ADRIANA NUSANTARA 	      |\n");
    printf(" $--------------------------------------------$\n\n\n");
}
int main()
{
    int saldo = 860000000, pin, rekening, keluar, transfer, rekeningTujuan, setor, nominal, pilih;
    system("cls");
    banner();
    printf("\n");
pin:
    printf("Silahkan Masukan Pin : ");
    scanf("%d", &pin);
    if (pin == 2424)
    {
    menu:
        system("cls");
        printf("Menu,\n");
        printf(" 1. Tarik Tunai\n");
        printf(" 2. Transfer\n");
        printf(" 3. Isi Saldo\n");
        printf(" 4. Cek Saldo\n");
        printf(" 5. Top Up\n");
        printf("Pilih : ");
        scanf("%d", &pilih);
        switch (pilih)
        {
        case 1://tarik tunai
            system("cls");
        case1:
            printf("Pilih nominal yang ingin anda ambil,\n");
            printf(" 1. 50000\n");
            printf(" 2. 100000\n");
            printf(" 3. 1000000\n");
            printf(" 4. 2500000\n");
            printf(" 5. Nominal Lain\n");
            printf("Pilih : ");
            scanf("%d", &nominal);
            if (nominal == 1)
                keluar = 50000;
            else if (nominal == 2)
                keluar = 100000;
            else if (nominal == 3)
                keluar = 150000;
            else if (nominal == 4)
            {
                system("cls");
            inputKeluar:
                printf("Masukan nominal yang ingin anda ambil (kelipatan 50000),\n");
                scanf("%d", &keluar);
                if (keluar % 50000 != 0)
                {
                    system("cls");
                    printf("Nominal yang anda masukan bukan kelipatan 50000\n\n");
                    goto inputKeluar;
                }
            }
            else
            {
                system("cls");
                printf("Pilihan Salah\nSilahkan Pilih kembali\n\n");
                goto case1;
            }
            if (keluar > saldo)
            {
                system("cls");
                printf("Transaksi Gagal\n");
                printf("Saldo Anda Tidak Mencukupi\n\n");
                goto konfirmasi;
            }
            else
            {
                system("cls");
                printf("Transaksi Berhasil!\n");
                saldo = saldo - keluar;
                printf("Sisa Saldo Anda,\n%d\n\n", saldo);
                goto konfirmasi;
            }
            break;
        case 2: //transfer
            system("cls");
            printf("Masukan nomor rekening yang anda tujuan,\n");
            scanf("%d", &rekeningTujuan);
            printf("Masukan nominal yang ingin anda transfer,\n");
            scanf("%d", &transfer);
            if (transfer > saldo)
            {
                system("cls");
                printf("Transaksi Gagal\n");
                printf("Saldo Anda Tidak Mencukupi\n\n");
                goto konfirmasi;
            }
            else
            {
                system("cls");
                printf("Transaksi Berhasil!\n");
                saldo = saldo - transfer;
                printf("Sisa Saldo Anda,\n%d\n\n", saldo);
                goto konfirmasi;
            }
            break;
        case 3://isi saldo
            system("cls");
            printf("Uang Yang Anda Masukan Harus Sesuai,\nDan Merupakan Kelipatan 50000\n\n");
        inputSetor:
            printf("Masukan Nominal Yang Ingin Anda Setor,\n");
            scanf("%d", &setor);
            if (setor % 50000 != 0)
            {
                system("cls");
                printf("Nominal Yang Anda Masukan Bukan Kelipatan 50000\n\n");
                goto inputSetor;
            }
            system("cls");
            printf("Transaksi Berhasil!\n");
            saldo = saldo + setor;
            printf("Total Saldo Anda Menjadi,\n%d\n\n", saldo);
            goto konfirmasi;
            break;
        case 4://cek saldo
            system("cls");
            printf("Saldo Anda Adalah,\n%d\n\n", saldo);
            goto konfirmasi;
            break;
        case 5://top up
   system("cls");
   printf("Top Up:\n\n");
   printf(" 1.Dana\n\n");
   printf(" 2.Gopay\n\n");
   printf(" 3.PLN\n\n");
   printf(" 4.OVO\n\n");
   printf(" 5.ShoopeePay\n\n");
   printf("Pilih : ");
            scanf("%d", &nominal); 
            {
                system("cls");
                printf("Masukkan Nominal:\n\n");
                scanf("%d", &nominal);
            }
            system("cls");
            printf("Top Up Berhasil!\n\n\n");
            printf("Top Up Successful!\n\n\n");
            saldo = saldo - nominal;
                printf("Sisa Saldo Anda,\n%d\n\n", saldo);
                goto konfirmasi;
            break;
        default:
            system("cls");
            printf("Pilihan Menu Salah,\nSilahkan Pilih Kembali\n\n");
            goto menu;
        }
    }
    else
    {
        system("cls");
        printf("Pin Salah\n\n");
        // Jika sudah 3 kali percobaan login dan masih gagal, keluar dari program
        printf("Too many failed attempts. ATM locked.\n");
		goto pin;
    }
konfirmasi:
    printf("Apakah anda ingin melakukan transaksi lain ?\n");
    printf(" 1. Ya\n");
    printf(" 2. Tidak\n");
    printf("Pilih : ");
    scanf("%d", &pilih);
    if (pilih == 1)
        goto menu;
    else if (pilih == 2)
        goto end;
    else
    {
        system("cls");
        printf("Pilihan Salah\nSilahkan pilih kembali\n\n");
        goto konfirmasi;
    }
end:
    system("cls");
    printf(" ~~~~~~~~~~~Terimakasih Telah Bertransaksi~~~~~~~~~~~\n");
 printf(" ~~~~~~~~~~~~~~~~~Di Bank Adriana Nusantara~~~~~~~~~~~~~~~~~\n\n");
    printf(" Tugas ATM sederhana Menggunakan Bahasa C\n");
    printf(" D\n");
    printf(" I\n");
    printf(" S\n");
    printf(" U\n");
    printf(" S\n");
    printf(" U\n");
    printf(" N\n\n");
    printf(" OLEH:\n");
    printf(" Nama : Syarifah Adriana\n");
    printf(" Nim : 12150522248\n");
    printf(" Kelas : 4.C\n");
    printf(" Disusun Untuk Memenuhi Tugas Mata Kuliah Algoritma Pemograman\n");
    printf(" Dosen Pengampu: Ibu Ewi Ismaredah, Mkom\n");
    printf(" Kakak Pembimbing : Bang Ahmad Zulfadli\n");
    printf(" =====================================================\n\n\n\n\n\n\n\n\n\n");
    
    return 0;
}
