#include<stdio.h>

void automorphic(int i){
    int j=i,sum=0,product=1;
    while(i>0){
        i%10;
        sum=sum+1;
        i=i/10;
    }
    for(int k=1;k<=sum;k++){
            product=product*10;
    }
    if(((j*j)%product)==j){
        printf("the number is automorphic.");
    }
    else{
        printf("doosra kuch hai ye.");
    }
}

int main(){
    automorphic(2);
    return 0;
}