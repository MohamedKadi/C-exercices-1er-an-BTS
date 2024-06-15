#include<stdio.h>

struct date{
	int days;
	int monthly;
	int yearly;
};

struct date remplir(){
	struct date date1;
	printf("date: ");
	do{
		scanf("%d/%d/%d",&date1.days,&date1.monthly,&date1.yearly);
	}while((date1.days>32 || date1.days<0) && (date1.monthly>13 || date1.days<0) && (date1.days>0 || date1.days<2030));
	
	return date1;
}

void showdate(struct date date1){
	printf("day: %d / month: %d / year: %d \n",date1.days,date1.monthly,date1.yearly);
}

void nextday(struct date date1){
	date1.days++;
	if(date1.days == 32){
		date1.days= 1;
		date1.monthly++;
		if(date1.monthly==13){
			date1.monthly=1;
			date1.yearly++;
		}
	}
	printf("day: %d / month: %d / year: %d \n",date1.days,date1.monthly,date1.yearly);
}

int main(){
	struct date date1;
	
	date1 = remplir();
	showdate(date1);
	nextday(date1);
	
	return 0;
}
