#include<stdio.h>

int main(){int bookID, dueDate, returnDate, daysOverdue; 
int fineRate =0, fineAmount =0;
printf("Enter Book ID:");
scanf("%d", &bookID);
printf("Enter Due Date (as a day number):");
scanf("%d", &dueDate);
printf("Enter Return Date(as a day number):");
scanf("%d", &returnDate);
daysOverdue = returnDate - dueDate;
if(daysOverdue <=0){
	fineRate =0;
	fineAmount=0;
} else if(daysOverdue <=7){
fineRate = 20;
fineAmount=daysOverdue * fineRate;
} else if(daysOverdue<=14){
	fineRate=50;
	fineAmount = daysOverdue * fineRate;
} else{
	fineRate=100;
	fineAmount = daysOverdue * fineRate;
}

	printf("\n---Library Fine Details---\n");
	printf("Book ID: %d\n", bookID);
	printf("Due Date: %d\n", dueDate);
	printf("Return Date: %d\n", returnDate);
	printf("Days Overdue: %d\n", (daysOverdue>0) ? daysOverdue : 0);
	printf("Fine Rate: Ksh. %d per day\n", fineRate);
	printf("Total Fine Amount: Ksh. %d\n", fineAmount);
return 0;}