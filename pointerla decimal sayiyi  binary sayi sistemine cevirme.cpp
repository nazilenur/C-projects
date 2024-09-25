#include<stdio.h>
#include<stdlib.h>

int convertBinary(int n);

int main(){
	
	int x;
	printf("Binary cevirmek istediginiz sayiyi giriniz:");
	scanf("%d",&x);
	
	convertBinary(x);
	
	return 0;
}

int convertBinary(int n){
	
	int *ptr;
	
	ptr=(int*)malloc(32*sizeof(int));

	int i=0;
	
	while(n>0){
		
		ptr[i+1]=n%2;
		n=n/2;
		i++;
	
}

for(int k=i;k>0;k--){
	printf("%d",ptr[k]);
}

}
