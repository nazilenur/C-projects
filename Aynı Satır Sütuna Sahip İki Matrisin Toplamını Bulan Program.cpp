#include<stdio.h>


  int main(){
  	
    int sat;
    int sut;
	 
	printf("satir sayisini giriniz\n");
	scanf("%d",&sat);
		
	printf("sutun sayisini giriniz\n");
	scanf("%d",&sut);
		 	 	 
	      printf("a matrisi\n\n");     
	      int a[sat][sut];
	 for(int i=0;i<sat;i++){
	 	for(int j=0;j<sut;j++){
	 		printf("%d.satirin %d. sutunundaki elemani gir\n",i+1,j+1);
	 		scanf("%d",&a[i][j]);
		 }
	 }
	 
	     printf("\n b matrisi\n\n");
		 int b[sat][sut];
	  for(int i=0;i<sat;i++){
	 	for(int j=0;j<sut;j++){
	 		printf("%d.satirin %d. sutunundaki elemani gir\n",i+1,j+1);
	 		scanf("%d",&b[i][j]);
		 }
	 }
	 int c[sat][sut];
	 
	    printf("\n c matrisi\n\n");
	  for(int i=0;i<sat;i++){
	 	for(int j=0;j<sut;j++){
	 		
	 		c[i][j]=a[i][j]+b[i][j];
	 		printf("%3d",c[i][j]);
		 }
		printf("\n");
	 }
	 
	 return 0;

}
