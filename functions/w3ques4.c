#include<stdio.h>

void evenodd(){
    int x;
    printf("enter the number-> ");
    scanf("%d",&x);
    while(x>0){
    if(x%2==0){
            printf("it is even.\nenter the number-> ");
    }
    else{
        printf("it is odd.\nenter the number-> ");
    }
    scanf("%d",&x);
    }
}

int main(){
    evenodd();

    return 0;
}