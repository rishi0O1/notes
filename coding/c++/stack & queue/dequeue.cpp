#include<bits/stdc++.h>
using namespace std ;



int main(){
    // its like doublly ended queue 
    deque<int> dq ;

    dq.push_front(1) ;
    dq.push_back(2) ;
    dq.pop_back();
    dq.pop_front() ;
    // dq.begin()  , end() , rbegin() , rend() 
    // size , empty , at 

    list<int> lt ;
    // remove(key) -> O(1) operation 
    // all same operation as dequeue 
}