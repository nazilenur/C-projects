#include<stdio.h>
#include<stdlib.h>

int *birlestirme(int liste1[],int a,int liste2[],int b);

int main(){
	
	int liste1[]={5,7,9,11,13};
	int liste2[]={15,17,19,21,23,25,27,29};
	
	int *ptr;
	ptr=birlestirme(liste1,5,liste2,8);
	
	printf("listelerin birlestirilmis hali:");
	for(int i=0;i<13;i++){
		printf("%3d",*(ptr+i));
	}
	
	return 0;
	
}

int *birlestirme(int liste1[],int a,int liste2[],int b){
	
	int *birlestirilmis=(int*)malloc((a+b)*sizeof(int));
	
	
	for(int x=0;x<a;x++)
		birlestirilmis[x]=liste1[x];
	
	for(int y=0,x=a;y<b;y++,x++)
		birlestirilmis[x]=liste2[y];

	
	
	return birlestirilmis;
	
}



