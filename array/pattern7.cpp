#include<iostream>
using namespace std;
int main(){
    int i,j,k,n;
    cin>>n;
    for(i=1;i<=n;i++){
    for(j=i;j<=n;j++){
        cout<<" ";
    }
    for(k=0;k<2*i-1;k++)
    cout<<"*";
    cout<<endl;
}
return 0;
}