#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int *dizi;
	
	int n;
	
	printf("eleman sayisi?:");
	scanf("%d",&n);
	
	dizi=(int*)malloc(n*sizeof(int));
	
	for(int i=0;i<n;i++){
		printf("%d.eleman:",i+1);
		scanf("%d",&dizi[i]);
		
	}
	
	for(int k=0;k<n;k++){
		printf("%d.elemanin degeri:%d--adresi:%d\n",k+1,dizi[k],&dizi[k]);
		dizi++;
	}
	
	free(dizi);
}
