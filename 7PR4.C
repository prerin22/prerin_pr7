#include<stdio.h>
#include<conio.h>

void main(){
int i,j,a;
clrscr();
  for(i=1;i<=5;i++){
      for(a=1;a<i;a++){
       printf(" ");

      }
      for(j=5;j>=i;j--){
      (j%2==1)?
      printf("1"):printf("0");


      }
      printf("\n");
  }
getch();
}

