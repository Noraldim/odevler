//
#include <stdio.h>
#include <stdlib.h>

struct Student {
    int id;
    char name[16];
    char surname[16];
    int average;
};

int main() {
    FILE* file = fopen("Ogrenciler.dat", "rb");
    if (file == NULL) {
        printf("dosya acilamiyor.\n");
        return 1;
    }
// id gerin 
    int searchId;
    printf("Arama yapilacak ogrenci id : ");
    scanf("%d", &searchId);

    struct data data;

    int found = 0;
    while (fread(&data, sizeof(struct data), 1, file) == 1) {
        if (student.id == searchId) {
            printf("----------------------------\n");
            printf("ID         : %d\n", data.id);
            printf("Name       : %s\n", data.name);
            printf("Surname    : %s\n", data.surname);
            printf("Average    : %d\n", data.average);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("kimlikli ogrenci %d bulunamadi.\n", searchId);
    }

    fclose(file);

    return 0;
}

