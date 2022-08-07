#include<bits/stdc++.h>

using namespace std;

int main(){
    list<int> l;
    int k;
    int t;
    l.push_back(1); // Push at the back
    l.push_front(2); // Push at the front
    l.push_back(3); // Push at the back
    l.push_front(4); // Push at the front
    l.push_back(5); // Push at the back
    l.push_front(6); // Push at the front
    l.push_back(7); // Push at the back
    l.push_front(8); // Push at the front
    t = l.front(); // Get the ref of front element
    cout<<t<<endl;
    t = l.back(); // Get the ref of back Element
    cout<<t<<endl;
    l.size(); // Size of the list
    l.pop_front(); // Pop the front element
    // cout<<k<<endl;
    l.pop_back(); // Pop the back element
    // cout<<k<<endl;
    if(l.empty()){
        cout<<"List is Empty!!"<<endl;
    }else{
        cout<<"List isn't Empty"<<endl;
    } // Checks if list is empty
    l.reverse(); // Reverse the list
    cout<<"The list now is ..."<<endl;
    for(auto& it: l){
        cout<<it<<endl;
    }
    l.sort(); // Sort the list
    cout<<"The list now after sort is ..."<<endl;
    for(auto& it: l){
        cout<<it<<endl;
    }
    return 0;
}