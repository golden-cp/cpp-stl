#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef pair<int, int> pii;
typedef pair<LL, LL> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<LL> vl;
typedef vector<vl> vvl;

struct myType{
    string name;
    string title;
    string roll_no;
    double grade;
    int grad_year;
    string inst;

};

myType _create_my_type(string name, string title, 
                        string roll_no, double grade, 
                        int grad_year, string inst){
    myType m;
    m.name = name;
    m.title = title;
    m.roll_no = roll_no;
    m.grade = grade;
    m.grad_year = grad_year;
    m.inst = inst;
    return m;
}

void _show_my_type(myType m){
    cout<<"Name: "<<m.name<<endl;
    cout<<"Title: "<<m.title<<endl;
    cout<<"Roll No: "<<m.roll_no<<endl;
    cout<<"grade: "<<m.grade<<endl;
    cout<<"Graduation Year: "<<m.grad_year<<endl;
    cout<<"Institute: "<<m.inst<<endl;

}



void _multimap_ops(){
    multimap <int, int> m;
    for(int i=0; i<=8; i++){
        m.insert({i, i*i});
    }
    m.insert({3, 17});

    cout<<"First"<<"\t"<<"Second"<<endl;
    for(auto& it: m){
        cout<<it.first<<"\t"<<it.second<<endl;
    }

    int n = 2;
    if(m.find(n) != m.end()){
        cout<<"Element is present in the multiset!!"<<endl;

    }else{
        cout<<"Element is not present in the multiset!!"<<endl;
    }

    m.erase(m.begin());
    cout<<"After erasing the first element"<<endl;   
    cout<<"First"<<"\t"<<"Second"<<endl;
    for(auto& it: m){
        cout<<it.first<<"\t"<<it.second<<endl;
    }

    cout<<"Size of the multiset "<<m.size()<<endl;

    // Some other functionalities
    // cout<<"First Element in the multimap: "<<*m.cbegin()<<endl;
    // cout<<"Last theoretical Element in the multimap: "<<*m.cend()<<endl;
    // cout<<"First Element in the reversed multimap: "<<*m.rbegin()<<endl;
    // cout<<"Last Element in the reversed multimap: "<<*m.rbegin()<<endl;
    // m.empty() -> Return if the multimap is empty or not



}



int main(){
    myType r;
    r = _create_my_type("Rahul", "Golder", "19CH30042", 8.07, 2024, "IIT Kharagpur");
    _show_my_type(r);
    _multimap_ops();

    return 0;
}