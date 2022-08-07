#include<bits/stdc++.h>

using namespace std;

int main(){
    // Normal implementation of priority queue is a Max Heap implementation
    priority_queue<int> pq;
    pq.push(0);
    for(int i=1; i<10; i++){
        pq.push(i);
    }

    while(!pq.empty()){
        int temp = pq.top();
        pq.pop();
        cout<<temp<<'\t';
    }
    cout<<endl;

    // Priority Queue Min Heap IMplementation
    priority_queue<int, vector<int>, greater<int>> pq2;
    for(int j=0; j<10; j++){
        pq2.push(j);
    }

    while(!pq2.empty()){
        int temp2 = pq2.top();
        pq2.pop();
        cout<<temp2<<'\t';
    }
    cout<<endl;


}