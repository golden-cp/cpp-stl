#include<bits/stdc++.h>

using namespace std;

int process_query(int k, string s){
    if(s == "++X" || s == "X++"){
        k++;

    }
    else{
        k--;
    }
    return k;
}


int main(){
    int n;
    cin>>n;
    int ans = 0;
    for(int i=0; i<n; i++){
        string temp;
        cin>>temp;
        ans = process_query(ans, temp);

    }
    cout<<ans<<endl;
    return ans;
}