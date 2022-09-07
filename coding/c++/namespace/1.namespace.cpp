#include <bits/stdc++.h>
using namespace std;

namespace test
{
    int val = 10 ;
}

int main()
{
    // int val = 10; // conflict as they are in the same namespace with same variable name
    // double val = 12.0 ;
    int val = 10 ;

    cout << val << endl;
    cout << test::val << endl;
}