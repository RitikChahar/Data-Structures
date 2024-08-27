#include <iostream>
#include <vector>
using namespace std;

int count = 0;

// Basic Recursion
void basic_recursion()
{
    if (count == 4)
        return;
    cout << count << endl;
    count++;
    basic_recursion();
}

// Printing Name n times using Recursion
void print_name(string name, int n)
{
    if (count == n)
        return;
    cout << name << endl;
    count++;
    print_name(name, n);
}

// Printing Linearly from 1 to n using Recursion
void print_linearly(int n)
{
    if (count == n)
        return;
    cout << count + 1 << endl;
    count++;
    print_linearly(n);
}

// Printing Linearly from n to 1 using Recursion
void print_linearly_opp(int n)
{
    if (count == n)
        return;
    cout << n - count << endl;
    count++;
    print_linearly_opp(n);
}

// Printing Linearly from 1 to n using Backtracking
void print_linearly_backtracking(int i, int n)
{
    if (i < 1)
        return;
    print_linearly_backtracking(i - 1, n);
    cout << i << endl;
}

// Printing Linearly from n to 1 using Backtracking
void print_linearly_backtracking_opp(int i, int n)
{
    if (i > n)
        return;
    print_linearly_backtracking_opp(i + 1, n);
    cout << i << endl;
}

// Sum of first N numbers using Recursion (Parameterised)
int sum_of_n(int n, int sum)
{
    if (n < 1)
        return sum;
    sum_of_n(n - 1, sum + n);
}

// Sum of first N numbers using Recursion (Functional)
int sum_of_n_2(int n)
{
    if (n == 0)
        return 0;
    return n + sum_of_n_2(n - 1);
}

// Factorial of N using Recursion (Parameterised)
int factorial_1(int n, int value)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return value;
    factorial_1(n - 1, value * n);
}

// Factorial of N using Recursion (Functional)
int factorial_2(int n)
{
    if (n == 0)
        return 1;
    return n * factorial_2(n - 1);
}

// Reverse of an array using Recursion
void reverse(int l, int r, vector<int> &list)
{
    if (l >= r)
        return;
    swap(list[l], list[r]);
    reverse(l + 1, r - 1, list);
}

//  Checking if a string is Palindrome using Recursion
bool if_palindrome(int l, int r, string S)
{
    if (l >= r)
        return true;
    if (S[l] != S[r])
        return false;
    return if_palindrome(l + 1, r - 1, S);
}

// Fibonacci Series using Recursion
int fibaonacci(int n)
{
    if (n <= 1)
        return n;
    return fibaonacci(n-1) + fibaonacci(n-2);
}

int main()
{
    // basic_recursion();
    // print_name("Ritik", 2);
    // print_linearly(4);
    // print_linearly_opp(4);
    // print_linearly_backtracking(3, 3);
    // print_linearly_backtracking_opp(1, 3);

    // int sum = sum_of_n(10, 0);
    // cout << sum << endl;

    // int sum = sum_of_n_2(10);
    // cout << sum << endl;

    // int value = factorial_1(6, 1);
    // cout << value << endl;

    // int value = factorial_2(1);
    // cout << value << endl;

    // vector<int> list = {1, 3, 5, 6, 2, 7};
    // reverse(0, 5, list);
    // for (size_t i = 0; i < list.size(); ++i) {
    //     cout << list[i] << " ";
    // }
    // cout << endl;

    // bool answer = if_palindrome(0, 4, "ritik");
    // cout<<answer<<endl;

    int value = fibaonacci(6);
    cout<<value<<endl;
}