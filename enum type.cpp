#include<stdio.h>
#include<stdlib.h>

int main(){
	
	enum week{mon,tue,wed,thur,fri,sat,sun
	};
	
	enum week day;
	day=wed;
	printf("%d",day);
	return 0;
}
