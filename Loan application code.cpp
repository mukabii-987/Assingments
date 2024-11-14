#include<stdio.h>
int main(){
	int age;
	int income;
	printf("Enter your age:");
	scanf("%d", &age);
	printf("Enter the annual income:");
	scanf("%d", &income);
	if(age>=21 && income>=21000){
		printf("Congratulations you qualify for a loan");
	}
	return 0;
}
