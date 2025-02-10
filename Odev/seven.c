
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int rows = 100;
    int colums = 30;
    int x ;
	int times;
// kullanicidan kac tane isme iste	

	printf("kac tane isim gireceksin? ");
	scanf("%d" ,&times);
	printf("\n");
	
 // 'Allocate'  2D M
    char** name = (char**)malloc(rows * sizeof(char*));
    for ( x = 0; x < rows; x++) {
        name[x] = (char*)malloc((colums + 1) * sizeof(char)); 
    }

    // kullanicidan isimler oku

    for ( x = 0; x < times; x++) {
        printf("%d. ismi girin: ", x + 1);
        scanf("%s", name[x]);
        printf("\n");
    }

    // isimler ekran yaz 
    
    printf("Girilen isimler:\n");
            printf("\n");
            
    for ( x = 0; x < times; x++) {
        printf("%s\n", name[x]);
    }

    // Deallocate
    for ( x = 0; x < rows; x++) {
        free(name[x]);
    }
    free(name);

    return 0;
}



