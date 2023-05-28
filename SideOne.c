#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
	int x ;
	char txt[100] ;
	printf("ENTER the txt that you want to write on the txt file :");
	fgets(txt,sizeof(txt),stdin);
	int one = strlen(txt);
/// take from user input and print that input in the spesified file 

FILE *filep = fopen("one.txt","w");

	if(filep == NULL){
		printf("THE FILE IS NOT EXEST ");
	}
	else{
		
		for(x = 0 ; x < one ; x++){
			fputc(txt[x], filep);
		}
		
		printf("the work is done boy :)");
	}
	fclose(filep);
}
