/*
    ==========================================
    Problem Number : 158B
    Problem Name   : Taxi
    Author         : Saeed Gooda
    ==========================================
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[5] = {0} , s;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> s;
        ++arr[s];
    }

    cout << arr[4] + arr[3] + (arr[2]*2 + max(0,arr[1]-arr[3])+3)/4;
}
