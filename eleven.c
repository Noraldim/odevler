// 
#include <stdio.h>
#include <stdlib.h>

struct data {
    int id;
    char name[16];
    char surname[16];
    int average;
};

int main() {
    FILE* file = fopen("Ogrenciler.dat", "rb");
    if (file == NULL) {
        printf("acilamiyor.\n");
        return 1;
    }

    struct data data;
    int recordCount = 0;

    fseek(file, 0, SEEK_END);
    long fileSize = ftell(file);
    rewind(file);

 //dosyanin sonuna giderek fileSize degiskenine dosya boyutunu kaydediyoruz. 
 //Daha sonra rewind() fonksiyonunu kullanarak dosya baslangicina donuyoruz. Sonrasinda ftell()

    while (ftell(file) < fileSize) {
        fread(&data, sizeof(struct data), 1, file);
        printf("----------------------------\n");
        printf("ID         : %d\n", data.id);
        printf("Name       : %s\n", data.name);
        printf("Surname    : %s\n", data.surname);
        printf("Average    : %d\n", data.average);

        fseek(file, sizeof(struct data), SEEK_CUR);
        recordCount++;
    }

    fclose(file);

    return 0;
}

