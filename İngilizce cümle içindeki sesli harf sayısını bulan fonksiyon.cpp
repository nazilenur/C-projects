#include<stdio.h>
#include<string.h>

int sesliHarfBulma(char str[],int uzunluk);

int main(){
	
	char str[100];
	int uzunluk=0;
	
	
	printf("String bir ifade giriniz:");
	gets(str);
	
	for(int k=0;str[k]!='\0';k++){
		uzunluk++;
		
	}
	
	int harf=sesliHarfBulma(str,uzunluk);
	
	printf("Girdiginiz stringde %d tane sesli harf vardir.",harf);
	
	return 0;
}

int sesliHarfBulma(char str[],int uzunluk){
	

     int harf;
	
	for(int i=0;i<uzunluk;i++){
		 char karakter=str[i];
		if((karakter>='a' && karakter<='z') || (karakter >='A' && karakter<='Z')){
				
		 if(karakter=='A' || karakter=='E' || karakter=='I' || karakter=='O' || karakter=='U' || karakter=='a' || karakter=='e' || karakter=='i' || karakter=='o' || karakter=='u'){
			harf++;
		}	
		}
		
	}
	return harf;
		

}

