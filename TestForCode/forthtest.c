#include <stdio.h>
#include <stdbool.h>


// this is finding the substring and return the addres of it 



char* my_strstr(const char* str1, const char* str2) {
    if (*str2 == '\0') {
        return (char*)str1;
    }

    while (*str1) {
        const char* p1 = str1;
        const char* p2 = str2;

        while (*p1 && *p2 && (*p1 == *p2)) {
            p1++;
            p2++;
        }

        if (*p2 == '\0') {
            return (char*)str1;
        }

        str1++;
    }

    return NULL;
}

// the length of string 


int my_strlen(char* str) {
	
// son karakter ulsuna kadar while dongu icinde her sefer bir artirir

    int count = 0;
    while(*str != '\0') {
        count++;
        str++;
    }
	// son karakter ulustu durumda count sayisi geri dondurur
    return count;
}

// this find if ch in the char or not and return the address of it 

char* my_strchr(char* str, char ch){
// str ve ch kulangidan alib 
// str son karakter ulucamdigin durmda icindeki if donguya bakar
// icindeki if dongude her karakter chardeki kaleminin karakterleri bakib ayin olduysa geri donduru
	
    while(*str != '\0') {
        if(*str == ch)
            return str;
        str++;
    }
    return NULL;

}

// the last function it's comper two string ;;

bool my_strcmp(char* str1, char* str2) {
	
// her sefer str1 ve str2 dan bir karakater alip karstriyor ve devam edyor str1 , str2 sonona kadar 

    while(*str1 != '\0' && *str2 != '\0') {
        if(*str1 != *str2)
            return false;
        str1++;
        str2++;
    }
    return (*str1 == '\0' && *str2 == '\0');
}

int main() {


int selection;
printf("str1 str2'in icinde bulmak icin 1 takin) :\n");
printf("karaktrin uzunlugunu bulumak icin 2 takin :\n");
printf("karakter nerede oldgunu bilmek icin 3 takin :\n");
printf("dizeler karslatrmak icin 4 takin :\n");
printf("Sectin sayi girin  :");

scanf("%d", &selection);

 
 
switch(selection){

 	case 1 :{
	 		
	    char str1[100];
	    char str2[100];
	    
	    
	    printf("Enter the first string: ");
	    scanf("%s", str1);
	
	    printf("Enter the second string: ");
	    scanf("%s", str2);
	
	    char* result = my_strstr(str1, str2);
	
	    if (result) {
	        printf("Substring found at address: %p\n", result);
	    } else {
	        printf("Substring not found\n");
	    } 		
		break;
	 }

 	
 	case 2 :{
 	  
	    char str[100];
	    printf("Enter a string: ");
	    scanf(" %[^\n]", str);
	    
	    int length = my_strlen(str);
	    printf("\"%s\" contains %d characters.\n", str, length);
	     		
 		
		break;
	 }

	    
 	case 3:{
 		
            char str[100], ch;
            printf("Enter a string: ");
            scanf(" %99[^\n]", str);
            printf("Enter a character: ");
            scanf(" %c", &ch);
            char *res = my_strchr(str, ch);
            if(res != NULL)
                printf("The character '%c' is found in \"%s\" at position: %ld\n", ch, str, (res - str)+1 );
            else
                printf("The character '%c' is not found in \"%s\"\n", ch, str);
            break;
	 }
 		
	        
	case 4:{
		
            char str1[100], str2[100];
            printf("Enter the first string: ");
            scanf(" %99[^\n]", str1);
            printf("Enter the second string: ");
            scanf(" %99[^\n]", str2);
            bool res = my_strcmp(str1, str2);
            if(res)
                printf("ayindir.\n");
            else
                printf("ayine degil.\n");
            break;	
		
	
	} 	    
	default:
		printf("You didint enter valed number ");
		break;
			
 }
 


     return 0;


}
