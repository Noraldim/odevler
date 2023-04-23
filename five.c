
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


int main() {
//
	
	char txt[300] ;
	
	printf("Bir metin giriniz:\n\n");
	
//standart giristen bir metin satiri oku
	fgets(txt , 300 , stdin);
	
// Bir isaretci tanimla	
	char *x = &txt;

// 	*x != '\0' ==>  dizenin nerede bittigini belirtmek icin kullanilir
	while(*x != '\0'){

//kucukse buyuk olsun buyukse kucuk olsun
			
		if(islower(*x)){
			printf("%c",toupper(*x));
		}else{
			printf("%c",tolower(*x));
		}
		x++ ;	
	}
	
	return 0;
}
