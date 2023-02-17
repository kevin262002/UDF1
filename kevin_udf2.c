#include<stdio.h>

void sum(int z){
	
	if(z%15==0){
		printf("This is Divisible");
	}else{
		printf("This is Not Divisible");
	}
	
}

main(){
	
	int a;
	
	printf("Enter Value : ");
	scanf("%d",&a);
	
	sum(a);
}

