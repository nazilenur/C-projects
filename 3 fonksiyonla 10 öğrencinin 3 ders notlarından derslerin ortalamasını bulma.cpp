#include <stdio.h>

//double dersOrtalama(int dizi[][3],int ogrenciSayisi);
double dersOrtalama1(int dizi[][3],int ogrenciSayisi);
double dersOrtalama2(int dizi[][3],int ogrenciSayisi);
double dersOrtalama3(int dizi[][3],int ogrenciSayisi);

int main(){
	
	int ogrenciSayisi=10;
	int dizi[10][3];
	
	for(int i=0;i<10;i++){
		for(int j=0;j<3;j++){
			printf("dizi[%d][%d]:",i,j);
			scanf("%d",&dizi[i][j]);
		}
	}
	
	double Ortalama1=dersOrtalama1(dizi,ogrenciSayisi);
	printf("1. dersin ortalamasi:%lf\n",Ortalama1);
	
	double Ortalama2=dersOrtalama2(dizi,ogrenciSayisi);
	printf("2. dersin ortalamasi:%lf\n",Ortalama2);
	
	double Ortalama3=dersOrtalama3(dizi,ogrenciSayisi);
	printf("3. dersin ortalamasi:%lf\n",Ortalama3);
	

	return 0;
}

double dersOrtalama1(int dizi[][3],int ogrenciSayisi){
	
	int toplam=0;
	double Ortalama1;
	for(int i=0;i<10;i++){
		toplam+=dizi[i][0];
		}
	
	 Ortalama1=(double)toplam/10;
	
	return Ortalama1;	
	
}

double dersOrtalama2(int dizi[][3],int ogrenciSayisi){
	
	int toplam=0;
	double Ortalama2;
	for(int i=0;i<10;i++){
		toplam+=dizi[i][1];
	}
	 Ortalama2=(double)toplam/10;
	
	return Ortalama2;
	
	
}

double dersOrtalama3(int dizi[][3],int ogrenciSayisi){
	
	int toplam=0;
	double Ortalama3;
	for(int i=0;i<10;i++){
		toplam+=dizi[i][2];
		}
	
	 Ortalama3=(double)toplam/10;
	
	return Ortalama3;
	
	
}
