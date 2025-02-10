#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void ogrencilistesi();
void ogrenciarama();
void tekskayit();

struct Student {
    int id;
    char name[20];
    char surname[20];
    int average;
};

int main() {
    int ch = 0;
    while (ch != 4) {
        printf("\t\t\t\t\t====ogrenciler sistemi====");
        printf("\n\n\n \t\t\t           1.Ogrenciler listesi\n");
        printf("\t\t\t\t   2.listede arama\n");
        printf("\t\t\t\t   3.tek sirali kayitlari listesi\n");
        printf("\t\t\t\t   4.cikis\n");
        printf("\t\t\t\t   ______________\n");
        printf("\t\t\t\t  ");
        scanf("%d", &ch);
        getchar(); // Consume newline character left by scanf

        switch (ch) {
            case 1:
                system("cls");
                ogrencilistesi();
                printf("\n\t\t\t\tHerhangi bir tus basin\n");
                getch();
                system("cls");
                break;

            case 2:
                system("cls");
                ogrenciarama();
                printf("\n\t\t\t\tHerhangi bir tus basin\n");
                getch();
                system("cls");
                break;

            case 3:
                system("cls");
                tekskayit();
                printf("\n\t\t\t\tHerhangi bir tus basin\n");
                getch();
                system("cls");
                break;
        }
    }

    return 0;
}
// ogrenci bilgilerin listlinir .
void ogrencilistesi() {
    FILE *fp = fopen("Ogrenciler.dat", "rb");
    struct Student inf;

    if (fp == NULL) {
        printf("Error opening file\n");
        return;
    }

    while (fread(&inf, sizeof(struct Student), 1, fp) == 1) {
        printf("---------------------------------------------\n");
        printf("ID      : %d\n", inf.id);
        printf("Name    : %s\n", inf.name);
        printf("Surname : %s\n", inf.surname);
        printf("Average : %d\n", inf.average);
    }
    printf("---------------------------------------------\n");

    fclose(fp);
}
// id bilgisine göre arama yapan fonksiyon .

void ogrenciarama() {
    FILE *fp = fopen("Ogrenciler.dat", "rb");
    struct Student inf;
    int id;
    int found = 0;
    
//gerilen id'yi bulmazsa bir error message ekrana yazar.
    if (fp == NULL) {
        printf("Error opening file\n");
        return;
    }
//id'yi bulursa verilerini ekrana yazar

    printf("\t\t\t Arama yapilacak ogrenci id : ");
    scanf("%d", &id);


    while (fread(&inf, sizeof(struct Student), 1, fp) == 1) {
        if (inf.id == id) {
            found = 1;
            printf("----------------------------------\n");
            printf("ID     : %d\n", inf.id);
            printf("Name   : %s\n", inf.name);
            printf("Surname: %s\n", inf.surname);
            printf("Average: %d\n", inf.average);
            printf("----------------------------------\n");
            break;
        }
    }

    if (!found) {
        printf("\n\t\t\tAranan ogrenci mevcut degil!\n");
    }

    fclose(fp);
}

void tekskayit() {
    FILE *fp = fopen("Ogrenciler.dat", "rb");
    struct Student inf;
    int count = 0;
    
    // Dosya acma read binay modda

    if (fp == NULL) {
        printf("Error opening file\n");
        return;
    }
    // ogrencinin verileri basar
    while (fread(&inf, sizeof(struct Student), 1, fp) == 1) {
        if (count % 2 == 0) {
            printf("---------------------------------------------\n");
            printf("ID      : %d\n", inf.id);
            printf("Name    : %s\n", inf.name);
            printf("Surname : %s\n", inf.surname);
            printf("Average : %d\n", inf.average);
            printf("---------------------------------------------\n");
        }
        count++;
    }

    fclose(fp);
}




