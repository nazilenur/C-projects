#include<stdio.h>

main(){
	int sayi;
	int toplam;
	int sayi2;
	int terssayi=0;
	
	printf("Sayi gir \n");
	scanf("%d",&sayi);
	sayi2=sayi;

while(sayi>0)
{
	toplam=sayi%10;
	terssayi=terssayi*10+toplam;
	sayi=sayi/10;
}
	
    if(terssayi==sayi2) printf("Palindrom");
    else printf("palindrom degil");
	



return 0;
}
