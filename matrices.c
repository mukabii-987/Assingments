//c arrays
#include<stdio.h>

int main()

{ 
int i;
int j;
int marks[2][3]={
{40,10,20} ,
{50,80,70} 
};
for(i=0;i<2;i++){//rows
for(j=0;j<3;j++){//columns 
printf("%d\n",marks[i][j]);
}
}
    return 0;
}