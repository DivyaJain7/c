#include<stdio.h>

void array(){
      int i,j,r,s,t=0;
    scanf("\n%d",&i);
    j=i;
    while(i!=0){
        r=i%10;
         i=i/10; 
         int sum=1;
        for(s=1;s<=r;s++){
           sum=sum*s; 
        }
       t=t+sum;
    }
      if(t==j){
          printf("it is a strong number.");
      }
      else{
          printf("tu kamzor hai.");
      }
}