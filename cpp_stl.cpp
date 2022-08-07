#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

void _vec_stl_iterator(vector<int> v){
    cout<<"The elements in the array are: "<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;

    }

    cout<<"Printing with auto"<<endl;
    for(auto i=v.begin(); i!=v.end(); ++i){
        cout<<*i<<endl;

    }

    cout<<"More with auto"<<endl;
    for(auto& it:v){
        cout<<it<<endl;
    }
}

int _vec_get_max_elem(vector<int> v){
    int max_elem = *max_element(v.begin(), v.end()-1);
    cout<<"Max Element in the array is, "<<max_elem<<endl;
    return max_elem;

}

int _vec_get_min_elem(vector<int> v){
    int min_el = *min_element(v.begin(), v.end());
    cout<<"Min element in the array is, "<<min_el<<endl;
    return min_el;

}

vector<int> _vec_get_sorted_arr(vector<int> v, bool desc = false){
    if(desc) sort(v.begin(), v.end(), greater<int>());
    else sort(v.begin(), v.end());
    for(auto& it: v){
        cout<<it<<endl;
    }
    return v;
}

bool sortcrit(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;

}


vector<pair<int, int>> _vec_get_sorted_arr_mod(vector<pair<int, int>> v){
    sort(v.begin(), v.end(), sortcrit);
    for(auto& it: v){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return v;
}


int _get_set_bits(int n){
    int ans = __builtin_popcount(n);
    cout<<ans<<endl;
    return ans;

}


void _show_vector(vector<int> v){
    for(auto& it: v){
        cout<<it<<' ';
    }
    cout<<endl;
}

void _get_next_k_permutation(vector<int> v, int k){
    cout<<"Showing next permutations"<<endl;
    for(int i; i<k; i++){
        next_permutation(v.begin(), v.end());
        _show_vector(v);
    }
}
int main(){
    vector<int> v {4,2,7,3,6,9,11};
    _vec_stl_iterator(v);
    int max_el = _vec_get_max_elem(v); // max element in the array

    int min_el = _vec_get_min_elem(v); // min element in the array

    vector<int> v_sorted = _vec_get_sorted_arr(v = v, true); // sorting the array

    vector<pair<int, int> > vec = {{10,3}, {20, 1}, {30, 2}}; // sorting with criterions
    _vec_get_sorted_arr_mod(vec);


    // Builtin Popcount
    int n = 13;
    _get_set_bits(n); // number of setbits

    // Next Permutation
    vector<int> v3 = {1,2,3,4,5};
    _get_next_k_permutation(v3, 5);

    return 0;
}