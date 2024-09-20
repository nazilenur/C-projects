
#include<stdio.h>
#include<stdlib.h>

int ebob(int n,int z);

int main(){
	int a,b;
	
	printf("enter the numbers:");
	scanf("%d-%d",&a,&b);
	
	printf("ebob:%d",ebob(a,b));
	
}
int ebob(int n,int z){
	if(z!=0){
		return (z,n%z);
	}
	else{
		return n;
	}
	
}
