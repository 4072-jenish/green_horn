#include<stdio.h>
#include<conio.h>

void main(){
   int H,D,T,B;
    clrscr();
   printf("Enter BAS SALARY: ");
   scanf("%d",&B);

    H = B*10/100;
    D = B*5/100;
    T = B*8/100;




   printf("total salary is %d",H+D+T+B);

     getch();



}
