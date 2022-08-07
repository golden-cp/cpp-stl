#include<bits/stdc++.h>
 
 typedef long long int lli;

 using namespace std;


 int main(){
    string s;
    cin>>s;
    vector<int> ans;
    for(auto& it: s){
        int temp = int(it);
        if(temp > 53){
            ans.push_back(58-temp);
        }
        else{
            ans.push_back(temp-48);
        }
    }
    for(auto& it: ans){
        cout<<it;
    }
    return 0;
 }