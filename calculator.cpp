#include<bits/stdc++.h>

using namespace std;

int add(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;

}

int mul(int a, int b){
    return a * b;

}

float divison(int a, int b){
    return a / b;

}


int main(){
    int a, b;
    cin>>a>>b;
    int c, d, e;
    float f;
    c = add(a, b);
    d = sub(a, b);
    e = mul(a, b);
    f = divison(a, b);
    cout<<c<<endl<<d<<endl<<e<<endl<<f<<endl;

}