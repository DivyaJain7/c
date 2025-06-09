#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"size of array:";
    cin>>n;
    int arr[n]={};
    int i,j,count=0,target;
    for(i=0;i<n;i++){
        cout<<"Element "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<"Array: ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Sum: ";
    cin>>target;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<arr[i]<<","<<arr[j]<<endl;
            }
        }
    }
return 0;
}