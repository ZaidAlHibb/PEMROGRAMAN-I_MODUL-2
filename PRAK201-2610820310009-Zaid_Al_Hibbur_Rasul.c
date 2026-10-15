#include <stdio.h>

int main() {
    char nama[50];
    char nim[15];
    char kelas_paralel[10];
    char ttl[30];
    char alamat[100];
    char hobby[50];
    char no_hp[15];

    printf("Nama                             : ");
    scanf(" %[^\n]", nama);
    printf("NIM                              : ");
    scanf(" %[^\n]", nim);
    printf("Kelas Paralel                    : ");
    scanf(" %[^\n]", kelas_paralel);
    printf("Tempat/Tanggal Lahir             : ");
    scanf(" %[^\n]", ttl);
    printf("Alamat                           : ");
    scanf(" %[^\n]", alamat);
    printf("Hobby                            : ");
    scanf(" %[^\n]", hobby);
    printf("No. HP                           : ");
    scanf(" %[^\n]", no_hp);

    printf("\nNama                             : %s\n", nama);
    printf("NIM                              : %s\n", nim);
    printf("Kelas Paralel                    : %s\n", kelas_paralel);
    printf("Tempat/Tanggal Lahir             : %s\n", ttl);
    printf("Alamat                           : %s\n", alamat);
    printf("Hobby                            : %s\n", hobby);
    printf("No. HP                           : %s\n", no_hp);

    return 0;
}