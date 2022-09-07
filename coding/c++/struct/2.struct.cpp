#include <bits/stdc++.h>
using namespace std;

struct node // self defining data type
{
    string name;
    int age;

    node(string name_, int age_)
    {
        name = name_;
        age = age_;
    }
};

int main()
{
    // node first;
    // first.name = "rishij";

    node* first = new node("rishij" , 12);  // better way to do it 

    // cout << first.name << endl;
    cout << first->name << endl ;
}
