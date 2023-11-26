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

#include <iostream>
using namespace std;

int main()
{
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
}