
#include <stdio.h>

int main() {
	
	int x , y ,z ,i , m;
	printf("kac tam sayi girilecek?\n ");
	scanf("%d", &x);
	int one[x];
// ciktiyi dizide sakla	

	for(i=0 ; i<x ; i++){
		printf("Bir sayi giriniz ");
		scanf("%d",&z);
		one[i] = z;	
	}
	//saklanan degeri yazdirin, ancak bastan sona
	for(m=x-1; m>-1 ; m--){
			printf("%d ",one[m]);
		}

    return 0;
}

