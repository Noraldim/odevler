
#include <stdio.h>
#include <stdlib.h>
//
struct data {
    int id;
    char name[16];
    char surname[16];
    int average;
};
//dosyanin acilip acilmadigini kontrol edin
int main() {
    FILE* file = fopen("Ogrenciler.dat", "rb");
    if (file == NULL) {
        printf("dosya acilamiyor.\n");
        return 1; 
    }

    struct data data;

    while (fread(&data, sizeof(struct data), 1, file) == 1) {
        printf("----------------------------\n");
        printf("ID         : %d\n", data.id);
        printf("Name       : %s\n", data.name);
        printf("Surname    : %s\n", data.surname);
        printf("Average    : %d\n", data.average);
        printf("----------------------------\n");
        printf("\t\t\t\t\n");
    }

    fclose(file);

    return 0;
}

