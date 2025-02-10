
#include <stdio.h>
#include <ctype.h>
//////
int main() {
	
	int x ;
    char txt[300];
    printf("Bir metin giriniz : ");
    fgets(txt, 300, stdin);
    
//26 ila sifir uzunlugunda bir dizi baslatiyoruz
//her harfin magaza frekansi
	int len[26] = {0};
  
 // dizinin sonunu kontrol et
 // alfa olup olmadigini kontrol edin ve buyuk harfe donusturun
	for ( x = 0; txt[x] != '\0'; x++) {
		
        if (isalpha(txt[x])) {
 // toupper islevini kullanarak her harfi buyuk harfe donusturun 
 //ve len dizisindeki  karsilik  gelen ogenin  dizinini elde etmek için 'A'nın ASCII kodunu çıkarın.       	
            len[toupper(txt[x]) - 'A']++;
        }
    }
    
    printf("Metindeki her harfin sayisi :\n");
    for ( x = 0; x < 26; x++) {
    	
        if (len[x] > 0) {
            printf("%c : %d\n", 'A' + x, len[x]);
        }
    }
    
    return 0;
}

