#include<stdio.h>


int main(){
	
	char str[40];
	char gecici;
	int i , k ;
	
	printf("istediginiz stringi girin:");
	gets(str);
	
	for( k=0;str[k]!=0;k++){
		
	}
	
	for( i=0; i< k/2; i++)
	{
		gecici=str[k-i-1];
	    str[k-i-1]=str[i];
		str[i]=gecici;
	}
	
	printf("Girdiginiz stringin tersi:%s",str);
	
	
	
	
}
