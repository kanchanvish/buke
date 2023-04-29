#include<stdio.h>
long tobinary(int);
int main(){
   long bno;
   int dno;
   printf(" Enter any decimal number : ");
   scanf("%d",&dno);
   bno = tobinary(dno);
   printf("The Binary value is : %ld",bno);
   return 0;
}