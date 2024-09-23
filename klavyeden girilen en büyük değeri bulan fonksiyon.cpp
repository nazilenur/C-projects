#include<stdio.h>

int max(int x , int y , int z);

 int main(){
	
	int num1 , num2 , num3;
	
	printf("3 tane integer deger giriniz:");
	scanf("%d %d %d",&num1 ,&num2, &num3);
	
	printf("Max deger:%d",max(num1,num2,num3));
	return 0;
}

int max(int x , int y , int z){
	
	int maks=x;
	
	if(y>maks){
		maks=y;
	}
	
	if(z>maks){
		maks=z;
	}
	
	return maks;
	
	
}
