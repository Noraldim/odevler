// https://github.com/Noraldim/odevler- ==> daha aciklama icin // README.md

 
#include <stdio.h>

int main() {
    int i, x, y, t;
    
// kullanicidan piramidin uzunlugu alacagiz
    char letter = 'A';
// kullancidan piramidin uzunlgu alacacgiz

    printf("piramidin yuksekligini giriniz: ");
    scanf("%d", &x);
    
//Dongu, harflerden onceki bosluklari yazdıracaktir.
    for (i = 1; i <= x; i++) {
        for (y = x - i; y >= 1; y--) {
            printf(" ");
        }
        
/*İkinci  dongu, her satir icin harfleri yazdirir.
 Her satır icin harf sayisi 2 * i - 1 olarak hesaplanir.*/
         
        for (t = 1; t <= 2 * i - 1; t++) {
            printf("%c", letter);
            if (t < i) {
                letter++;
            } else {
                letter--;
            }
        }
//ilk == A   , A++ ==> B  , B++ ==> C  :::   ...etc
//D-- ==>C   , C-- ==> B  , B-- ==> A  :::   ...etc

        printf("\n");
        letter = 'A';
    }

    return 0;
}

