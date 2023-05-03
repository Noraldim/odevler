

#include <stdio.h>

int main() {
	
	
//kullanicidan iki sayi alacagiz 

float bir ,iki , sunc;
int opp ;
printf("Ilk sayiyi giriniz : ");
scanf("%f", &bir);
printf("Ikinci sayiyi giriniz : ");
scanf("%f", &iki);
printf("\n");


// isleme al 

printf("Aritmetik islemi seciniz :: \n(1)Topla (2)Cikar (3)Carp (4)Bol \n\n");
printf("Seciminiz : ");
scanf("%d",&opp);


// switch case kullanarak dort islem yapacagiz 
switch(opp){
	
		case 1 :
			
			printf("%f + %f = %f ", bir ,iki , bir+iki );
			break;
			
		case 2 :
			printf("%f - %f = %f ", bir ,iki , bir-iki );
			break;
			
		case 3 :
			printf("%f * %f = %f ", bir ,iki , bir*iki );
			break;
			
		case 4 :			
			if(iki == 0){
				printf("bolen sifir olamaz !!!");
				break;
			}else{
			printf("%f / %f = %f ", bir ,iki , bir/iki );
			break;					
			}
					
		default:
			printf("sadece 1 2 3 4'u secin");
}


    return 0;
}

