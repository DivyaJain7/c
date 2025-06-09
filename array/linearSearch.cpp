#include<iostream>
using namespace std;
int main(){
    int i,target;
    cout<<"number of elements in array:";
    cin>>i;
    int arr[i],x=0,y=0;
    for(x=0;x<i;x++){
        cin>>y;
        arr[x]=y;
    }
    cout<<"Array:"<<endl;
    for(x=0;x<i;x++){
        cout<<arr[x]<<" ";
    }
    cout<<endl;
    cout<<"element to be found:";
    cin>>target;
    for(x=0;x<i;x++){
        if(arr[x]==target){
            cout<<"element found at:"<<x;
            y++;
        }
    }
    if(y==0){
        cout<<"element not found";
    }
return 0;
}