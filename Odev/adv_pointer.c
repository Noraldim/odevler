#include <stdio.h>
#include <time.h>
int main(){
	
	/*
	int mtx[3][4] = {
	{3,4,5,6},
	{1,2,5,4},
	{9,0,4,5},
	};
	
	int *p = &mtx[0][0];
	int colum = 4;
	int row = 3 ;
	int i,j;
	int sum , all , uni ,num , one ,two; 
	int max = mtx[0][0];
	
	for(i=0 ; i<row ; i++){
		for(j= 0 ; j < colum ; i++){		
		
			printf("%d ",*(p + i * colum + j ));

	}}
	
*/
// seed the random number first and set the bonders to the number that we take form user ==> one and two repersetn user number 
int one ,two , num,i;
srand(time(0));

printf("Enter the bigest bundery :");
scanf("%d",&one);
printf("Enter the smolst bundery :");
scanf("%d",&two);
for(i=0 ; i<5 ; i++){

	num = one+rand()%+(two-one+1);	
	printf("number is : %d\n",num);	
}



	
	
	
	
	
	
	
	
	
	
	
	
/* part one 
	
	for(i = 0 ; i< row ; i++){
		for(j = 0 ; j < colum ; j++){
			sum = *(p + i * colum + j);
		// 	printf("%d ", sum);
			all = all + sum ;
			
			
		} // printf(" %d \n", all);
		uni = uni + all ;

	}printf("%d", all);
	
*/	


	
}

