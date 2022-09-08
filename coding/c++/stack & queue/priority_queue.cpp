#include <bits/stdc++.h>
using namespace std;

// sort element : 
// all element : no unique property
// ascending order in default
// use concept of heap sort
int main()
{
    priority_queue<pair<int, int>> pq;
    pq.push(make_pair(1,1));
    pq.push(make_pair(1,4));

    // for(auto i : pq) cout << i.first << " " << i.second << endl ; :  iterator nai hote 

    // OP : priority jade wale ko milengi if first same hai then second largest hone chaheye  
    // 1 4
    // 1 1
    while(!pq.empty()){
        cout << pq.top().first << " " << pq.top().second << endl ;
        pq.pop();
    }

    // min priority queue
    priority_queue<int , vector<int> , greater<int>> mpq ; // int -> pair<int , int>

    

}