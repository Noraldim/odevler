
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//'Deneme.txt' dosyasi, kod dosyasiyla ayni dosyada olmalidir yoks ==> 'Kosya yoktur!' 
int main() {
	int max = 50;
	int x , y;
    char fix[max];
    int num = 0;	
 
 //'filename', "Deneme.txt" dosyasinin adini saklar ve ardindan bir dosya isaretcisi bildirir   

    char filename[] = "Deneme.txt";
 //"r+" modu, dosya uzerinde hem okuma hem de yazma islemlerine izin verir
    FILE* file = fopen(filename, "r+");
    
//dosyanin bos olup olmadigini kontrol edin
    if (file == NULL) {
        printf("Dosya yoktur!");
        return 1;
    }

    char str[max];
    fscanf(file, "%s", str);

//belirli sifre kullanarak metni cozer.

    int len = strlen(str);
    for ( x = 0; x < len; x += 2) {
        char ch = str[x];
        int count = str[x + 1] - '0';

        for ( y = 0; y < count; y++) {
            fix[num++] = ch;
        }
    }
    fix[num] = '\0';

    fseek(file, 0, SEEK_SET);
    
/* SEEK_SET Bir dosya icinde arama yapmak icin referans noktasini belirtmek uzere
fseek islevinde ucuncu bagimsiz degisken olarak kullanilir.     , SEEK_SET = 0; */
    
    fprintf(file, "%s : %s", str, fix);

    fclose(file);
//Islem bittiyse ekrana 'done' yazin
    printf("done :) ");

    return 0;
}

