#include<stdio.h>

int main(){
	
	struct{	
		char name[40];
		int lenght;
		struct{
			int day;
			int month;
			int year;		
		}birth;
	}person;
	
	printf("Enter your name:");
	scanf("%s",person.name);
	printf("Enter your lenght:");
	scanf("%d",&person.lenght);
	printf("Enter your birthday:");
	scanf("%d %d %d",&person.birth.day,&person.birth.month,&person.birth.year);
	
	printf("Your name:%s your lenght:%d your birthday:%d %d %d",person.name,person.lenght,person.birth.day,person.birth.month,person.birth.year);
}
