#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"size of array:";
    cin>>n;
    int arr[n]={};
    int i,count=0,target;
    for(i=0;i<n;i++){
        cout<<"Element "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<"Array: ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"element to be found: ";
    cin>>target;
    for(i=0;i<n;i++){
        if(target==arr[i]){
            count++;
        }
    }
    cout<<target<<" occured "<<count<<" times";
return 0;
}