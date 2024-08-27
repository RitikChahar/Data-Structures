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

// Data Types in C++
    int a = 10;
    long b = 1000000;
    long long c = 100000000000;
    float d = 10.44;
    double e = 10.444444;
    char f = 'R';
    string g = "Ritik";

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e<<endl;
    cout<<f<<endl;
    cout<<g<<endl;

// Conditional Statements

    /*
    C++ Program for grade system
    100 – 91 A+
    90 – 81	 A
    80 – 71	 B+
    70 – 61	 B
    60 – 51	 C
    50 – 41	 D
    40 – 31	 E
    30 – 0	 F
    */

    int x;
    cin >> x;
    if (x > 100)
    {
        cout << "Enter correct marks";
    }
    else if (x > 90)
    {
        cout << "Your grade is A+";
    }
    else if (x > 80)
    {
        cout << "Your grade is A";
    }
    else if (x > 70)
    {
        cout << "Your grade is B+";
    }
    else if (x > 60)
    {
        cout << "Your grade is B";
    }
    else if (x > 50)
    {
        cout << "Your grade is C";
    }
    else if (x > 40)
    {
        cout << "Your grade is D";
    }
    else if (x > 30)
    {
        cout << "Your grade is E";
    }
    else
    {
        cout << "Your grade is F";
    }
    return 0;

// Switch Case Statements in C++
// C++ program to print Monday if it's 1 and so on.

    int day;
    cin>>day;
    switch (day)
    {
    case 1:
        cout<<"It's Monday";
        break;
    
    case 2:
        cout<<"It's Tuesday";
        break;
    
    case 3:
        cout<<"It's Wednesday";
        break;
    
    case 4:
        cout<<"It's Thursday";
        break;
    
    case 5:
        cout<<"It's Friday";
        break;
    
    case 6:
        cout<<"It's Saturday";
        break;
    
    case 7:
        cout<<"It's Sunday";
        break;
    
    default:
        cout<<"Invalid Day Number";
        break;
    }

    return 0;
}