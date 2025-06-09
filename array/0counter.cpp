#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"size of array:";
    cin>>n;
    int arr[n]={};
    int i,j=0,k;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array:";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(i=0;i<n;i++){
        if(arr[i]==0&&i<n-j-1){
            for(k=i;k<n;k++){
                arr[k]=arr[k+1];
            }
            arr[n-1]=0;
            i--;
            j++;
        }
    }
    cout<<"Final Array:";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}