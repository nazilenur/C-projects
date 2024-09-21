#include<stdio.h>

float kareAl(float);

int main(){
	
	float sayac;
	
	for(sayac=1;sayac<=10;sayac++){
		printf("Sayi %lf \t Karesi:%lf\n",sayac,kareAl(sayac));
		
	}
	
	printf("\n%.2f",kareAl(4.5));
	return 0;
}

float kareAl(float a){
	
	return a*a;
}

