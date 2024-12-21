#include<iostream>
using namespace std;

void secondlargest(int arr[],int length){
    int max=0,secondmax=0;
    for(int i=0;i<length;i++){
        if(max<arr[i]){
        secondmax=max;
        max=arr[i];
        }
        if(arr[i]<max&&arr[i]>secondmax){
        secondmax=arr[i];
        }
    }
    cout<<"the second largest number is-> "<<secondmax;
}

int main(){
    int array[]={10000,2000,30158,465444,39989};
    int length= sizeof(array)/sizeof(array[0]);
    secondlargest(array,length);
    return 0;
}