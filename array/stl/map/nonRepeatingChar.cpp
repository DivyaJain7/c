#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;
    int i=0;
    map<char,int>NRC;
    cout<<"String: ";
    cin>>name;
    for (char c:name)
    {
        NRC[c]++;
    }
    for(auto &it: NRC){
        cout<<it.first<<","<<it.second<<endl;
    }
    for(char c:name){
        if(NRC[c]==1){
            cout<<c;
            return 0;
         }
    }
return 0;
}