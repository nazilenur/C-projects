#include<stdio.h>

int frekansHesaplama(int dizi[],int x);

int main(){
	
	
	int x;
	int dizi[10];
	for(int i=0;i<10;i++){
		printf("dizi[%d]:",i);
		scanf("%d",&dizi[i]);
	}
	printf("Hangi sayinin frekansýný bulmak istediginizi giriniz:");
	scanf("%d",&x);
	
	int Frekans=frekansHesaplama(dizi,x);
	
	printf("%d",Frekans);
	
}

int frekansHesaplama(int dizi[],int x){
	
	int Frekans=0;
	for(int i=0;i<10;i++){
		if(dizi[i]==x){
			Frekans++;
		}
	}

	return Frekans;
}
