#include<stdio.h>
#include<conio.h>

void main(){
int i,j,a,b;
clrscr();
 for(i=5;i>=1;i--){
   for(a=1;a<i;a++){
       printf(" ");
       }
       for(j=i;j<=5;j++){
       printf("%d",j);
       }
       for(b=4;b>=i;b--){
       printf("%d",b);
       }
       printf("\n");
       }
       getch();

}