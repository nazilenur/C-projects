#include<stdio.h>
#define a 5

main(){
int max=0;

int dizi[a]={3,545,541,61,51};

for(int i=0;i<5;i++)
{
	
	if(dizi[i]>max)
	{
		max=dizi[i];
	}
	
}
	printf("Dizideki en buyuk sayi:%d\n",max);	
}


