#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int>map1;
    int arr1 [5]={1,2,3,1,5};
    for (int i = 0; i <5; i++)
    {
        map1[arr1[i]]++;
    }
    for(auto &it: map1){
        cout<<it.first<<","<<it.second<<endl;
    }
return 0;
}