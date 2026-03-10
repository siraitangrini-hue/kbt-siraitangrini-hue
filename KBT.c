#include <stdio.h>
#include <string.h>

int main() {
    int pilihan_utama, pilihan_tujuan, pilihan_kelas;
    long harga_dasar = 0;
    long harga_total = 0;
    char nama_tujuan[50];
    char nama_kelas[20];

    printf("=======================================\n");
    printf("     Sistem Tiket Koperasi Bintang Tapanuli (KBT)\n");
    printf("=======================================\n");
    printf("Pilih rute perjalanan:\n");
    printf("1. Rute 1 (Parapat, Siantar, Tebing Tinggi, Medan)\n");
    printf("2. Rute 2 (Silangit, Siborong-borong, Tarutung)\n");
    printf("Masukkan pilihan Anda (1 atau 2): ");
    scanf("%d", &pilihan_utama);

    switch (pilihan_utama) {
        case 1:
            printf("\nAnda memilih Rute 1.\n");
            printf("Pilih tujuan Anda:\n");
            printf("  1. Parapat = 45.000\n");
            printf("  2. Siantar = 55.000\n");
            printf("  3. Tebing Tinggi = 70.000\n");
            printf("  4. Medan     = 100.000\n");
            printf("Masukkan pilihan tujuan (1-4): ");
            scanf("%d", &pilihan_tujuan);

            switch (pilihan_tujuan) {
                case 1:
                    harga_dasar = 45000;
                    strcpy(nama_tujuan, "Parapat");
                    break;
                case 2:
                    harga_dasar = 55000;
                    strcpy(nama_tujuan, "Siantar");
                    break;
                case 3:
                    harga_dasar = 70000;
                    strcpy(nama_tujuan, "Tebing Tinggi");
                    break;
                case 4:
                    harga_dasar = 100000;
                    strcpy(nama_tujuan, "Medan");
                    break;
                default:
                    printf("Pilihan tujuan tidak valid.\n");
                    return 1; // Keluar dari program dengan error
            }
            break;

        case 2:
            printf("\nAnda memilih Rute 2.\n");
            printf("Pilih tujuan Anda:\n");
            printf("  1. Silangit      = 35.000\n");
            printf("  2. Siborong-borong = 50.000\n");
            printf("  3. Tarutung      = 65.000\n");
            printf("Masukkan pilihan tujuan (1-3): ");
            scanf("%d", &pilihan_tujuan);

            switch (pilihan_tujuan) {
                case 1:
                    harga_dasar = 35000;
                    strcpy(nama_tujuan, "Silangit");
                    break;
                case 2:
                    harga_dasar = 50000;
                    strcpy(nama_tujuan, "Siborong-borong");
                    break;
                case 3:
                    harga_dasar = 65000;
                    strcpy(nama_tujuan, "Tarutung");
                    break;
                default:
                    printf("Pilihan tujuan tidak valid.\n");
                    return 1; // Keluar dari program dengan error
            }
            break;

        default:
            printf("Pilihan rute utama tidak valid.\n");
            return 1; // Keluar dari program dengan error
    }

    harga_total = harga_dasar; // Inisialisasi harga_total dengan harga_dasar

    printf("\nPilih kelas perjalanan:\n");
    printf("  1. Ekonomi (+10.000)\n");
    printf("  2. Eksekutif (+35.000)\n");
    printf("Masukkan pilihan kelas (1 atau 2): ");
    scanf("%d", &pilihan_kelas);

    switch (pilihan_kelas) {
        case 1:
            harga_total += 10000;
            strcpy(nama_kelas, "Ekonomi");
            break;
        case 2:
            harga_total += 35000;
            strcpy(nama_kelas, "Eksekutif");
            break;
        default:
            printf("Pilihan kelas tidak valid.\n");
            return 1; // Keluar dari program dengan error
    }

    printf("\n=======================================\n");
    printf("           DETAIL TIKET ANDA           \n");
    printf("=======================================\n");
    printf("Rute Utama      : %d\n", pilihan_utama);
    printf("Tujuan          : %s\n", nama_tujuan);
    printf("Kelas           : %s\n", nama_kelas);
    printf("Jumlah Harga    : Rp %ld\n", harga_total);
    printf("=======================================\n");

    return 0; // Program selesai tanpa error
}
