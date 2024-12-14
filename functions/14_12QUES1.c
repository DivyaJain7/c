#include<stdio.h>

void largestAndSmallest(int x){
        printf("Number= %d\n",x);
        int largest=0,r,smallest=10;
        while(x>0){
            r=x%10;
            x=x/10;
            if(r>largest){
                    largest=r;
            }
            if(r<smallest){
                    smallest=r;
            }
        }
        printf("Largest digit is= %d\n",largest);
        printf("Smallest digit is= %d\n",smallest);
}

int main(){
    largestAndSmallest(723687);

    return 0;
}