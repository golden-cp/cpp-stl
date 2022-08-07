#include<bits/stdc++.h>

using namespace std;

int main(){
    pair<int, int> cur_pos;
    cin>>cur_pos.first>>cur_pos.second;
    if(cur_pos.first >= 5 or cur_pos.first < 0 or cur_pos.second >= 5 or cur_pos.second < 0){
        cout<<"Invalid Input!!"<<endl;
        return -1;
    }
    pair<int, int> target_pos (2, 2);
    int min_ops;
    min_ops = abs(cur_pos.first - target_pos.first) + abs(cur_pos.second - target_pos.second);
    cout<<min_ops<<endl;
    return 0;
}