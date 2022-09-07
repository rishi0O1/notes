#include<bits/stdc++.h>
using namespace std ;

int arr1[100] ; // { 0 , 0 ,,,,,,  } : globally do not contain garbage value in it 
int main(){
    int arr3[100] ; // { ? , ? ,,,,,,  } : contain garbage value in it

    // this one is the container in c++  
    array<int , 10> arr ; // another method to make an array , each value in garbage

    array<int , 5> arr2 = {1,2,4} ; // [1,2,4,0,0,0,0,0...] : here all other value are 0 

    // arr2.fill(1) ; // fill all the place with 1 

    for(int i=0 ; i<5 ; i++){
        cout << arr2.at(i) << endl ;
    }



    // iterator : 
    
    // begin() : point to the start of the element 
    // end() : point to the end of the array i.e no element of the array 
    // rbegin() : point to the last element of the array 
    // rend() : 

    cout << "iterator output " << endl ;
    for(auto it = arr2.begin() ; it != arr2.end() ; it++){
        cout << *it << endl ;
    }

    cout << " for each output " << endl ;
    for(auto it: arr2){
        cout << it << endl ;
    }

    // size of the array 
    cout << arr2.size() << endl ;
}