// To include cin and cout functions
#include <iostream> 
// To include all the standard libraries of C++
#include <bits/stdc++.h>

using namespace std;

int main(){

// For taking integer input
    int x;
    cin>>x;
    cout<<x;

// For taking string input
    string name;
    cin>>name;
    cout<<name;

// For taking entire string input in one line
    string sentence;
    getline(cin, sentence);
    cout<<sentence;

    return 0;
}