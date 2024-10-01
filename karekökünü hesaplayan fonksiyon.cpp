#include<stdio.h>
#include<math.h>

double kareKokHesaplama(double sayi);

int main(){
	
	double sayi;
	printf("Karekokunu hesaplamak istediginiz sayiyi giriniz:\n");
	scanf("%lf",&sayi);
	
	double karekok=kareKokHesaplama(sayi);
	
	printf("Girilen degerin karekoku:%lf",karekok);
	
	return 0;
}

double kareKokHesaplama(double sayi){
	
	return sqrt(sayi);
	
}
