#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    vector<int> v;
    v.push_back(k * l / nl);
    v.push_back(c * d);
    v.push_back(p / np);
    int ans = *min_element(v.begin(), v.end()) / n;
    cout<<ans<<endl;
    return 0;
}