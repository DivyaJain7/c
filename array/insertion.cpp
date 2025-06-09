#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n]={};
//insertion of elements in array
    for(int i=0;i<n;i++){
        cout<<"insert number "<<i+1<<": ";
        cin>>arr[i];
    }
//array
    cout<<"Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
//deletion
    cout<<endl;
    int m;
    cout<<"Delete number at index: ";
    cin>>m;
    for(int i=m;i<n;i++){
        arr[i]=arr[i+1];
    }
    n=n-1;
    cout<<"Final Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}