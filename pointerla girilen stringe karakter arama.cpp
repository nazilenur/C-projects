#include<stdio.h>
#include<string.h>

char arama(char *x,char c);

int main(){
	
	char c;
	char str[100];
	
	printf("String ifade giriniz:");
	gets(str);
	
	printf("Arama yapmak istediginiz karakteri giriniz:");
	c=getchar();
	
	printf("Aradiginiz karakter %c ve ascii kodu:%d\n",c,c);
	
	arama(str,c);
	
		
	}
char arama(char *x,char c){
	
	while(*x!='\0'){
		if(*x==c){
			printf("istediginiz karakter bulundu!");
			return c;
		}		
		x++;
		
	}
	
}
