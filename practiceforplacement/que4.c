#include<stdio.h>

int main(){

   int i=1,j=0;

   if(i--==j){
    printf("yes");
    printf("%d",i);
   }
   else{
    printf("%d",++j);
   }
//    printf("%d%d",i++,++j);
}