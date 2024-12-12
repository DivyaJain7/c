#include<stdio.h>

int primeORevenodd(int i,int k){
   int j,sum=0;
    for(j=2;j<i;j++){
        if(i%j==0){
          sum=sum+j;
          }
        }
 if(sum==0&&i>1){
    return i*k;
 }
 else{
        if(i%2==0){
            printf("first number is even.\n");
        }
        else{
            printf("first number is odd.\n");
        }
    }
}

int main(){
   int r= primeORevenodd(4,9);
   if(r>0){
   printf("the product is %d",r);
   }
}