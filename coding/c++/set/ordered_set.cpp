#include<bits/stdc++.h>
using namespace std ;
// N : size of the set 
int main(){
    set<int> st ; // this will contain element in sorted order ( ascending )

    for(int i=5 ; i>=0 ; i--){
        // inserting of the element / push 
        st.insert(i);   // log(N)
        st.emplace(i);  
    }

    // delete the element : log(N)
    // st.erase(startIterator , endIterator)
    st.erase(st.begin()); // deleteing the 1st element
    // not working  
    // st.erase(st.begin() , (st.begin()+2)); // [) : exclude last element 
    st.erase(5); // st.erase(key)

    // find : functionality : return an iterator if exist else st.end() 
    auto it = st.find(4);

    for(auto it = st.begin() ; it != st.end() ; it++){
        cout << *it << endl ;
    }

    // how many time occurence of key
    st.count(2); // st.count(key)
}