/*
    ==========================================
    Problem Number : 41A
    Problem Name   : Translation
    Author         : Saeed Gooda
    ==========================================
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    string t;
    cin >> t;
    reverse(t.begin() , t.end());
    (t == s)? cout << "YES" : cout << "NO";
    return 0;
}
