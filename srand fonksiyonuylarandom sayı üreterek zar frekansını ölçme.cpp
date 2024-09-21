#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	srand(time(NULL));//RANDOM FONKSÝYONU SRAND BAÞLATILIRSA KENDÝNÝ TEKRARLAMAZ VE  GERÇEK RANDOM SAYILAR ÜRETÝLÝR!!
	
	int frekans1=0;
	int frekans2=0;
	int frekans3=0;
	int frekans4=0;
	int frekans5=0;
	int frekans6=0;
	
	int zar;
	for(int i=0;i<10;i++){
		zar=1+rand()%6;
		 
		 switch (zar){
		 	
		 	case 1:
		 		frekans1++;
		 		break;
		 	
			 case 2:
			 	frekans2++;
			 	break;
			 	
		 	case 3:
		 		frekans3++;
		 		break;
		 		
		 	case 4:
		 		frekans4++;
		 		break;
		 	
			case 5:
				frekans5++;
				break;
			
			case 6:
				frekans6++;
				break;
		 	
		 }
		 		
	}
	
	printf("1 numarali yuzun gelme sayisi:%d\n",frekans1);
	printf("2 numarali yuzun gelme sayisi:%d\n",frekans2);
	printf("3 umarali yuzun gelme sayisi:%d\n",frekans3);
	printf("4 numarali yuzun gelme sayisi:%d\n",frekans4);
	printf("5 numarali yuzun gelme sayisi:%d\n",frekans5);
	printf("6 numarali yuzun gelme sayisi:%d\n",frekans6);
	
	return 0;
	
}
