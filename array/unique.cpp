#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"size of array:";
    cin>>n;
    int arr[n]={};
    int i,k,j;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array:";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<n;i++){
        j=0;
        for(k=0;k<n;k++){
            if(arr[i]==arr[k]){
                j++;
            }
        }
        if(j<2){
            cout<<arr[i]<<" ";
        }
    }
return 0;
}