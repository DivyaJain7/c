#include<stdio.h>

void sumOfseries(){
    int x,i,f=1,factorial,total=0;
    printf("enter the range-> ");
    scanf("%d",&x);
    for(i=1;i<=x;i++){
            f=f*i;   
            factorial=f/i;
            total=total+factorial;
    }
    printf("the sum of the series is:%d",total);
}

int main(){
    sumOfseries();

    return 0;
}