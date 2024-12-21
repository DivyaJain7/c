#include<iostream>
using namespace std;

int main(){
    int arr[]={10,20,30,40,50};
    int max=arr[0];
    int i;
    for(i=0;i<5;i++){
        if(max<arr[i]){
                max=arr[i];
        }
    }
    cout<<max;
    return 0;
}