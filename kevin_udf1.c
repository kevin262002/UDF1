#include<stdio.h>

void sum(int z){
	printf("Cube : %d",z*z*z);
}

main(){
	
	int a;
	
	printf("Enter Value : ");
	scanf("%d",&a);
	
	sum(a);
}
