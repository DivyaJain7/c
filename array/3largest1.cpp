#include<iostream>
using namespace std;

int main(){
    int arr[]={1000000,2050000,300000,400000,500000};
    int max=0;
    int secondmax=0;
    int thirdmax=0;
    int i;
    for(i=0;i<5;i++){
        if(max<arr[i]){
                thirdmax=secondmax;
                secondmax=max;
                max=arr[i];
        }
        if(arr[i]<max&&arr[i]>secondmax){
            thirdmax=secondmax;
            secondmax=arr[i];
        }
        if(arr[i]<max&&arr[i]<secondmax&&arr[i]>thirdmax){
            thirdmax=arr[i];
        }
    }
    cout<<"largest number is-> "<<max<<endl;
    cout<<"second largest number is-> "<<secondmax<<endl;
    cout<<"third largest number is-> "<<thirdmax<<endl;

    return 0;
}