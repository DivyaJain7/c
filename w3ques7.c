#include<stdio.h>

void primeNumber(){
   int i,j,sum=0;
    scanf("%d",&i);
    for(j=2;j<i;j++){
        if(i%j==0){
          sum=sum+j;
          }
        }
 if(sum==0&&i>1){
        printf("it is a prime number.");
    }
    else{
        printf("you're not as unique as prime no.");
    }
}

int main(){
    primeNumber();

    return 0;
}