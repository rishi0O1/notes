#include<bits/stdc++.h>
using namespace std ;
// N : size of the set 
int main(){
    set<int> st ; // this will contain element in sorted order ( ascending )

    for(int i=5 ; i>=0 ; i--){
        // inserting of the element / push 
        st.insert(i);   // log(N)
    }

    // delete the element 
    st.erase(st.begin()); // deleteing the 1st element
    // not working  
    // st.erase(st.begin() , (st.begin()+2)); // [) : exclude last element 

    for(auto it = st.begin() ; it != st.end() ; it++){
        cout << *it << endl ;
    }
}