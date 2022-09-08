#include<bits/stdc++.h>
using namespace std ;

// log N time complexity 
int main(){
    // mutiset store the elemeent in 
    // sorted order 
    // not unique : store duplicates
    multiset<int> mset = {1,1,1,1,5,3,2} ;

    for(auto ele: mset) cout << ele << endl ;
}