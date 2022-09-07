#include<bits/stdc++.h>
using namespace std ;

int main(){

    vector<int> b(7 , 0) ; // size of the array is 7 and all have 0 in it 

    vector<int> a ; // {} : size 0 

    // insert element : 
    a.push_back(1);     // use emplace_back(1) : same as p
    // segmentation error if 10^7 element insert ho rahe hai : as limit hai main mai array ki size ki 

    // pop element from last 
    a.pop_back();

    // erase all element 
    a.clear(); 

    // copy of the element in the other vector 
    vector<int> arr1(4 , 1) ;   // [1 ,1 ,1, 1]
    
    vector<int> arr2(arr1.begin() , arr1.end()); // deep copy in int data type
    // trick : 
    vector<int> arr4(arr1.begin() , arr1.begin()+2); // here comes the 1st 2 element from the array 

    vector<int> arr3(arr1); // another method for copy deep copy
    
    arr1[0] = 0 ;
    
    cout << "copy output " << endl ;
    for(int i: arr2) cout << i << endl ;
    cout << "copy 2 output " << endl ;
    for(int i: arr3) cout << i << endl ;


}