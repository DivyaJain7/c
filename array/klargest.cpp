#include<iostream>
using namespace std;

int main(){
    int arr[]={10,25,3,4,20};
    int length=sizeof(arr)/sizeof(arr[0]);
    int MAX=200000000;
    int i,j,k;
    cin>>k;
    for(j=1;j<=k;j++){
        int max=0;
        for(i=0;i<length;i++){
            if(max<arr[i]&&arr[i]<MAX){
                max=arr[i];
            }
        }
        MAX=max;
        cout<<j<<"st largest number: "<<max<<endl;
    }
    return 0;
}