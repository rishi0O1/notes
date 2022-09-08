#include<bits/stdc++.h>
using namespace std ;

// dictionay 
int main(){
    // keys ke acording sorted rahengi 
    // unique 
    map<string , int> m ;
    m["rishij"] = 12 ;
    m["a"] = 1;

    m.emplace("rishij" , 23);

    // delete
    m.erase("rishij");
    m.clear(); // all element in map 

    // empty or not 
    m.empty();

    for(auto i: m){
        cout << i.first << " " << i.second << endl ;
    }
}