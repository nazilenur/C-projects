#include<stdio.h>

int selectionSort(int n[],int x);

int main(){
	
	int x;
	printf("Diziniz kac elemanli olacak?:");
	scanf("%d",&x);
	
	int n[x];
	
	for(int i=0;i<x;i++){
		printf("%d.elemani giriniz:",i+1);
		scanf("%d",&n[i]);
	}
	
	selectionSort(n,x);
	
	printf("--dizinin siralanmis hali--\n");
	
	for(int j=0;j<x;j++){
		printf("%d\t",n[j]);
	}
}

int selectionSort(int n[],int x){
	
	int indeks,min;
	
	for(int k=0;k<x-1;k++){
		min=n[x-1];
		indeks=x-1;
	for(int m=k;m<x-1;m++){
		if(min>n[m]){
			min=n[m];
			indeks=m;
		}
		}	
		n[indeks]=n[k];
		n[k]=min;

	}
}
