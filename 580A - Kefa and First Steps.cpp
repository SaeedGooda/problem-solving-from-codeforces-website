/*
    ==========================================
    Problem Number : 580A
    Problem Name   : Kefa and First Steps
    Author         : Saeed Gooda
    ==========================================
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    int Max = 1 , counter = 1;
    for(int i = 1 ; i < n ; i++){
        (a[i] >= a[i-1]) ? counter++ : counter = 1;
        Max = max(counter,Max);
    }
    cout << Max << endl;
    return 0;
}
