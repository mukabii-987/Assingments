/*
Author:Finney Ndereba
Date:4/9/2024
Reg No:ED102/G/18034/23
*/
//preprocessor directive scanf(), printf()
#include<stdio.h>
int main(){
//declraand initialisation of variables
char a = 'h';
char name[]={"Finney"};//%s
int age =20;//%d
float salary = 2000.50;//%f
double budget =100000;//%1f
printf("Please enter a character:");
scanf("%c" ,&a);
printf("This is a character %c \n",a);
printf("Enter your name:");
scanf("%s",&name);
printf("This is a string %s \n",name);
printf("Enter your age:");
scanf("%d" ,&age);
printf(" The age(int) is %d \n",age);
printf("Please enter your salary:");
scanf("%.2f" ,&salary);
printf("The salary is %.2f \n", salary);
printf("Please enter your budget:");
scanf("%1f" ,&budget);
printf("The budget is %.1f \n",budget);
/*
printf("Variables and Data Types \n");
printf("This is a character %c \n",a);
printf("This is a string %s \n",name);
printf(" The age(int) is %d \n",age);
printf("The salary is %.2f \n", salary);
printf("The budget is %.1f \n",budget);
*/
return 0;
}
    