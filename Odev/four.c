
#include <stdio.h>
#include <stdlib.h>


int main() {
// kullanicidan iki sayi al	
	int x ,y , m ,n  ;
	printf("matris boyutlarini giriniz (m,n):");
	scanf("%d %d",&m,&n );

// iki for loop ==> birincisi  satir saymak icin
	
	for( x = 1 ; x <= m ; x++){
		
//ikinci for loop ==> her seferinde sayinin karesini yaziyor
// "\t" uzun mesafe koymak icin

		for( y = 1 ; y <= n ; y++){
			int l = pow(y,x);
			printf("\t");						
			printf("%d", l );					
		}
		printf("\n");
	}
	
		
	return 0;
}
