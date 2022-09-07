#include<bits/stdc++.h>
using namespace std ;

int main(){
    // assignment 
    vector<vector<int>> arr ; // [ [ 1,2,4 ] , [  ] , ...   ]

    vector<vector<int>> arr3(10 , vector<int>(20 , 0)); // i.e related to single vector initialisation  

    vector<int> arr2[4] ; // not same as vector<vector<int>> arr(4 , vector<int>) as we have to mention the column limit  

    vector<vector<int>> arr(4 , vector<int>(10)) ;

    vector<int> insert1 = {1,2,3,4};

    arr.push_back(insert1);
}