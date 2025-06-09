#include<iostream>
using namespace std;
int main(){
    int i,j,k,n;
    cin>>n;
    for(i=n;i>=1;i--){
    for(j=i;j<n;j++){
        cout<<" ";
    }
    for(k=2*i-1;k>0;k--)
    cout<<"*";
    cout<<endl;
}
return 0;
}