#include<bits/stdc++.h>

using namespace std;

int main(){
    int x1, x2, x3;
    cin>>x1>>x2>>x3;
    vector<int> v {x1, x2, x3};
    sort(v.begin(), v.end());
    int ans;
    ans = abs(v[1] - v[0]) + abs(v[1] - v[2]);
    cout<<ans<<endl;
    return 0;
}