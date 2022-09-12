#include<bits/stdc++.h>
using namespace std ;

int main(){
    // sorting 
    // sort(startIterator , endIterator) : [startIteartor , endIterator) 
    vector<int> vt;
    sort(vt.begin() , vt.end()); // [ begin , end ) : here end - 1 tk karenga 

    int arr[10] ;
    sort(arr , arr+10); // [0 , 10)

    // reverse 
    // reverse(startIterator , endIterator) : [ startIterator , endIterator )
    reverse(vt.begin() , vt.end());
    reverse(arr , arr+10) ;

    // max , min element 
    int ele = *min_element(arr , arr+10);
    int maxi = *max_element(vt.begin() , vt.end());

    // sum in the range 
    // accumulate(startIterator , endIterator , initialSum)
    int sum = accumulate(vt.begin() , vt.end() , 0) ;

    
}