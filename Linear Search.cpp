#include<stdio.h>

int linearSearch(int n[],int x,int aranan);

int main(){
	
	int aranan,x,sonuc;
	
	
	printf("Diziniz kac elemanli olacak?:");
	scanf("%d",&x);
	
	int dizi[x];
	
	for(int i=0;i<x;i++){
		printf("%d. elemani giriniz:",i+1);
		scanf("%d",&dizi[i]);
	}
	
	printf(" hangi elemani aramak istiyorsunuz?");
	scanf("%d",&aranan);
	
	sonuc=linearSearch(dizi,x,aranan);
	
	if(sonuc==-1){
		printf("Aradiginiz eleman dizide bulunamadi!");
	}
	else{
		printf("Aradiginiz eleman dizinin %d.elemaninda bulundu!",sonuc+1);
	}
	
	
}

int linearSearch(int n[],int x,int aranan){
	
	int k;
	
	for(k=0;k<x;k++){
		if(aranan==n[k]){
			return k;
		}		
	}
	
	return -1;
}
