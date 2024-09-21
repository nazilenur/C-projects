#include<stdio.h>

double usAl(double a, double b);

int main(){
	
	double a , b;
	
	printf("Taban ve us degerlerini giriniz.");
	scanf("%lf %lf",&a,&b);
	printf("Sonuc=%lf",usAl(a,b));
	return 0;
	
}

double usAl(double a,double b){
	double sonuc=1.0;
	 for(int i=0;i<b;i++){
	 	sonuc*=a;
	 }
	return sonuc;
}
